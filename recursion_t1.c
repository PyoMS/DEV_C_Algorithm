#include<stdio.h>

int main(void){
	recursion(4);
}
void recursion(int a){
	if(a<=0) return;	//Base case
	else{				
		printf("HI~\n");
		recursion(a-1);	//Recursive case : Recursion�� �ϴٺ��� �ݵ��  Base case�� �����ؾ��Ѵ�. 
	}
}
