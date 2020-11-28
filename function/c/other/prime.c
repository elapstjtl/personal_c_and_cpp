/*
 * @Author: your name
 * @Date: 2020-11-09 08:23:22
 * @LastEditTime: 2020-11-09 08:23:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c\function\1.c
 */
int prime( int p )//判断p是否为素数，是返回1，否返回0 
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