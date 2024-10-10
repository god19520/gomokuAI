<html lang="zh-Hant-TW">
<head>
<title>輕小說文創園區</title>
<link rel="shortcut icon" href="favicon.ico"  type="image/x-icon"/>
<style>
header{dispaly:block; width:100%; background:cyan; }
a{text-decoration:none}
body {background:#eeffff}
</style>
</head>
<body >
<header>
<a href="index.php"><img src="book.png" width="200" border="0"></a>
<div style="cursor pointer ;text-align: right" class="buttom">
<?php

session_start(); 
$ID =$_GET["ID"];
if ( $_SESSION["login_session"] == true )
 {  echo "<a href='users.php'>$username</a>";}
 echo '<a href="account.php">建立帳號</a>';
 if ( $_SESSION["login_session"] == false )
 {  
  echo '<a href="login.php">登入</a>';
 }
 else if( $_SESSION["login_session"] == true && $_SESSION["permission"] == true)
 { 
   //echo '<a href="text.php">測試</a>';
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
$datas = array();
$sql = "SELECT * FROM (book INNER JOIN label ON book.ID = label.ID) INNER JOIN book2 ON book.ID = book2.ID WHERE book.ID = '$ID'";
$result = mysqli_query($link,$sql);	
$row=mysqli_fetch_assoc($result);
?>
<br>
<table  border="1" align="center" style="text-align:center;">
    <tr>
        <td colspan="2" rowspan="4"><?php echo "<img src=\"book/".$row['ID'].".jpg\">";?></td>
        <td colspan="5"><font size="5" face="DFKai-sb"><?php echo $row['title']; ?></font></td>
    </tr>
    <tr>
        <td>作者:<?php echo $row['author']; ?></td>
        <td>點擊數:<?php echo $row['clicks']; ?></td>
        <td>推薦數:<?php echo $row['recommend']; ?></td>
        <td colspan="2">ISBN:<?php echo $row['ISBN']; ?></td>
    </tr>
    <tr>
        <td colspan="5" width="900px" height="150px" align='left'><?php echo $row['introduce']; ?></td>
    </tr>
    <tr>
        <td><?php echo $row['type1']; ?></td>
        <td><?php echo $row['type2']; ?></td>
        <td><?php echo $row['type3']; ?></td>
        <td><?php echo $row['type4']; ?></td>
        <td><?php echo $row['type5']; ?></td>
    </tr>
</table>
<div align="center">
<?php  echo "<a href='read.php'>開始閱讀</a>"; $_SESSION["novelid"]=$ID;?>
</div>
<?php mysqli_close($link); ?>
</body>
</html>