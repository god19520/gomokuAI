<?php
require_once 'loading.php';
?>
<style>
p{white-space: pre-line;}
</style>
<?php
// 設置一個空陣列來放資料
$datas = array();
// sql語法存在變數中
$sql = "SELECT novelid,chapter,chaptername,content FROM novel";

// 用mysqli_query方法執行(sql語法)將結果存在變數中
$result = mysqli_query($link,$sql);
// 如果有資料
if ($result) {
    // mysqli_num_rows方法可以回傳我們結果總共有幾筆資料
    if (mysqli_num_rows($result)>0) {
        // 取得大於0代表有資料
        // while迴圈會根據資料數量，決定跑的次數
        // mysqli_fetch_assoc方法可取得一筆值
        while ($row = mysqli_fetch_assoc($result)) {
            // 每跑一次迴圈就抓一筆值，最後放進data陣列中
            $datas[] = $row;
        }
    }
    // 釋放資料庫查到的記憶體
    mysqli_free_result($result);
}
else {
    echo "{$sql} 語法執行失敗，錯誤訊息: " . mysqli_error($link);
}
// 處理完後印出資料
?>
<h3>列出小說內容查詢結果</h3>
<div>
<?php if(!empty($datas)): ?>
<ul>
<!-- 資料 as key(下標) => row(資料的row) -->
<?php foreach ($datas as $key => $row) :?>
<li>
第<?php echo $row['novelid']; ?> 本小說，第<?php echo $row['chapter']; ?>章,章節名稱:<?php echo $row['chaptername']; ?>
<br>
內容:
<br>
<p>
<?php echo $row['content']; ?>
</p>
<br>
</li>
<?php endforeach; ?>
</ul>
<?php else:  ?>
查無資料
<?php endif; ?>
</div>
<!-- 代表結束連線 -->
<?php mysqli_close($link); ?>
