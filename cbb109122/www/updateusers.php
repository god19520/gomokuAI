<html lang="zh-Hant-TW">
<head>
<title>使用者密碼更改</title>
<link rel="shortcut icon" href="favicon.ico"  type="image/x-icon"/>
<style>
header{dispaly:block; clear:both; background:cyan; padding:5x; }
a{text-decoration:none}
body {background:#eeffff}
</style>
</head>
<body>
<?php
session_start(); 
$username = "";  $password = ""; $password2 = "";
if ( isset($_POST["username"]) )
   $username = $_POST["username"];
if ( isset($_POST["password"]) )
   $password = $_POST["password"];
if ( isset($_POST["password2"]) )
   $password2 = $_POST["password2"];
if ($username != "" && $password != "" && $password2 != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
   $sql = "SELECT * FROM users WHERE password= '$password'";
   $result = mysqli_query($link, $sql);
   $password_records = mysqli_num_rows($result); 
   
    if($password != $password2)
   {
      echo "<center><font color='red'>";
      echo "密碼輸入不一致!<br/>";
      echo "</font>";
   }
   else if($username_records > 0 && $password_records > 0)
   {
      echo "<center><font color='red'>";
      echo "此組帳號密碼已有人使用!<br/>";
      echo "</font>";
   }
   else if($username_records > 0)
   {
      echo "<center><font color='red'>";
      echo "帳號已有人使用!<br/>";
      echo "</font>";
   }
   else if($password_records > 0)
   {
      echo "<center><font color='red'>";
      echo "密碼已有人使用!<br/>";
      echo "</font>";
   }
   else
   {  
   $ID=$_SESSION["userID"];
    $sql = "UPDATE users SET username='$username',password='$password' WHERE ID='$ID'";
    $result = mysqli_query($link,$sql);

    if (mysqli_affected_rows($link)>0) {
      echo "<font color='bule'>";
      echo "密碼更改成功!<br/>";
      echo "</font>";
    }
    else if(mysqli_affected_rows($link)==0) {
    echo "無資料更改";
    }
    else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
   }
   }
}
?>
<div align="center">
<form action="updateusers.php" method="post" >
    <br>
    <label for="username">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;請輸入帳號:</label>
    <input type="users" name="username" id="username" required autofocus/>
	<br>
	<br>
    <label for="password">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;請輸入新密碼:</label>
    <input type="users" name="password" id="password" required/>
	<br>
	<br>
	<label for="password2">請再次輸入新密碼:</label>
    <input type="password" name="password2" id="password2" required/>
	<br>
	<br>
    <input type="submit" value="更改帳號"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="users.php">返回</a>
</div>	
</body>
</html>