/*
 * @Author: your name
 * @Date: 2020-11-06 17:17:40
 * @LastEditTime: 2020-11-06 19:23:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\def_struct.c\p5740.c
 */
/*
 * @Author: your name
 * @Date: 2020-11-06 17:17:40
 * @LastEditTime: 2020-11-06 18:55:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\luogu\def_struct.c\p5740.c
 */
#include<stdio.h>
#include<windows.h>
#include<math.h>
/*这个题我机子上就可以通过，但到了洛谷上一个也过不了啊aaaaaaaaaaa
 还下了几个数据看看.....,只能用结构体了（文件名为 p5740_2.c）*/
int main(void)
{
    int n;
    scanf("%d",&n);
    char name[n+1][10],ch;
    int score[n+1][4];
    int i,j,z;
    ch = getchar();
    //输入阶段
    for (i = 1;i<=n;i++)
    {
        z=0;
        while(name[i][z-1]!=' ')
        {
            name[i][z] = getchar();
            z++;
        }
        for (j = 1;j<=3;j++)
        {
            scanf("%d",&score[i][j]);
            ch = getchar();
        }
    }
    int result[n+1],max=0,count;
    memset(result,0,sizeof(result));//初始化为0
    //找出最大的一个人
    for (i = 1;i<=n;i++)
    {
        for (j = 1;j<=3;j++)
            result[i]+=score[i][j];
        if (max<result[i])
        {
            max = result[i];
            count = i;//count记录最大的对应号码
        }
    }
    i = 0;

    //输出格式
        while(name[count][i] != ' ')
        {
            printf("%c",name[count][i]);//输出文字，最后是个空格
            i++;
        }
        printf(" %d %d %d",score[count][1],score[count][2],score[count][3]);//输出分数
    
system("pause");
return 0;
}