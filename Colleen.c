#include<stdio.h>
/*
	Comment outside the func.
*/
void foo(){}
int main(){
/*
	Comment inside the func.
*/
foo();
char*s="#include<stdio.h>%1$c/*%1$c%2$cComment outside the func.%1$c*/%1$cvoid foo(){}%1$cint main(){%1$c/*%1$c%2$cComment inside the func.%1$c*/%1$cfoo();%1$cchar*s=%3$c%s%3$c;printf(s,10,9,34,s);}%1$c";printf(s,10,9,34,s);}
