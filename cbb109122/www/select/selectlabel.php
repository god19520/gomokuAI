<?php
require_once 'loading.php';
?>
<?php
$datas = array();
$sql = "SELECT ID,type1,type2,type3,type4,type5 FROM label";

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
<h3>列出書籍標籤查詢結果</h3>
<div>
<?php if(!empty($datas)): ?>
<ul>
<?php foreach ($datas as $key => $row) :?>
<li>
第<?php echo $row['ID']; ?> 筆資料，標籤:<?php echo $row['type1'] ?>,<?php echo $row['type2'] ?>,<?php echo$row['type3'] ?>,<?php echo $row['type4'] ?>,<?php echo $row['type5']; ?>
</li>
<?php endforeach; ?>
</ul>
<?php else:  ?>
查無資料
<?php endif; ?>
</div>
<?php mysqli_close($link); ?>
