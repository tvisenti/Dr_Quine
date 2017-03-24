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
char*s="#include<stdio.h>%c/*%c%cComment outside the func.%c*/%cvoid foo(){}%cint main(){%c/*%c%cComment inside the func.%c*/%cfoo();%cchar*s=%c%s%c;printf(s,10,10,9,10,10,10,10,10,9,10,10,10,34,s,34,10);}%c";printf(s,10,10,9,10,10,10,10,10,9,10,10,10,34,s,34,10);}
