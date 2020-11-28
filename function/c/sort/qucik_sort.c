/*
 * @Author: your name
 * @Date: 2020-11-26 12:00:37
 * @LastEditTime: 2020-11-26 15:29:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\function\c\qucik_sort.c
 */

#include <stdio.h>
#include<windows.h>
void s_quick_sort( int *a, int n);
void j_quick_sort( int *a, int n);

int main(void)
{
    int n,i;
    scanf("%d",&n);
    getchar();
    int a[n];
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    s_quick_sort(a, n); 

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
        printf("\n");

    j_quick_sort(a, n); 
        for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    system("pause");
    return 0;
}

void s_quick_sort( int *a, int n)//升序排列
{
    int i, j, p, tmp;
    if (n < 2)  return; //当只剩下一个数时，退出函数

    p = a[n / 2];  //基准点

    for ( i = 0, j = n -1;; i++, j--) //i为左边的，j为右边的
    {
        while (a[i] < p) // 为使p左边小于p,一直找，直至找到大于等于基准点的值,停下
            i++;
        while (a[j] > p) //为使p右边大于p,一直找，直至找到小于等于基准点的值,停下
            j--;
        if ( i >= j) //如果左边位置的大于右边，表明已经经过了p，不存在这样的两点，退出循环
            break;
        tmp = a[i]; a[i] = a[j]; a[j] = tmp; // 交换刚刚i与j位置的值
    }   

    s_quick_sort( a, i); //对基准点右边的递归排序
    s_quick_sort( a + i, n - i); //对基准点左边的递归排序
}


void j_quick_sort( int *a, int n)//降序排列
{
    int i, j, p, tmp;
    if (n < 2)  return; //当只剩下一个数时，退出函数

    p = a[n / 2];  //基准点

    for ( i = 0, j = n -1;; i++, j--) //i为左边的，j为右边的
    {
        while (a[i] > p) // 为使p左边小于p,一直找，直至找到大于等于基准点的值,停下
            i++;
        while (a[j] < p) //为使p右边大于p,一直找，直至找到小于等于基准点的值,停下
            j--;
        if ( i >= j) //如果左边位置的大于右边，表明已经经过了p，不存在这样的两点，退出循环
            break;
        tmp = a[i]; a[i] = a[j]; a[j] = tmp; // 交换刚刚i与j位置的值
    }   

    j_quick_sort( a, i); //对基准点右边的递归排序
    j_quick_sort( a + i, n - i); //对基准点左边的递归排序
}