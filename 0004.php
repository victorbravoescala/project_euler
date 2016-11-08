<?php

	$n = 99;
	$m = 10;
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
		
	}
?>