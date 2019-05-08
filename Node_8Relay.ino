#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include<ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include "index.h" //Imports HTML file from Index.h

const char* ssid="xxxxx"; //Enter your Wifi Name
const char* password ="xxxx"; //Enter your Wifi Password
//char b,char1,char2;

ESP8266WebServer server(80); //Creates Instance of Web Server

//String page = "";
int LEDPin = 13;
int R1=D0;
int R2=D1;
int R3=D2;
int R4=D3;
int R5=D4;
int R6=D5;
int R7=D6;
int R8=D7;

bool b1,b2,b3,b4,b5,b6,b7,b8;
b1=b2=b3=b4=b5=b6=b7=b8=false;
static char relay_pins[] = {R1,R2,R3,R4,R5,R6,R7,R8};

void web_page(){
   
   server.on("/R1ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R1, LOW);
    b1= true;
    delay(500);
  });
  server.on("/R1OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R1, HIGH);
    b1=false;
    delay(500); 
  });
  server.on("/R2ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R2, LOW);
    b2= true;
    delay(500);
  });
  server.on("/R2OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R2, HIGH);
    b2= false;
    delay(500); 
  });
  server.on("/R3ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R3, LOW);
    b3= true;
    delay(500);
  });
  server.on("/R3OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R3, HIGH);
    b3= false;
    delay(500); 
  });
  server.on("/R4ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R4, LOW);
    b4= true;
    delay(500);
  });
  server.on("/R4OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R4, HIGH);
    b4= false;
    delay(500); 
  });
  server.on("/R5ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R5, LOW);
    b5= true;
    delay(500);
  });
  server.on("/R5OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R5, HIGH);
    b5= false;
    delay(500); 
  });
  server.on("/R6ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R6, LOW);
    b6= true;
    delay(500);
  });
  server.on("/R6OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R6, HIGH);
    b6= false;
    delay(500); 
  });
  server.on("/R7ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R7, LOW);
    b7= true;
    delay(500);
  });
  server.on("/R7OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R7, HIGH);
    b7= false;
    delay(500); 
  });
  server.on("/R8ON", [](){
    server.send(200, "text/html", page);
    digitalWrite(R8, LOW);
    b8= true;
    delay(500);
  });
  server.on("/R8OFF", [](){
    server.send(200, "text/html", page);
    digitalWrite(R8, HIGH);
    b8= false;
    delay(500); 
  });
  server.on("/RON",[](){
    server.send(200,"text/html", page);
    for (int a=1; a <=8; a++){
  digitalWrite(relay_pins[a], LOW);
  }
  b1=b2=b3=b4=b5=b6=b7=b8=true;
  delay(1000);
  });
  server.on("/ROFF",[](){
    server.send(200,"text/html", page);
    for (int a=1; a <=8; a++){
  digitalWrite(relay_pins[a], HIGH);
  }
  b1=b2=b3=b4=b5=b6=b7=b8=false;
  delay(1000);
  });
}
void setup(void){

for (int i=1; i <=8; i++){
  pinMode(relay_pins[i], OUTPUT);
  digitalWrite(relay_pins[i], HIGH);
}
  delay(1000);
  Serial.begin(115200);
  WiFi.begin(ssid, password); //begin WiFi connection
  Serial.println("");
 
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  MDNS.begin("Esp8266");  //Access using Esp8266.local on web Browser
   
  server.on("/", [](){
    server.send(200, "text/html", page);
  });
web_page();
  server.begin();
  Serial.println("Web server started!");
}
 
void loop(void){
  server.handleClient();
}
