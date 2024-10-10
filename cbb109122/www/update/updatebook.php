<html>
<title>書籍資料更改</title>
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
	require_once '../select/selectbook.php';
$ID = "";  $title = "";  $author = ""; $ISBN = "";
if ( isset($_POST["ID"]) )
   $ID = $_POST["ID"];
if ( isset($_POST["title"]) )
   $title = $_POST["title"];
if ( isset($_POST["author"]) )
   $author = $_POST["author"];
if ( isset($_POST["ISBN"]) )
   $ISBN = $_POST["ISBN"];
if ($ID != "" && $title != "" && $author != "" && $ISBN != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
    $sql = "UPDATE book SET title='$title',author='$author',ISBN='$ISBN' WHERE ID='$ID'";
    $result = mysqli_query($link,$sql);

    if (mysqli_affected_rows($link)>0) {		
      echo "<font color='bule'>";
      echo "資料更改成功!<br/>";
      echo "</font>";
    }
    else if(mysqli_affected_rows($link)==0) {
    echo "無資料更改";
    }
    else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
    }

}
?>
<form action="updatebook.php" method="post" >
    <br>
	<label for="ID">更改第O筆資料:</label>
    <input type="number" min="0" name="ID" id="ID" required autofocus/>
    <label for="title">書名:</label>
    <input type="users" name="title" id="title" required autofocus/>
    <label for="author">作者:</label>
    <input type="users" name="author" id="author" required/>
    <label for="ISBN">ISBN:</label>
    <input type="users" name="ISBN" id="ISBN" required/>
    <input type="submit" value="更改資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="../update.php">返回</a>
</body>
</html>