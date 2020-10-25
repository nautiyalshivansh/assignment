<title>QUESTION 1 SOLUTION</title>
<style type="text/css">
#cir
{
  height: 150px;
  width: 150px;
  background-color: blue;
  boder-color: black;
  border-radius: 50%;
  boder-style: solid;
}
</style>
<script type="text/javascript">
function colorchange(){
	 var cho="0123456789ABCDEF";
 var color='#';
var x=0;
while (x<6){
var ran=Math.ceil(Math.random()*14);
color=color + cho[ran];
x=x+1;
}
document.getElementById('cir').style.backgroundColor= color;
}
</script>
<center><h1 style="color:red ;align:center;">RANDOM COLOR CHANGING CIRCLE</h1>
</center>
<br>
<div id="cir"></div>
	<button onclick="colorchange()" type="" >Change Color </button>
	<hr>
Submitted by Shivansh Nautiyal>>>:))))