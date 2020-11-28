/*
 * @Author: your name
 * @Date: 2020-10-24 10:08:03
 * @LastEditTime: 2020-10-24 10:13:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \circle\look_for_min.c
 */
int main() 
{
    int n,num, minNum=1000;
    scanf("%d", &n);
    while (n--) 
    {
        scanf("%d", &num);
        if (num < minNum)
            minNum = num;
    }
    printf("%d", minNum);
    return 0;
}