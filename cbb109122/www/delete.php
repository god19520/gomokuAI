<html>
<title>資料刪除</title>
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
  header ("Location: delete/deleteusers.php");
  break;
case 2:
  header ("Location: delete/deletebook.php");
  break;
case 3:
  header ("Location: delete/deletebook2.php");
  break;
case 4:
  header ("Location: delete/deletelabel.php");
  break;
case 5:
  header ("Location: delete/deletepersonal.php");
  break; 
case 6:
  header ("Location: delete/deletenovel.php");
  break;  
}
?>
<form action="delete.php" method="POST">
<label for="table">請選擇表單：</label>
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
