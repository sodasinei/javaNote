#include <stdio.h>
f1(int num){
	int i = 2;
	int n = -1;
	for(;i < num;i++){
		if(num % i == 0){
			printf("%d��������",num);
			n++;
			break;
		}
	}
		if(n==-1){
			printf("%d������",num);
		}
}
void main() {
	int num = 0;
	scanf("%d",&num);
	f1(num);
}
