<html lang="zh-Hant-TW">
<head>
<title>輕小說文創園區</title>
<link rel="shortcut icon" href="favicon.ico"  type="image/x-icon"/>
<style>
header{dispaly:block; width:100%; background:cyan; }
a{margin:3; text-decoration:none}
body {background:#eeffff}
</style>
</head>
<body >
<header>
<a href="index.php"><img src="book.png" width="200" border="0"></a>
<div style="cursor pointer ;text-align: right" class="buttom">
<?php

session_start(); 
$research = "";
if(isset($_POST["research"]))
{ $research = $_POST["research"];}
$username =$_SESSION["username"];
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
<div class="research" align="right">
<form action="index.php" method="post" >
<input type="text"  name="research" id="research" placeholder="書名、作者、關鍵字"   required autofocus/>
<input type="submit" value="搜尋"/>
</form>
</div>
</header>
<?php
require_once 'loading.php';
if($research != "")
{
   $_SESSION["research"]=$research;
   header ("Location: research.php");
}
else
{
	
    $sql = "SELECT * FROM book ";
	$result1 = mysqli_query($link, $sql);
    $data_nums = mysqli_num_rows($result1); //統計總比數
    $per = 5; //每頁顯示項目數量
    $pages = ceil($data_nums/$per); //取得不小於值的下一個整數
    if (!isset($_GET["page"])){ //假如$_GET["page"]未設置
        $page=1; //則在此設定起始頁數
    } else {
        $page = intval($_GET["page"]); //確認頁數只能夠是數值資料
    }
    $start = ($page-1)*$per; //每一頁開始的資料序號
$datas = array();
$sql = "SELECT book2.ID,book.title,book.author,book.ISBN,book2.introduce FROM book INNER JOIN book2 ON book.ID = book2.ID limit $start,$per";
$result = mysqli_query($link,$sql);	

if ($result) {
    if (mysqli_num_rows($result)>0) {
		
        while ($row = mysqli_fetch_assoc($result)) {
            $datas[] = $row;
        }
    }
}
else {
    echo "{$sql} 執行失敗，錯誤訊息: " . mysqli_error($link);	
}
}
?>
<br>
<table border="1" align="center">
<tr>
 <th>編號</th>
 <th width="200px">封面</th>	
 <th width="150px">書名</th>
 <th width="50px">作者</th>
 <th width="900px">簡介</th>
</tr> 
<?php if(!empty($datas)): ?>
<tr>
<?php foreach ($datas as $key => $row) :?>
<td><?php echo $row['ID']; ?> </td>
<td width="100"><?php echo "<img src=\"book/".$row['ID'].".jpg\">";?> </td>
<td><?php  $title=$row['title']; $ID=$row['ID'];  echo "<a href='book.php?ID=$ID'>$title</a>"; ?></td>
<td><?php echo $row['author']; ?></td>
<td><?php echo $row['introduce']; ?></td>
</tr>
<?php endforeach; ?>
<?php else:  ?>
無法顯示
<?php endif; ?>
</table>
<?php mysqli_close($link); ?>
<div class="page" align="center">
<?php
    //分頁頁碼
    echo '共 '.$data_nums.' 筆-在 '.$page.' 頁-共 '.$pages.' 頁';
    echo "<br /><a href=?page=1>首頁</a> ";
    echo "第 ";
    for( $i=1 ; $i<=$pages ; $i++ ) {
        if ( $page-3 < $i && $i < $page+3 ) {
            echo "<a href=?page=".$i.">".$i."</a> ";
        }
    } 
    echo " 頁 <a href=?page=".$pages.">末頁</a><br /><br />";
?>
</div>
</body>
</html>
