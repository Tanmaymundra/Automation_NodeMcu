const char page[] PROGMEM = R"=====(
<!Doc Type HTML>

<html>
<title>	Web Automation </title>
<!var R1,R2,R3,R4,R5,R6,R7,R8>
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

<p class="r_text"><strong>Relay 1 -&nbsp;</strong> <a href="R1ON"><button>ON<R1=1></button></a> <a href="R1OFF"><button>OFF<R1=0></button></a></p>

<p class="g_text"><strong>Relay 2 -&nbsp;</strong> <a href="R2ON"><button>ON</button></a> <a href="R2OFF"><button>OFF</button></a></p>

<p><strong>Relay 3 -&nbsp;</strong> <a href="R3ON"><button>ON</button></a> <a href="R3OFF"><button>OFF</button></a></p>

<p><strong>Relay 4 -&nbsp;</strong> <a href="R4ON"><button>ON</button></a> <a href="R4OFF"><button>OFF</button></a></p>

<p><strong>Relay 5 -&nbsp;</strong> <a href="R5ON"><button>ON</button></a> <a href="R5OFF"><button>OFF</button></a></p>

<p><strong>Relay 6 -&nbsp;</strong> <a href="R6ON"><button>ON</button></a> <a href="R6OFF"><button>OFF</button></a></p>

<p><strong>Relay 7 -&nbsp;</strong> <a href="R7ON"><button>ON</button></a> <a href="R7OFF"><button>OFF</button></a></p>

<p><strong>Relay 8 -&nbsp;</strong> <a href="R8ON"><button>ON</button></a> <a href="R8OFF"><button>OFF</button></a></p>

<p class="b_text"><strong>All Relays-&nbsp;</strong> <a href="RON"><button>ON</button></a> <a href="ROFF"><button>OFF</button></a></p>

</html>

)=====";
