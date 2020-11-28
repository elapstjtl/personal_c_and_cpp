/*
 * @Author: your name
 * @Date: 2020-10-24 09:38:30
 * @LastEditTime: 2020-10-24 09:56:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \luogu\ABC.c
 */
#include<stdio.h>

int main(void)
{
    int max,mid,min,i,temp;
    char temp1,temp2,temp3;
    scanf("%d %d %d",&max,&min,&mid);
	if (max < min)
	{
	temp = max;
	max = min;
	min = temp;
	}
	if (max < mid)
	{
	temp = max;
	max = mid;
	mid = temp;
	}
	if (mid < min)
	{
	temp = mid;
	mid = min;
	min = temp;
	}
	getchar();
    scanf("%c%c%c",&temp1,&temp2,&temp3);
    switch (temp1)
    {
    case 'C':printf("%d ",max);break;
    case 'B':printf("%d ",mid);break;
    case 'A':printf("%d ",min);break;
    }
    switch (temp2)
    {
    case 'C':printf("%d ",max);break;
    case 'B':printf("%d ",mid);break;
    case 'A':printf("%d ",min);break;
    }
    switch (temp3)
    {
    case 'C':printf("%d",max);break;
    case 'B':printf("%d",mid);break;
    case 'A':printf("%d",min);break;
    }
return 0;
}
