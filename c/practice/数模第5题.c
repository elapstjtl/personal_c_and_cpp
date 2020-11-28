#include<stdio.h>
void main(void)
{
	double R = 0,m,day = 0,total = 3500,I,sum = 0;
	double tsingle = 0,ttotal = 0;
	printf("请输入你的遗忘程度（小于1的小数）：");
	scanf("%lf",&I);
	
	printf("\n请输入你每天背的单词数：");
	scanf("%lf",&m);
	tsingle = m/50*60 + m/50*20;
	while (sum<=total) 
	{
		R = m*(1-I);
		ttotal +=  m/50.0*60.0 + m/50.0*20.0;
		sum = sum + R;
	}	
	printf("你每天背这么多单词:%.0lf\n",2*m);
	day = ttotal /60 /24;
	printf("完成3500的目标，需要总共%.2lf分钟，合计%.2lf小时，%.2lf天",ttotal,ttotal/60,day);
	if (day<55)
	printf("可以完成目标！！(但这是在最理想的情况下哦)");
	else
	printf("时间不够，再加把劲吧");
}
