#include<stdio.h>
#define NOT
#define USED
#define FUNCTION(x) int main(){FILE *fd = fopen(x,"w+");char*s="#include<stdio.h>%1$c#define NOT%1$c#define USED%1$c#define FUNCTION(x) int main(){FILE *fd = fopen(x,%2$cw+%2$c);char*s=%2$c%4$s%2$c;fprintf(fd,s,10,34,9,s);fclose(fd);}%1$c/*%1$c%3$cThis is a proper comment.%1$c*/%1$cFUNCTION(%2$cGrace_kid.c%2$c);%1$c";fprintf(fd,s,10,34,9,s);fclose(fd);}
/*
	This is a proper comment.
*/
FUNCTION("Grace_kid.c");
