#include <stdio.h>
int main(){
	int num;
	int hun=0,ten=0,ind=0;
	scanf("%d",&num);
	hun = num / 100;
	ten = num / 10 % 10;
	ind = num % 10;
	if(num==hun * hun * hun + ten *ten * ten + ind *ind * ind){
		printf("%d��ˮ�ɻ���",num);
	} else{
		printf("%d����ˮ�ɻ���",num);
	}
	return 0;
}
