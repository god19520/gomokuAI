<html lang="zh-Hant-TW">
<head>
<title>輕小說文創園區</title>
<link rel="shortcut icon" href="favicon.ico"  type="image/x-icon"/>
<style>
header{dispaly:block; width:100%; background:cyan; }
a{text-decoration:none}
body {background:#eeffff}
p{white-space: pre-line;}
</style>
</head>
<body >
<header>
<a href="index.php"><img src="book.png" width="200" border="0"></a>
<div style="cursor pointer ;text-align: right" class="buttom">
<?php

session_start(); 
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
</header>
<?php
require_once 'loading.php';
?>
<?php

$novelid = $_SESSION["novelid"];
    $sql = "SELECT * FROM novel WHERE novelid = '$novelid'";
	$result1 = mysqli_query($link, $sql);
    $data_nums = mysqli_num_rows($result1); //統計總比數
    $per = 1; //每頁顯示項目數量
    $pages = ceil($data_nums/$per); //取得不小於值的下一個整數
    if (!isset($_GET["page"])){ //假如$_GET["page"]未設置
        $page=1; //則在此設定起始頁數
    } else {
        $page = intval($_GET["page"]); //確認頁數只能夠是數值資料
    }
    $start = ($page-1)*$per; //每一頁開始的資料序號

$datas = array();
$sql = "SELECT * FROM novel WHERE novelid = '$novelid'  limit $start,$per";
$result = mysqli_query($link,$sql);
if ($result) {
    if (mysqli_num_rows($result)>0) {
        while ($row = mysqli_fetch_assoc($result)) {
            $datas[] = $row;
        }
    }
    mysqli_free_result($result);
}
else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
}
?>
<br>
<br>
<div>
<table align="center">
<?php if(!empty($datas)): ?>
<tr>
<td width="900px">
<?php foreach ($datas as $key => $row) :?>

第<?php echo $row['chapter']; ?>章&nbsp;&nbsp;&nbsp;&nbsp;<?php echo $row['chaptername']; ?>
<br>
<p>
<?php echo $row['content']; ?>
</p>
<br>

<?php endforeach; ?>
</td>
</tr>
<?php else:  ?>
由於版權問題，該作品可能已遭下架。
<br>
另，轉生魔女的異世界生存守則，是網站作者本人自己的作品，沒有版權問題，可以正常閱讀。
<?php endif; ?>
</div>
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
