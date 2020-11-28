/*
 * @Author: your name
 * @Date: 2020-11-05 11:11:44
 * @LastEditTime: 2020-11-05 15:48:45
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\str\P1553.c
 */
/*
 * @Author: your name
 * @Date: 2020-11-05 11:11:44
 * @LastEditTime: 2020-11-05 15:36:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\str\P1553.c
 */
//这个题好无聊啊
/*这个题写的有点复杂了，有好多坑，又刚开始认为不用定义函数，就一直重用反转的程序
主要看整数部分吧，其他的就是套个娃*/
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
int main(void)
{
    char a[22];
    int i,j,temp,len,len2;
     int result,result1,result2;
    
    scanf("%s",&a);
    len = strlen(a);
for (i = 0;i<22;i++)
{
//为浮点数类型
        if(a[i] == '.')
        {
            int count = 0,count1,count2,count3;
            temp = i; //temp的位置为分隔符
            char num1[temp],num2[len-temp-1];  //num1前面部分  num2后面部分
            for (i = 0;i<temp;i++)
            {
                num1[i] = a[temp-1-i];
            }
            for (i = 0;i<temp;i++)
            {
                if(num1[i-count] == '0')
                {
                    count++;
                    for (j = 0;j<temp-1;j++)
                    num1[j] = num1[j+1];
                }
                else
                {
                    break;
                }
            }
            count1 =count;
            count = 0;
            for (i = 0;i<len-temp-1;i++)
            {
                num2[i] = a[len-1-i];
            }
                for (i = 0;i<len-temp-1;i++)
                {
                    if(num2[i-count] == '0')
                    {
                        count++;
                        for (j = 0;j<len-temp-1;j++)
                        num2[j] = num2[j+1];
                    }
                    else
                    {
                        break;
                    }
                }
            count2 = count;
            for (i = 0;i<len-temp-1-count1;i++)
            printf("%c",num1[i]);
            printf(".");
            len2 = strlen(num2);
            count = 0;
                for (i = len2-1;i>=0;i--)
                {
                    if(num2[i+count] == '0')
                    {
                        count++;
                        for (j = 0;j<len2;j++)
                        num2[j] = num2[j+1];
                    }
                    else
                    {
                        break;
                    }
                }
            count3 = count;
            for (i = 0;i<len-temp-1-count2-count3;i++)
            printf("%c",num2[i]);
            system("pause");
            return 0;
        }

//为除数类型
        if(a[i] == '/')
        {
            int count = 0,count1,count2;
            temp = i; //temp的位置为分隔符
            char num1[temp],num2[len-temp-1];  //num1前面部分  num2后面部分
            for (i = 0;i<temp;i++)
            {
                num1[i] = a[temp-1-i];
            }
            for (i = 0;i<temp;i++)
            {
                if(num1[i-count] == '0')
                {
                    count++;
                    for (j = 0;j<temp-1;j++)
                    num1[j] = num1[j+1];
                }
                else
                {
                    break;
                }
            }
            count1 =count;
            count = 0;
            for (i = 0;i<len-temp-1;i++)
            {
                num2[i] = a[len-1-i];
            }
                for (i = 0;i<len-temp-1;i++)
                {
                    if(num2[i-count] == '0')
                    {
                        count++;
                        for (j = 0;j<len-temp-1;j++)
                        num2[j] = num2[j+1];
                    }
                    else
                    {
                        break;
                    }
                }
            count2 = count;
            for (i = 0;i<len-temp-1-count1;i++)
            printf("%c",num1[i]);

            printf("/");
            
            for (i = 0;i<len-temp-1-count2;i++)
            printf("%c",num2[i]);
            system("pause");
            return 0;
        }

//为百分数类型
        if (a[i] == '%')
        {
            len =len-1;
            char num2[len];
    //先倒序
            for (i = 0;i<len;i++)
            {
                num2[i] = a[len-1-i];
            }
            //去零
            int count = 0;
            for (i = 0;i<len;i++)
            {
                if(num2[i-count] == '0')
                {
                    count++;
                    for (j = 0;j<len-1;j++)
                    num2[j] = num2[j+1];
                }
                else
                {
                    break;
                }
            }
            for (i = 0;i<len-count;i++)
            printf("%c",num2[i]);
            printf("%%");
            system("pause");
            return 0;
        }
}



//都不满足，为整数类型
    char num2[len];
    //先倒序
    for (i = 0;i<len;i++)
    {
        num2[i] = a[len-1-i];
    }
    //去零
    int count = 0;
    for (i = 0;i<len;i++)
    {
        if(num2[i-count] == '0')   //i的循环导致i在变，用count保证指向的都是未验证的首位
        {
            count++;
            for (j = 0;j<len-1;j++)
            num2[j] = num2[j+1];   //用后面的依次向前填，去掉0
        }
        else
        {
            break;  //有一个不为0就可以跳出了
        }
    }
    for (i = 0;i<len-count;i++)  //这里因为后面都是0，要用count规定打印的范围
    printf("%c",num2[i]);
    system("pause");
    return 0;
}