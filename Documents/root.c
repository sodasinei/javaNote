#include <stdio.h>
f1(double a,double b,double c){
	double res1 = -b/2*a + (sqrt(b*b-4*a*c)/2*a);
	double res2 = -b/2*a - (sqrt(b*b-4*a*c)/2*a);
	printf("当b^2-4ac>0时,x1=%.2f,x2=%.2f",res1,res2);
}
f2(double a,double b,double c){
	double res1 = -b/2*a + (sqrt(b*b-4*a*c)/2*a);
	printf("当b^2-4ac=0时,x=%.2f",res1);
}
f3(){
	printf("抱歉此方程没有解");
}
void main() {
	/*
	求方程ax2+bx+c=0的根，用3个函数分别求当b2-4ac大于0、等于0和小于0时
	的根并输出结果。从主函数输入a，b，c的值。
	*/
		double a,b,c=0;
		printf("输入三个数字：");
		scanf("%lf %lf %lf",&a,&b,&c);
		if(b*b-4*a*c>0){
		f1(a,b,c);
	}else if(b*b-4*a*c==0){
		f2(a,b,c);
	}else{
		f3();
	}
}
