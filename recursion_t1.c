#include<stdio.h>

int main(void){
	recursion(4);
}
void recursion(int a){
	if(a<=0) return;	//Base case
	else{				
		printf("HI~\n");
		recursion(a-1);	//Recursive case : Recursion을 하다보면 반드시  Base case로 수렴해야한다. 
	}
}
