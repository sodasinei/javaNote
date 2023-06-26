#include <stdio.h> 
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max=a>b?a:b;
	int max2=max>c?max:c;
	printf("×î´óÖµ=%d",max2);
	return 0;
}
