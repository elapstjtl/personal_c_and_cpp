#include<stdio.h>
#include<string.h>
int main()
{
	char str[1024];
	int i,a,count = 0;
	scanf("%s",&str);
	for(i = 1;i*i<=strlen(str);i = i+1)//�������ı߳�
	{
		a = i;
	}
	
	
	for(i = 0;i <a*a;i++) //������� 
	{
		printf("%c",str[i]);
		count = count+1; 
		
		
		if (count == a)//���� 
		{
			count = 0;//���ü����� 
			printf("\n");
		} 
	}	

	return 0;
 } 
