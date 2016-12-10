<?php

	$n = 999;
	$m = 100;
	$number = 0;

	for ($i = $n; $i >= $m; $i--) {
		for ($j = $n; $j >= $m; $j--) {
			$x = $i * $j;
			$result = isPalindrome($x);
			if ($result == 1) {
				if ($x > $number) {
					$number = $x;
				}
			}
		}
	}
	echo $number . "\n";


	function isPalindrome($x)
	{
		$result = 1;
		$str = (string)$x;
		$arr = str_split($str, 1);
		$l = count($arr);
		if ($l % 2 == 0) {
			for ($i = 0; $i < $l/2; $i++) {
				if ($arr[$i] != $arr[$l - 1 - $i]) {
					$result = 0;
				}
			}
		} else {
			for ($i = 0; $i < ($l - 1)/2; $i++) {
				if ($arr[$i] != $arr[$l - 1 - $i]) {
					$result = 0;
				}
			}
		}

		return $result;
	}
?>
