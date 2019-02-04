#include <stdio.h>
int main()
{
    int n;
    printf("Please input an integer number: ");
    scanf("%d",&n);
    (n & 0x01) ? printf("%d is an ODD Number.", n) :  printf("%d is an EVEN Number.",n);
    printf("\n");
    return 0;   
}