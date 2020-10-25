<?php
session_start();

    define("DB_HOST", "localhost");
    define("DB_USER", "root");
    define("DB_PASSWORD", "");
    define("DB_DATABASE", "try");

 $db = mysqli_connect(DB_HOST, DB_USER, DB_PASSWORD, DB_DATABASE);
 $sql="select * from data";
 $sql1=mysqli_query($db,$sql);
 ?>
 
<center><h1 style="color:red ;align:center;">READING DATA FROM DATABASE USING PHP</h1></center>
<table width="100%" border="0.25" cellspacing="0.2" cellpadding="5">
<tr>
<th>Nmae</th>
<th>Age</th>
<th>Phone No.</th></tr>
<?php
if(!mysqli_num_rows($sql1)){
	?><td></td><td align="center">NO Data Found</td><td></td><?php
}
else
{
while($data=mysqli_fetch_array($sql1)){?>
<tr>
<td align="center"><?php echo $data['name'];?></td>
<td align="center"><?php echo $data['age'];?></td>
<td align="center"><?php echo $data['phoneNo'];?></td><tr>
<?php }
}?>
</table>
<hr>
Submitted by Shivansh Nautiyal>>>:))))