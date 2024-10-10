<html lang="zh-Hant-TW">
<head>
<title>登入</title>
<link rel="shortcut icon" href="favicon.ico"  type="image/x-icon"/>
<style>
header{dispaly:block; clear:both; background:cyan; padding:5x; }
a{text-decoration:none}
body {background:#eeffff}
</style>
</head>
<body>
<?php
session_start();  // 啟用交談期
$username = "";  $password = "";
// 取得表單欄位值
if ( isset($_POST["username"]) )
   $username = $_POST["username"];
if ( isset($_POST["password"]) )
   $password = $_POST["password"];
// 檢查是否輸入使用者名稱和密碼
if ($username != "" && $password != "") {
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8'); 
   // 建立SQL指令字串
   $sql = "SELECT ID FROM users WHERE password='$password' AND username= '$username'";
   echo $username;
   echo $password;
   // 執行SQL查詢i
   $result = mysqli_query($link, $sql);
   $row=mysqli_fetch_assoc($result);
   $_SESSION["userID"]=$row['ID'];
   $total_records = mysqli_num_rows($result);
   $records = "SELECT * FROM users WHERE password='$password' AND username= '$username' AND permission = 1";
   $result = mysqli_query($link, $records);
   $records = mysqli_num_rows($result);
   // 是否有查詢到使用者記錄
   if ( $total_records > 0 ) 
   {
      // 成功登入, 指定Session變數
      if(   $records == 0)
      {
      $_SESSION["login_session"] = true;
      $_SESSION["permission"] = false;
	  $_SESSION["username"] = $username;
      header("Location: index.php");
      }
      else
      {
      $_SESSION["login_session"] = true;
      $_SESSION["permission"] = true;
	  $_SESSION["username"] = $username;
      header("Location: index.php");
      }
   } 
   else 
   {  // 登入失敗
      echo "<center><font color='red'>";
      echo "帳號或密碼錯誤!<br/>";
      echo "</font>";
      $_SESSION["login_session"] = false;
      $_SESSION["permission"] = 0;
   }
   mysqli_close($link);  // 關閉資料庫連接  
}
?>
<form action="login.php" method="post" >
  <div align="center" valign="center">
    <br>
    <label for="username">帳號:</label>
    <input type="users" name="username" id="username" required autofocus/>
    <br>  
    <br> 
    <label for="password">密碼:</label>
    <input type="password" name="password" id="password" required/>
    <br>
    <br>
    <input type="submit" value="登入"/>
    &nbsp;  
    <input type="reset" value="重新輸入">
    <br>
    <a href="index.php">返回</a>
    &nbsp;
    <a href="account.php">建立帳號</a>
  </div>
</form>
</body>
</html>
