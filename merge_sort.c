#include<stdio.h>
int number =8;

int sorted[8];


void merge(int a[], int m, int middle, int n){
	int i=m;
	int j=middle +1;
	int k=m;
	
	//작은 순서대로 배열에 삽입 
	while(i<=middle && j<= n){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		}else{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	
	int t;
	if(i>middle){
		for(t=j;t<=n;t++){
			sorted[k] = a[t];
			k++;
		}
	} 
	
	else{
		for(t=i;t<=middle;t++){
			sorted[k] = a[t];
			k++;
		}
	}
	
	for(t=m;t<=n;t++){
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n){
	if(m < n){
		int mid = (m+n) / 2;
		mergeSort(a, m, mid);
		mergeSort(a, mid+1, n);
		merge(a,m,mid,n);
	}
}

int main(void){
	int arr[8] = {7,6,5,8,3,5,9,1};
	
	mergeSort(arr, 0 , number - 1);
	int i;
	for(i=0;i<number;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
