#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char cur[512];
	char file[512];
	char exe[512];
	int i = 5;
	if (strcmp(__FILE__, "Sully.c") != 0)
		i--;
	if (i < 0) return (0);
	sprintf(cur, "Sully_%d.c", i);
	FILE *fd = fopen(cur,"w+");
	char* s = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$cint main(){%1$c%2$cchar cur[512];%1$c%2$cchar file[512];%1$c%2$cchar exe[512];%1$c%2$cint i = %6$d;%1$c%2$cif (strcmp(__FILE__, %3$cSully.c%3$c) != 0)%1$c%2$c%2$ci--;%1$c%2$cif (i < 0) return (0);%1$c%2$csprintf(cur, %3$cSully_%5$s.c%3$c, i);%1$c%2$cFILE *fd = fopen(cur,%3$cw+%3$c);%1$c%2$cchar* s = %3$c%4$s%3$c;%1$c%2$cfprintf(fd,s,10,9,34,s,%3$c%5$s%3$c,i,%3$c%7$s%3$c);%1$c%2$cfclose(fd);%1$c%2$csprintf(file, %3$cclang -Wall -Werror -Wextra -o %7$s%5$s %7$s%3$c, %3$cSully_%3$c, i, cur);%1$c%2$csystem(file);%1$c%2$cif (i == 0) return (0);%1$c%2$csprintf(exe, %3$c./%7$s%5$s%3$c, %3$cSully_%3$c, i);%1$c%2$csystem(exe);%1$c}%1$c";
	fprintf(fd,s,10,9,34,s,"%d",i,"%s");
	fclose(fd);
	sprintf(file, "clang -Wall -Werror -Wextra -o %s%d %s", "Sully_", i, cur);
	system(file);
	if (i == 0) return (0);
	sprintf(exe, "./%s%d", "Sully_", i);
	system(exe);
}
