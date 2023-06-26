#include <stdio.h>
void main() {
	int i,j;
	int arr[] = {3,2,5,4,1};
	for(j=0;j<4;j++) {
	for(i=0;i<4-j;i++) {
		int temp;
		if(arr[i]>arr[i+1]){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	
	}
	for(i=0;i<5;i++) {
	printf("%d ",arr[i]);
	}
	
} 
