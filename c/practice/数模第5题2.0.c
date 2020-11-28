/*
 * @Author: your name
 * @Date: 2020-10-17 21:47:30
 * @LastEditTime: 2020-11-26 11:18:40
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \code\c\practice\数模第5题2.0.c
 */
#include<stdio.h>
void main(void)
{
	double R = 0,m,day = 0,total = 3500,I,sum = 0;
	double ttotal = 0,review = 0,odd;
	printf("��������������̶ȣ�С��1��С������");
	scanf("%lf",&I);
	printf("��������ĸ�ϰ�����̶ȣ�С��1��С������");
	scanf("%lf",&odd);
	printf("\n��������ÿ�챳�ĵ�������");
	scanf("%lf",&m);
	while (sum<=total) 
	{
		R = m*(1-I);
		review = R*(1-odd);
		ttotal +=  m/30*60 + m/50*30;
		sum = sum + review;
	}	
	printf("��ÿ�챳��ô�൥��:%.0lf\n",2*m);
	day = ttotal /60 /24;
	printf("���3500��Ŀ�꣬��Ҫ�ܹ�%.2lf���ӣ��ϼ�%.2lfСʱ��%.2lf��",ttotal,ttotal/60,day);
	if (day<55)
	printf("�������Ŀ�꣡��(��������������������Ŷ)");
	else
	printf("ʱ�䲻�����ټӰѾ���");
}
