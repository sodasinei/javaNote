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
		printf("��д��ĸ��%d��\n",upp);
		printf("Сд��ĸ��%d��\n",low);
		printf("���֣�%d��\n",dig);	
		printf("�ո�%d��\n",spa);
		printf("�����ַ���%d��\n",oth);
	return 0;
} 

