#include<stdio.h> 
int main() 
{ 
	int n = 20 , m = 13; 
	printf("Mul is %d",multiply(n, m)); 
	return 0; 
} 
int multiply(int n, int m) 
{ 
	int ans = 0, count = 0; 
	while (m) 
	{
		if (m % 2 == 1)			 
			ans += n << count; 
		count++; 
		m /= 2; 
	} 
	return ans; 
} 