<html>
<title>書籍資料增加</title>
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
$title = "";  $author = ""; $ISBN = "";
if ( isset($_POST["title"]) )
   $title = $_POST["title"];
if ( isset($_POST["author"]) )
   $author = $_POST["author"];
if ( isset($_POST["ISBN"]) )
   $ISBN = $_POST["ISBN"];
if ($title != "" && $author != "" && $ISBN != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
    $sql = "INSERT INTO  book (title,author,ISBN) VALUE ('$title','$author','$ISBN') ";
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
?>
<form action="insertbook.php" method="post" >
    <br>
    <label for="title">書名:</label>
    <input type="users" name="title" id="title" required autofocus/>
    <label for="author">作者:</label>
    <input type="users" name="author" id="author" required/>
    <label for="ISBN">ISBN:</label>
    <input type="users" name="ISBN" id="ISBN" required/>
    <input type="submit" value="新增資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="../insert.php">返回</a>
</body>
</html>
