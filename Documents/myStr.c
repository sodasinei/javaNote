#include<stdio.h>
#include<string.h>
void str(char a[100],char b[100])
{
	int i=0, j=0;
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			b[j]=a[i];
			j++;
		}
		i++;
	} 
}
int main()
{
	char a[100];
	char b[100];
	gets(a);
	str(a,b);
	puts(b);
	return 0;
}

