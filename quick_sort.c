#include<stdio.h>
//quick_sort - 대표적인 분할 정복 알고리즘 

void quick(int *data, int pre, int tail){
	if(pre>=tail)return;
	
	int pivot = pre;
	int i= pre+1;
	int j= tail;
	int temp;
	//i					j
	//0 1 2 3 4 5 6 7 8 9 - index	
	while(i<=j){  
		while(data[pivot]>data[i]){
			i++;
			
		}
		while(data[pivot]<data[j] && j>pre){
			j--;
		}
		if(j<i){
			temp = data[pivot];
			data[pivot] = data[j];
			data[j] = temp;
		}
		else{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quick(data, pre, j-1);
	quick(data, j+1, tail);
}

int main(void){
	int arr[10] = {1,10,5,8,7,6,4,3,2,9};
	int i;
	quick(arr,0,9);
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}

