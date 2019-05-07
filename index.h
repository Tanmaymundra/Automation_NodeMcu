const char page[] PROGMEM = R"=====(
<!Doc Type HTML>
<html>
<title>	Web Automation </title>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.0/jquery.min.js"></script>
<script>
$(document).ready(function(){
 
 $(".buttonon1").click(function(){ 
 	$(".go1").css("color","green") });
 $(".buttonon2").click(function(){ 
 	$(".go2").css("color","green") });
 $(".buttonon3").click(function(){ 
 	$(".go3").css("color","green") });
 $(".buttonon4").click(function(){ 
 	$(".go4").css("color","green") });
 $(".buttonon5").click(function(){ 
 	$(".go5").css("color","green") });
 $(".buttonon6").click(function(){ 
 	$(".go6").css("color","green") });
 $(".buttonon7").click(function(){ 
 	$(".go7").css("color","green") });
 $(".buttonon8").click(function(){ 
 	$(".go8").css("color","green") });
 
 $(".buttonoff1").click(function(){ 
 	$(".go1").css("color","red") });
 $(".buttonoff2").click(function(){ 
 	$(".go2").css("color","red") });
 $(".buttonoff3").click(function(){ 
 	$(".go3").css("color","red") });
 $(".buttonoff4").click(function(){ 
 	$(".go4").css("color","red") });
 $(".buttonoff5").click(function(){ 
 	$(".go5").css("color","red") });
 $(".buttonoff6").click(function(){ 
 	$(".go6").css("color","red") });
 $(".buttonoff7").click(function(){ 
 	$(".go7").css("color","red") });
 $(".buttonoff8").click(function(){ 
 	$(".go8").css("color","red") });

 
 
});
</script>

<style type="text/css">
	h1{
		font-family: courier,courier-new,serif;
		font-size: 20pt;
		color: blue;
		border-bottom: 2px solid blue;
	}
	p{
		font-family: arial,verdana,sans-serif;
		font-size: 18pt;
		color: #6B6BD7;
	}
	.r_text{
		color: red;
	}
	.g_text{
		color:green;
	}
	.b_text{
		color:blue;
	}
	
</style>
<h1 style="text-align: center;"><strong>Node MCU WEB Control</strong></h1>
<h2><strong>Relay Status</strong></h2>
<p class="go1"><strong>Relay 1 -&nbsp;</strong> <a><button class="buttonon1">ON</button></a> <a><button class="buttonoff1">OFF</button></a></p>
<p class="go2"><strong>Relay 2 -&nbsp;</strong> <a href="R2ON"><button class="buttonon2">ON</button></a> <a href="R2OFF"><button class="buttonoff2">OFF</button></a></p>
<p class="go3"><strong>Relay 3 -&nbsp;</strong> <a href="R3ON"><button class="buttonon3">ON</button></a> <a href="R3OFF"><button class="buttonoff3">OFF</button></a></p>
<p class="go4"><strong>Relay 4 -&nbsp;</strong> <a href="R4ON"><button class="buttonon4">ON</button></a> <a href="R4OFF"><button class="buttonoff4">OFF</button></a></p>
<p class="go5"><strong>Relay 5 -&nbsp;</strong> <a href="R5ON"><button class="buttonon5">ON</button></a> <a href="R5OFF"><button class="buttonoff5">OFF</button></a></p>
<p class="go6"><strong>Relay 6 -&nbsp;</strong> <a href="R6ON"><button class="buttonon6">ON</button></a> <a href="R6OFF"><button class="buttonoff6">OFF</button></a></p>
<p class="go7"><strong>Relay 7 -&nbsp;</strong> <a href="R7ON"><button class="buttonon7">ON</button></a> <a href="R7OFF"><button class="buttonoff7">OFF</button></a></p>
<p class="go8"><strong>Relay 8 -&nbsp;</strong> <a href="R8ON"><button class="buttonon8">ON</button></a> <a href="R8OFF"><button class="buttonoff8">OFF</button></a></p>
<p class="b_text"><strong>All Relays-&nbsp;</strong> <a href="RON"><button>ON</button></a> <a href="ROFF"><button>OFF</button></a></p>
</html>

)=====";
