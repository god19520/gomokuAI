<?php
session_start();
session_destroy();
$_SESSION["login_session"] == false;
$_SESSION["permission_session"] == false;   
header("Location:index.php");
?>
