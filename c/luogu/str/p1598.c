/*
 * @Author: your name
 * @Date: 2020-11-05 10:16:26
 * @LastEditTime: 2020-11-05 11:05:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\str\p1598.c
 */
#include<stdio.h>
#include<windows.h>
int main(){
    char temp;//用来读取字符
    int word[26]={0};//存储每个字母出现的次数
    while(scanf("%c",&temp)!=EOF)
    {
        switch(temp)
        {
            case 'A':word[0]++;break;
            case 'B':word[1]++;break;
            case 'C':word[2]++;break;
            case 'D':word[3]++;break;
            case 'E':word[4]++;break;
            case 'F':word[5]++;break;
            case 'G':word[6]++;break;
            case 'H':word[7]++;break;
            case 'I':word[8]++;break;
            case 'J':word[9]++;break;
            case 'K':word[10]++;break;
            case 'L':word[11]++;break;
            case 'M':word[12]++;break;
            case 'N':word[13]++;break;
            case 'O':word[14]++;break;
            case 'P':word[15]++;break;
            case 'Q':word[16]++;break;
            case 'R':word[17]++;break;
            case 'S':word[18]++;break;
            case 'T':word[19]++;break;
            case 'U':word[20]++;break;
            case 'V':word[21]++;break;
            case 'W':word[22]++;break;
            case 'X':word[23]++;break;
            case 'Y':word[24]++;break;
            case 'Z':word[25]++;break;
        }
    }
    int i,max = 0,min;
    //找出最大的与最小的
    for (i=0;i<26;i++)
    {
        if (word[i]>max)
        max = word[i];
    }
    min =max;
    for (i = 0;i<26;i++)
    {
        if (word[i]<min)
        min = word[i];
    }
    int j;
  //一行一行的打印，j表示行数，i表示列数,好像不需要最小的。。。
    for (j = max;j>0;j--)
    {
        for (i = 1;i<27;i++)
        {
            if(word[i-1]>=j)//矩阵行数的比较，大了就打印
            {
                printf("*");
            if(i!=26)
                printf(" ");//最后一行不空格
            }
            else
            {
                printf(" ");
            if(i!=26)
                printf(" ");
            }
            
        }
        printf("\n");
    }
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");

system("pause");
return 0;
}