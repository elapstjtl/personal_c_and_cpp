#include<stdio.h>
struct basic//定义原来的函数 
{
	int relife;
	int death; 
}x0;

struct change//定义改变后的函数 
{
	int relife;
	int death; 
}x1;
void main(void)
{
	x0.relife = 1;//为原来的函数附初值 
	x0.death = 0;
	
	x1.death = x0.relife;//将相反的值传入 
	x1.relife = x0.death;
	
	//测试是否成功
	
	//测试原函数是否改变 
	printf("x0中复活的值为：%d\n",x0.relife);
	printf("x0中死亡的值为：%d\n\n",x0.death); 
	//测试改变后函数
	printf("x1中复活的值为：%d\n",x1.relife);
	printf("x1中死亡的值为：%d\n",x1.death); 
} 
