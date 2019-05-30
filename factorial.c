#include<stdio.h>

int main(void){
	int res =  factorial(4);
	printf("%d" , res);
}
int factorial(int n){
	if(n==0) return 1;	//Base cases
	else				
		return n * factorial(n-1);	//Recursive case
}
