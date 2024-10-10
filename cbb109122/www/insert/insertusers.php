<html>
<title>使用者資料增加</title>
<body>
<?php
session_start(); 
if($_SESSION["permission"] == false)
{
	 header ("Location: ../error.php");
}
?>
<?php
session_start(); 
	require_once '../select/selectusers.php';
$username = "";  $password = ""; $permission = "";
if ( isset($_POST["username"]) )
   $username = $_POST["username"];
if ( isset($_POST["password"]) )
   $password = $_POST["password"];
if ( isset($_POST["permission"]) )
   $permission = $_POST["permission"];
if ($username != "" && $password != "" && $permission != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
   if($permission ==1 || $permission ==0 )
   {
    $sql = "INSERT INTO  users (username,password,permission) VALUE ('$username','$password','$permission') ";
    $result = mysqli_query($link,$sql);

    if (mysqli_affected_rows($link)>0) {
      echo "<font color='bule'>";
      echo "資料新增成功!<br/>";
      echo "</font>";
    }
    else if(mysqli_affected_rows($link)==0) {
    echo "無資料新增";
    }
    else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
    }
   }
   else
   {
      echo "<font color='red'>";
      echo "權限輸入格式錯誤!<br/>";
      echo "</font>";
   }

}
?>
<form action="insertusers.php" method="post" >
    <br>
    <label for="username">帳號:</label>
    <input type="users" name="username" id="username" required autofocus/>
    <label for="password">密碼:</label>
    <input type="users" name="password" id="password" required/>
    <label for="permission">權限:</label>
    <input type="users" name="permission" id="permission" required/>
    <input type="submit" value="新增資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
<h4>權限輸入1為管理員，0為一般使用者。</h4>
    <a href="../insert.php">返回</a>
</body>
</html>
