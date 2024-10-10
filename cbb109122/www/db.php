<?php
// 載入db.php來連結資料庫
require_once 'loading.php';
?>
<!doctype html>
<html lang="zh-Hant-TW">
<title>管理者頁面</title>
<style>
a{text-decoration:none}
</style>
<body>
<?php
session_start(); 
if($_SESSION["permission"] == false)
{
	 header ("Location: error.php");
}
?>
<ul>
 <li><a href="select.php">SELECT，查詢列出資料庫的資料</a></li>
 <li><a href="insert.php">INSERT，新增資料到資料表</a></li>
 <li><a href="update.php">UPDATE，更新資料表中的資料</a></li>
 <li><a href="delete.php">DELETE，刪除資料表中的資料</a></li>
 </ul>
    <a href="index.php">返回首頁</a>
</body>
</html>
