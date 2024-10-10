<html>
<title>資料新增</title>
<body>
<?php
require_once 'loading.php';
?>
<?php
session_start(); 
if($_SESSION["permission"] == false)
{
	 header ("Location: error.php");
}
?>
<?php
$select_value=$_POST['table'];
$select_value;
switch ($select_value)
{
case 1:  
  header ("Location: insert/insertusers.php");
  break;
case 2:
  header ("Location: insert/insertbook.php");
  break;
case 3:
  header ("Location: insert/insertbook2.php");
  break;
case 4:
  header ("Location: insert/insertlabel.php");
  break;
case 5:
  header ("Location: insert/insertpersonal.php");
  break;
case 6:
  header ("Location: insert/insertnovel.php");
  break;  
}
?>
<form action="insert.php" method="POST">
<label for="table">請選擇您想新增的表單：</label>
<select name="table" >
  <option value="1" selected="selected">users</option>
  <option value="2">book</option>
  <option value="3">book2</option>
  <option value="4">label</option>
  <option value="5">personal</option>
  <option value="6">novel</option>
</select>
<br>
  <input type="submit" value="OK">
</form>
<br>
<a href="db.php">返回頁面管理 </a>
</body>
</html>
