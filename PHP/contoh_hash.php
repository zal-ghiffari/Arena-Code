<?php

$str = 'IniPassw0rd';
$salt = 'peng4c4kNya';
echo sprintf("MD5 dari %s adalah: %s\n", $str, md5($str.$salt));
echo sprintf("SHA1 dari %s adalah: %s\n", $str, sha1($str.$salt));
						
?>