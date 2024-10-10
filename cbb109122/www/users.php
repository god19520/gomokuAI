<html lang="zh-Hant-TW">
<head>
<title>使用者個人資訊</title>
<link rel="shortcut icon" href="favicon.ico"  type="image/x-icon"/>
<style>
header{dispaly:block; clear:both; background:cyan; padding:5x; }
a{text-decoration:none}
body {background:#eeffff}
</style>
</head>
<body >
<header> 
<a href="index.php"><img src="book.png" width="200" border="0"></a>
<div style="cursor pointer ;text-align: right" class="buttom">
<a href="account.php">建立帳號</a>
<?php
session_start(); 
 if ( $_SESSION["login_session"] == false )
 {  
  echo '<a href="login.php">登入</a>';
 }
 else if( $_SESSION["login_session"] == true && $_SESSION["permission"] == true)
 {
   echo '<a href="db.php">頁面管理 </a>';
   echo '<a href="logout.php">登出</a>';
 }
 else
 { 
   echo '<a href="logout.php">登出</a>';
 }
?>
</div>
</header>
<?php
require_once 'loading.php';
$ID=$_SESSION["userID"];
$sql = "SELECT users.username,users.password,users.permission,personal.gender,personal.email,personal.telephone FROM users INNER JOIN personal ON users.ID = personal.ID WHERE users.ID='$ID'";
$result = mysqli_query($link,$sql);
$row=mysqli_fetch_assoc($result);
if($row['permission']==1)
{	$permission=管理員;}
else{$permission=普通用戶;}

if($row['gender']==1)
{	$gender=男;}
else if($row['gender']==2) 
{  $gender=女;}
else
{$gender=未填寫;}

if(empty($row['email']))
{	$email=未填寫;}
else
{$email=$row['email'];}

if($row['telephone']==0)
{	$telephone=未填寫;}
else
{$telephone=$row['telephone'];}
?>
<br>
<br>
<table border="1" align="center">
<thead>
  <tr>
    <th colspan="2"  width="300px">使用者資料</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>使用者編號:<?php echo $ID; ?></td>
    <td>權限:<?php echo $permission; ?></td>
  </tr>
  <tr>
    <td>帳號:<?php echo $row['username']; ?></td>
    <td>密碼:<?php echo $row['password']; ?></td>
  </tr>
  <tr><td colspan="2"><a href="updateusers.php">我要變更密碼</a></td></tr>
</tbody>	
<thead>
  <tr>
    <th colspan="2"  width="300px">聯絡信箱:<?php echo $email; ?></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>性別:<?php echo $gender; ?></td>
    <td>電話號碼:<?php echo $telephone; ?></td>
  </tr>
</tbody>
<tfoot>
	<td colspan="2"><a href="updatepersonal.php">我要變更個人資料</a></td>
</tfoot>
</table>

<?php echo $row['gender']; mysqli_close($link); ?>

</body>
</html>