/*
 * @Author: your name
 * @Date: 2020-11-04 22:08:13
 * @LastEditTime: 2020-11-05 10:06:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\str\p1308.c
 */
#include<stdio.h>
#include<string.h>
char p[1000005]=" ";	//先在字符串头部放一个空格，方便
char doc[12],a[14]=" ";	
int main()
{
    int i;
	scanf("%s",doc);
	for ( i=0;i<strlen(doc);i++)		
		doc[i]<'a' ? doc[i]=(doc[i]-'A'+'a') : doc[i];	//不让用strlwr,只能这样了
	strcat(a,doc);//空格后接目标单词
	strcat(a," ");//末尾补空格

	getchar();//缓冲区去换行
	
	i = 1;	//p[0]为补空格，因此从p[1]开始读入文章
	char tmp;
	while ((tmp = getchar()) != EOF)		
		{					
			p[i]=tmp;			
			if (p[i]>='A' && p[i]<='Z')	//同样，转为小写
				p[i]+=32;		//
			i++;				
		}
	p[i]=' '; 	//字符串末尾补空格
	p[i+1]=0;  	//补"\0"
				
	int pos=-1;		
	if (strstr(p,a) != NULL) //不为空字符
		pos=strstr(p,a)-p;	//第一个目标单词出现位置

	char *pp=p,*w;	//统计单词个数，pp指向为文章头部空格，w指向目标单词出现的位置
	int count = 0,len = strlen(a);	//用len存放单词长度，避免重复运算
	while ( (w = strstr(pp,a)) != NULL )//w存放目标单词出现的位置
	{
		pp = w+len-1;	//从上一个单词后面截断，-1以保留头部空格
		count++;		//找到即+1
	}

	if (count)		//找到则输出，否则不输出
		printf("%d ",count);
	printf("%d",pos);
	return 0;
}