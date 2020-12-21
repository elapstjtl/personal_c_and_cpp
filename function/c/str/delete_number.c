/*
 * @Author: your name
 * @Date: 2020-12-21 09:00:35
 * @LastEditTime: 2020-12-21 09:00:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\function\c\str\delete_number.c
 */
void delnum(char *s)
{
    int i,j;
    for(i=0,j=0;*(s+i)!='\0';i++)
    if(*(s+i)<'0'||*(s+i)>'9')
    {
        *(s+j)=*(s+i);
        j++;
    }
    s[j]='\0';
}