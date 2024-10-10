<?php
require_once 'loading.php';
?>
<?php
$datas = array();
$sql = "SELECT ID,gender,email,telephone FROM personal";

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
<h3>列出使用者資料查詢結果</h3>
<div>
<?php if(!empty($datas)): ?>

<ul>
<?php foreach ($datas as $key => $row) :?>
<?php
if($row['gender']==1)
{	$gender=男;}
else if($row['gender']==2) 
{  $gender=女;}
else
{$gender=未填寫;}

if(empty($row['email']))
{	$email=未填寫;}
else
{$email=$row['email'];}


if($row['telephone']==0)
{	$telephone=未填寫;}
else
{$telephone=$row['telephone'];}
?>
<li>
第<?php echo $row['ID']; ?> 筆資料，性別<?php echo $gender; ?>，聯絡信箱:<?php echo $email; ?>,電話號碼:<?php echo $telephone; ?>
</li>
<?php endforeach; ?>
</ul>
<?php else:  ?>
查無資料
<?php endif; ?>
</div>
<?php mysqli_close($link); ?>
