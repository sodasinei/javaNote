#include <stdio.h>
f1(double a,double b,double c){
	double res1 = -b/2*a + (sqrt(b*b-4*a*c)/2*a);
	double res2 = -b/2*a - (sqrt(b*b-4*a*c)/2*a);
	printf("��b^2-4ac>0ʱ,x1=%.2f,x2=%.2f",res1,res2);
}
f2(double a,double b,double c){
	double res1 = -b/2*a + (sqrt(b*b-4*a*c)/2*a);
	printf("��b^2-4ac=0ʱ,x=%.2f",res1);
}
f3(){
	printf("��Ǹ�˷���û�н�");
}
void main() {
	/*
	�󷽳�ax2+bx+c=0�ĸ�����3�������ֱ���b2-4ac����0������0��С��0ʱ
	�ĸ�����������������������a��b��c��ֵ��
	*/
		double a,b,c=0;
		printf("�����������֣�");
		scanf("%lf %lf %lf",&a,&b,&c);
		if(b*b-4*a*c>0){
		f1(a,b,c);
	}else if(b*b-4*a*c==0){
		f2(a,b,c);
	}else{
		f3();
	}
}
