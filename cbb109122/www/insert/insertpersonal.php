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
	require_once '../select/selectpersonal.php';
$telephone = "";  $email = ""; $gender = "";
if ( isset($_POST["telephone"]) )
   $telephone = $_POST["telephone"];
if ( isset($_POST["email"]) )
   $email = $_POST["email"];
if ( isset($_POST["gender"]) )
   $gender = $_POST["gender"];
if ($telephone != "" && $email != "" && $gender != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
   if($gender ==1 || $gender ==2 )
   {
    $sql = "INSERT INTO  personal (telephone,email,gender) VALUE ('$telephone','$email','$gender') ";
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
      echo "性別輸入格式錯誤!<br/>";
      echo "</font>";
   }

}
?>
<form action="insertpersonal.php" method="post" >
    <br>
    <label for="telephone">電話:</label>
    <input type="tel" name="telephone" id="telephone" required autofocus/>
    <label for="email">信箱:</label>
    <input type="email" name="email" id="email" required/>
    <label for="gender">性別:</label>
    <input type="users" name="gender" id="gender" required/>
    <input type="submit" value="新增資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
<h4>性別輸入1為男，2為女。</h4>
    <a href="../insert.php">返回</a>
</body>
</html>
