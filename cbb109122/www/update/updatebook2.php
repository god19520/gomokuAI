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
	require_once '../select/selectbook2.php';
$ID = "";  $introduce = "";  $clicks = ""; $recommend = "";
if ( isset($_POST["ID"]) )
   $ID = $_POST["ID"];
if ( isset($_POST["introduce"]) )
   $introduce = $_POST["introduce"];
if ( isset($_POST["clicks"]) )
   $clicks = $_POST["clicks"];
if ( isset($_POST["recommend"]) )
   $recommend = $_POST["recommend"];
if ($ID != "" && $introduce != "" && $clicks != "" && $recommend != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
    $sql = "UPDATE book2 SET introduce='$introduce',clicks='$clicks',recommend='$recommend' WHERE ID='$ID'";
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
<form action="updatebook2.php" method="post" >
    <br>
	<label for="ID">更改第O筆資料:</label>
    <input type="number" min="0" name="ID" id="ID" required autofocus/>
    <label for="introduce">介紹:</label>
    <input type="users" name="introduce" id="introduce" required autofocus/>
    <label for="clicks">點擊率:</label>
    <input type="users" name="clicks" id="clicks" required/>
    <label for="recommend">推薦數:</label>
    <input type="users" name="recommend" id="recommend" required/>
    <input type="submit" value="更改資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="../update.php">返回</a>
</body>
</html>