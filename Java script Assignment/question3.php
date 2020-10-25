<title>QUESTION 3 SOLUTION</title>
<script type="text/javascript">
function gcd(){
	 var no1=document.getElementById('FNo').value;
	 var no2=document.getElementById('SNo').value;
	 var i=1;
	 var gcd=1;
	 while(i <= no1 && i <= no2){
		 if(no1%i==0 && no2%i==0)
            gcd = i;
		i=i+1;
	 }
	 document.getElementById('gcd').value=gcd;
}
</script>
<center><h1 style="color:red ;align:center;">FINDING GCD</h1>
</center>
<table width="100%" border="0" cellspacing="0" cellpadding="5">
  <tr>
	  <td width="15%" style="color: #333333"><label for="name"><b>First Number </B></label></td>
	  <td width="70%"><input name="FNo" style=" font-size: 12px;border: 1px solid #333333;height: 22px;" type="number" id="FNo" value="" size="30" /></td>
	 </tr><tr>
			 <td width="15%" style="color: #333333"><b>Second Number</b></td>
			 <td width="70%"><input name="MName" style="font-size: 12px;border: 1px solid #333333;height: 22px;" type="number" id="SNo" value="" size="30" /></td>
	</tr><tr><td align:'center'>
	<button onclick="gcd()" type="" >Find GCD </button></td></tr><tr>
			 <td width="15%" style="color: #333333"><b>GCD</b></td>
			 <td width="70%"><input  type="text" id="gcd" value="" size="30" readonly/></td>
	</tr></table>
	<hr>
Submitted by Shivansh Nautiyal>>>:))))