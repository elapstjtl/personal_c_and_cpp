#include<stdio.h>
void main(void)
{
	double R = 0,m,day = 0,total = 3500,I,sum = 0;
	double tsingle = 0,ttotal = 0;
	printf("��������������̶ȣ�С��1��С������");
	scanf("%lf",&I);
	
	printf("\n��������ÿ�챳�ĵ�������");
	scanf("%lf",&m);
	tsingle = m/50*60 + m/50*20;
	while (sum<=total) 
	{
		R = m*(1-I);
		ttotal +=  m/50.0*60.0 + m/50.0*20.0;
		sum = sum + R;
	}	
	printf("��ÿ�챳��ô�൥��:%.0lf\n",2*m);
	day = ttotal /60 /24;
	printf("���3500��Ŀ�꣬��Ҫ�ܹ�%.2lf���ӣ��ϼ�%.2lfСʱ��%.2lf��",ttotal,ttotal/60,day);
	if (day<55)
	printf("�������Ŀ�꣡��(��������������������Ŷ)");
	else
	printf("ʱ�䲻�����ټӰѾ���");
}
