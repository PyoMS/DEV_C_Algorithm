#include<stdio.h>

int main(void){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	quick(arr,0,n-1);
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}

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
