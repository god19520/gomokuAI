<html>
<title>資料查詢</title>
<style>
p{white-space: pre-line;}
</style>
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
  require_once 'select/selectusers.php';
  break;  
case 2:
  require_once 'select/selectbook.php';
  break;
case 3:
  require_once 'select/selectbook2.php';
  break;  
case 4:
  require_once 'select/selectlabel.php';
  break;
case 5:
  require_once 'select/selectpersonal.php';
  break;  
case 6:
  require_once 'select/selectnovel.php';
  break;  
}
?>
<form action="select.php" method="POST">
<label for="table">請選擇您想查詢的表單：</label>
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
