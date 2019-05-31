#include <stdio.h>

int main(void){
	int arr[10] = {1,10,5,8,7,6,4,3,2,9};
	int min,i,j,index,temp;
	
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
