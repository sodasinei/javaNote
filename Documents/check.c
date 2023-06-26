#include<stdio.h>
int main()
{
	char text[3][80];
	int i,j;
	int upp = 0,low = 0,dig = 0,spa = 0,oth = 0;
	for(i=0;i<3;i++)
	{
		gets(text[i]);
		for(j=0;j<80&&text[i][j]!='\0';j++)
		{ 
			if(text[i][j]>='A'&&text[i][j]<='Z')
			{
				upp++;
			}else if(text[i][j]>='a'&&text[i][j]<='z')
			{
				low++;
			}else if(text[i][j]>='0'&&text[i][j]<='9')
			{
				dig++;
			}else if(text[i][j]==' ')
			{
				spa++;
			}else
			{
				oth++;
			}
		}
	}
		printf("\n");
		printf("大写字母：%d个\n",upp);
		printf("小写字母：%d个\n",low);
		printf("数字：%d个\n",dig);	
		printf("空格：%d个\n",spa);
		printf("其他字符：%d个\n",oth);
	return 0;
} 

