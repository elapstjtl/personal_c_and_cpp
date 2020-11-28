#include<stdio.h>
int count = 0; 

void hanoi(int n,char x,char y, char z);

void hanoi(int n,char x,char y, char z)
{
	if (n==1)
	{
		printf("%c --> %c\n",x,z);
		count++;
	}
	else
	{
		hanoi(n-1,x,z,y);
		printf("%c --> %c\n",x,z);
		count++;
		hanoi(n-1,y,x,z);
	}
}


int main()
{
	int n;
	
	printf("ÇëÊäÈëººÅµËş²ãÊı£º");
	scanf("%d",&n);
	hanoi(n,'x','y','z');
	printf("%d",count);
	}
