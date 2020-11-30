/*
 * @Author: your name
 * @Date: 2020-11-30 08:20:14
 * @LastEditTime: 2020-11-30 08:39:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\oj\p1271.cpp
 */

#include <iostream>
using namespace std;
void s_qsort (int *a,int n); //快速排序函数
int main(void)
{
    int m,i;
    cin >> m;//那个候选人有啥用啊
    int vtic[m]; //选票名单
    for (i=0;i<m;i++)
    {
        cin >> vtic[i];
    }
	
	s_qsort(vtic ,m);
	for (i = 0; i<m; i++)
	{
		cout << vtic[i] << ' ';
	}
system("pause");
return 0;
}



void s_qsort (int *a,int n)
{
	int left,right,key,temp;
	if (n<2) return;

	key = a[n/2];

	for (left = 0,right = n-1;;left++,right--)
	{
		while(a[left] <key)
			left++;
		while(a[right]>key)
			right--;
		if (left >= right)
			break;
		temp =a[left];a[left] = a[right];a[right] = temp;
	}
	s_qsort(a,left);
	s_qsort(a+left,n-left);
}