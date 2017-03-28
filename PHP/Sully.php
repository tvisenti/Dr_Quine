<?php
function foo()
{
	$cur = "NULL";
	$file = "NULL";
	$i = 5;
	if (strcmp(basename(__FILE__), "Sully.php") != 0)
		$i--;
	if ($i < 0) return (0);
	$cur = sprintf("Sully_%d.php", $i);
	$fd = fopen($cur,"w+");
	$s = "<?php%cfunction foo()%c{%c%c%ccur = %cNULL%c;%c%c%cfile = %cNULL%c;%c%c%ci = %d;%c%cif (strcmp(basename(__FILE__), %cSully.php%c) != 0)%c%c%c%ci--;%c%cif (%ci < 0) return (0);%c%c%ccur = sprintf(%cSully_%s.php%c, %ci);%c%c%cfd = fopen(%ccur,%cw+%c);%c%c%cs = %c%s%c;%c%cfprintf(%cfd,%cs,10,10,10,9,36,34,34,10,9,36,34,34,10,9,36,%ci,10,9,34,34,10,9,9,36,10,9,36,10,9,36,34,%c%cd%c,34,36,10,9,36,36,34,34,10,9,36,34,%cs,34,10,9,36,36,36,34,37,34,36,34,37,34,10,9,36,10,9,36,34,%c%cs%c,34,36,10,9,36,10,10,10,10);%c%cfclose(%cfd);%c%c%cfile = sprintf(%cphp %s%c, %ccur);%c%csystem(%cfile);%c}%cfoo();%c?>%c";
	fprintf($fd,$s,10,10,10,9,36,34,34,10,9,36,34,34,10,9,36,$i,10,9,34,34,10,9,9,36,10,9,36,10,9,36,34,"%d",34,36,10,9,36,36,34,34,10,9,36,34,$s,34,10,9,36,36,36,34,37,34,36,34,37,34,10,9,36,10,9,36,34,"%s",34,36,10,9,36,10,10,10,10);
	fclose($fd);
	$file = sprintf("php %s", $cur);
	system($file);
}
foo();
?>
