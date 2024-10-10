<html lang="zh-Hant-TW">
<head>
<title>輕小說文創園區</title>
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
$username = "";  $password = ""; $password2 = "";
// 取得表單欄位值
if ( isset($_POST["username"]) )
   $username = $_POST["username"];
if ( isset($_POST["password"]) )
   $password = $_POST["password"];
if ( isset($_POST["password2"]) )
   $password2 = $_POST["password2"];
// 檢查是否輸入使用者名稱和密碼
if ($username != "" && $password != "" && $password2 != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
   $sql = "SELECT * FROM users WHERE username= '$username'";
   $result = mysqli_query($link, $sql);
   $username_records = mysqli_num_rows($result);
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
    // sql語法存在變數中
    $sql = "INSERT INTO  users (username,password,permission) VALUE ('$username','$password',0) ";

    // 用mysqli_query方法執行(sql語法)將結果存在變數中
    $result = mysqli_query($link,$sql);
    $sql = "INSERT INTO  personal (gender,email,telephone) VALUE (0,0,0) ";
	$result2 = mysqli_query($link,$sql);
    // 如果有異動到資料庫數量(更新資料庫)
    if (mysqli_affected_rows($link)>0) {
    // 如果有一筆以上代表有更新
      echo "<center><font color='bule'>";
      echo "帳號辦理成功!<br/>";
      echo "</font>";
    }
    elseif(mysqli_affected_rows($link)==0) {
    echo "無資料新增";
    }
    else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
    }
   }
}
?>
<form action="account.php" method="post" >
   <div  align="center" >
    <br>
    <label for="username">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;帳號:</label>
    <input type="users" name="username" id="username" required autofocus/>
    <br>
    <br>
    <label for="password">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;密碼:</label>
    <input type="password" name="password" id="password" required/>
    <br>
    <br>
    <label for="password2">再次輸入密碼:</label>
    <input type="password" name="password2" id="password2" required/>
    <br>
    <br>
    <input type="submit" value="建立帳號"/>
    &nbsp;
    <input type="reset" value="重新輸入">
    <br>
    <a href="index.php">返回</a>
  </div>
</form>
</body>
</html>
