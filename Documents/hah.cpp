#include <stdio.h> //�����׼���������ͷ�ļ�

//������
int main()
{
    //���ڴ�������Ҫִ�еĴ���
    char year[5],month[3],day[3];

    // �����ʾ���
    printf("�����������գ�ע������Ϊ��λ�ַ������Ե�����\n");
    scanf("%s.%s.%s",year,month,day);
    printf("%s��%s��%s��",year,month,day);
    // C11 ��2011���׼Ҫ�����еĺ�������Ҫ����
    return 0;
}

