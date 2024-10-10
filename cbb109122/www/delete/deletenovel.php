<html>
<title>小說章節刪除</title>
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
	$novelid = ""; $chapter = "";
if ( isset($_POST["novelid"]) )
   $novelid = $_POST["novelid"];
if ( isset($_POST["chapter"]) )
   $chapter = $_POST["chapter"];
if ($novelid != "" && $chapter != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
    $sql = "DELETE FROM novel WHERE novelid = '$novelid' AND chapter = '$chapter'";
    $result = mysqli_query($link,$sql);

    if (mysqli_affected_rows($link)>0) {
      echo "<font color='bule'>";
      echo "資料刪除成功!<br/>";
      echo "</font>";
    }
    else if(mysqli_affected_rows($link)==0) {
    echo "無資料刪除";
    }
    else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
    }
   $sql = "ALTER TABLE personal AUTO_INCREMENT = 1";
   $result2 = mysqli_query($link,$sql);
}
?>

<form action="deletenovel.php" method="post" >
    <br>
    <label for="novelid">刪除第</label>
    <input type="number" min="0" name="novelid" id="novelid" required autofocus/>
	本小說，的第O<label for="chapter">章節:</label>
    <input type="users" name="chapter" id="chapter" required/>
	<br>
    <input type="submit" value="刪除資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="../delete.php">返回</a>
</body>
</html>