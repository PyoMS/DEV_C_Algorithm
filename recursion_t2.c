#include<stdio.h>

int main(void){
	int res =  recursion(4);
	printf("%d" , res);
}
int recursion(int a){
	if(a==0) return 0;	//Base cases
	else{				
		return a+recursion(a-1);	//Recursive case : Recursion�� �ϴٺ��� �ݵ��  Base case�� �����ؾ��Ѵ�. 
	}
}
