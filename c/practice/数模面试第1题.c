#include<stdio.h>
struct basic//����ԭ���ĺ��� 
{
	int relife;
	int death; 
}x0;

struct change//����ı��ĺ��� 
{
	int relife;
	int death; 
}x1;
void main(void)
{
	x0.relife = 1;//Ϊԭ���ĺ�������ֵ 
	x0.death = 0;
	
	x1.death = x0.relife;//���෴��ֵ���� 
	x1.relife = x0.death;
	
	//�����Ƿ�ɹ�
	
	//����ԭ�����Ƿ�ı� 
	printf("x0�и����ֵΪ��%d\n",x0.relife);
	printf("x0��������ֵΪ��%d\n\n",x0.death); 
	//���Ըı����
	printf("x1�и����ֵΪ��%d\n",x1.relife);
	printf("x1��������ֵΪ��%d\n",x1.death); 
} 
