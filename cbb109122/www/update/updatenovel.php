<html>
<title>小說章節更改</title>
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
	require_once '../select/selectnovel.php';
$novelid = ""; $chapter = "";  $chaptername = ""; $content = "";
if ( isset($_POST["novelid"]) )
   $novelid = $_POST["novelid"];
if ( isset($_POST["chapter"]) )
   $chapter = $_POST["chapter"];
if ( isset($_POST["chaptername"]) )
   $chaptername = $_POST["chaptername"];
if ( isset($_POST["content"]) )
   $content = $_POST["content"];
if ($novelid != "" && $chapter != "" && $chaptername != "" && $content != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
    $sql = "UPDATE novel SET chaptername='$chaptername',content='$content' WHERE novelid='$novelid' AND chapter='$chapter'";
    $result = mysqli_query($link,$sql);

    if (mysqli_affected_rows($link)>0) {
      echo "<font color='bule'>";
      echo "章節更改成功!<br/>";
      echo "</font>";
    }
    else if(mysqli_affected_rows($link)==0) {
    echo "無章節更改";
    }
    else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
    }
}
?>
<form action="updatenovel.php" method="post" >
    <br>
	<label for="novelid">更改第O本小說:</label>
    <input type="number" min="0" name="novelid" id="novelid" required autofocus/>
    <label for="chapter">更改地O章節:</label>
    <input type="users" name="chapter" id="chapter" required autofocus/>
    <label for="chaptername">章節名:</label>
    <input type="users" name="chaptername" id="chaptername" required/>
    <label for="content">內容:</label>
	<br>
	<textarea name="content" cols="45" rows="4"></textarea>
    <br>
    <input type="submit" value="更改資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="../update.php">返回</a>
</body>
</html>