<?php
//
//	Comment
//
define("STR", $str = "<?php%c//%c//%cComment%c//%cdefine(%cSTR%c, %cstr = %c%s%c);%cdefine(%cOPEN%c, %cfd = fopen(%cGrace_kid.php%c, %cw+%c));%cdefine(%cSTART%c, fprintf(OPEN, STR, 10,10,9,10,10,34,34,36,34,%cstr,34,10,34,34,36,34,34,34,34,10,34,34,36,10,10,10));%cSTART;%c?>%c");
define("OPEN", $fd = fopen("Grace_kid.php", "w+"));
define("START", fprintf(OPEN, STR, 10,10,9,10,10,34,34,36,34,$str,34,10,34,34,36,34,34,34,34,10,34,34,36,10,10,10));
START;
?>
