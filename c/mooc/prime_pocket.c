/*
 * @Author: your name
 * @Date: 2020-10-15 10:18:17
 * @LastEditTime: 2020-10-27 18:37:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\mooc\prime_pocket.c
 */
#include<stdio.h>
#include<math.h>
#include<windows.h>

int prime( int p );
int primesum( int m, int n );


int main(void)
{
	int L,i,count = 0;
	scanf("%d",&L);
	int a[L];
	for (i = 2;i<=L;i++)
	{
		if (primesum(2,i) >L)
		{
			break;	
		}
		if (prime(i))
		{
			a[count] = i;
			count++;
		}
		else
		{
			continue;
		}
		if (primesum(2,i) >L)
		{
			break;	
		}
	}
	for (i = 0;i<count;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("%d",count);
system("pause");
return 0;
	
}


int prime( int p )//�ж�p�Ƿ�Ϊ�������Ƿ���1���񷵻�0 
{
    if (p<=1)
    {
        return 0;
    }
    int i;
	double temp;
    temp = sqrt(p);
    for (i=2;i<temp;i++)
    {
        if (p%i == 0)
        {
            return 0;
        }
    } 
    return 1;
} 

int primesum( int m, int n )//��m �� n ֮�����������ĺ� 
{
    int i,sum = 0;
    for (i = m;i<=n;i++)
    {
        if (prime(i)) 
        {
            sum = sum+i;
        }
    }
    return sum;
}
