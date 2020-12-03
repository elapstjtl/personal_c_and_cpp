/*
 * @Author: your name
 * @Date: 2020-11-30 08:43:42
 * @LastEditTime: 2020-11-30 09:06:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\oj\p1923.cpp
 */
/*
 * @Author: your name
 * @Date: 2020-11-30 08:20:14
 * @LastEditTime: 2020-11-30 08:36:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\oj\p1271.cpp
 */

//这道题通过快速排序，将数据分为上下两部分，可以知道目标值的区间，优化时间
#include <iostream>
using namespace std;
void s_qsort (int *a,int n); //快速排序函数
int main(void)
{
    int n,m,i;
    cin >> m >> n;
    int a[m];
    for (i=0;i<m;i++)
    {
        cin >> a[i];
    }
    //对数组一次快排，分区间
	int left,right,key,temp;
	key = a[m/2];//把小于key的放左边
	for (left = 0,right = m-1;;left++,right--)
	{
		while(a[left] <key)
			left++;
		while(a[right]>key)
			right--;
		if (left >= right)
			break;
		temp =a[left];a[left] = a[right];a[right] = temp;
	}
    if (m/2 == n)
    {
        cout << key;
        return 0;
    }
    if (m/2 < n)//目标值在右边
    {
        s_qsort(a+m/2 , m-m/2);
    }
    if (m/2 > n)//目标值在左边
    {
        s_qsort(a, m/2);
    }
    cout << a[n];
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