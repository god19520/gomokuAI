<html>
<title>書籍標籤資料更改</title>
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
	require_once '../select/selectlabel.php';
$ID = ""; $type1 = "";  $type2 = ""; $type3 = ""; $type4 = ""; $type5 = "";
if ( isset($_POST["ID"]) )
   $ID = $_POST["ID"];
if ( isset($_POST["type1"]) )
   $type1 = $_POST["type1"];
if ( isset($_POST["type2"]) )
   $type2 = $_POST["type2"];
if ( isset($_POST["type3"]) )
   $type3 = $_POST["type3"];
if ( isset($_POST["type4"]) )
   $type4 = $_POST["type4"];
if ( isset($_POST["type5"]) )
   $type5 = $_POST["type5"];
if ($ID != "" && $type1 != "" && $type2 != "" && $type3 != "" && $type4 != "" && $type5 != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
    $sql = "UPDATE label SET type1='$type1',type2='$type2',type3='$type3',type4='$type4',type5='$type5' WHERE ID='$ID'";
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
<form action="updatelabel.php" method="post" >
    <br>
	<label for="ID">更改第O筆資料:</label>
    <input type="number" min="0" name="ID" id="ID" required autofocus/>
    <label for="type1">標籤1:</label>
    <input type="users" name="type1" id="type1" required autofocus/>
    <label for="type2">標籤2</label>
    <input type="users" name="type2" id="type2" required/>
    <label for="type3">標籤3</label>
    <input type="users" name="type3" id="type3" required/>
    <label for="type2">標籤4</label>
    <input type="users" name="type4" id="type4" required/>
    <label for="type2">標籤5</label>
    <input type="users" name="type5" id="type5" required/>	
    <input type="submit" value="更改資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="../update.php">返回</a>
</body>
</html>