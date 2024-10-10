<html>
<title>書籍標籤資料增加</title>
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
$type1 = "";  $type2 = ""; $type3 = ""; $type4 = ""; $type5 = "";
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
if ($type1 != "" && $type2 != "" && $type3 != "" && $type4 != "" && $type5 != "") 
{
$link = mysqli_connect("localhost","cbb109122","God19520","cbb109122_fiction") or die("無法開啟MySQL資料庫連接!<br/>");
   mysqli_query($link, 'SET NAMES utf8');
    $sql = "INSERT INTO  label (type1,type2,type3,type4,type5) VALUE ('$type1','$type2','$type3','$type4','$type5') ";
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
<form action="insertlabel.php" method="post" >
    <br>
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
    <input type="submit" value="新增資料"/>
    &nbsp;
    <input type="reset" value="重新輸入">
</form>
    <a href="../insert.php">返回</a>
</body>
</html>
