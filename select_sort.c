#include <stdio.h>

int main(void){
	
	int min,i,j,index,temp;
	int arr[10] = {10,7,2,4,8,6,3,5,9,1};
	for(i=0;i<10;i++){
		min = 9999;
		for(j=i;j<10;j++){
			if(min>arr[j]){
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
