<?php
require_once 'loading.php';
?>
<?php
$datas = array();
$sql = "SELECT ID,title,author,ISBN FROM book";

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
<h3>列出書籍查詢結果</h3>
<div>
<?php if(!empty($datas)): ?>
<ul>
<?php foreach ($datas as $key => $row) :?>
<li>
第<?php echo $row['ID']; ?> 筆資料，書名:<?php echo $row['title']; ?>，作者:<?php echo $row['author']; ?>，ISBN:<?php echo $row['ISBN']; ?>
</li>
<?php endforeach; ?>
</ul>
<?php else:  ?>
查無資料
<?php endif; ?>
</div>
<?php mysqli_close($link); ?>
