#include <stdio.h> 
int main(void) 
{ 
	char c; 
	int a=10;
	FILE *fp = fopen(__FILE__, "r");
	do
	{ 
        c = fgetc(fp);   
		putchar(c);
	} 
	while (c != EOF); 
	fclose(fp); 
    return 0; 
} 
