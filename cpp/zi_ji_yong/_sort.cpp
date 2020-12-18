/*
 * @Author: your name
 * @Date: 2020-12-14 22:11:59
 * @LastEditTime: 2020-12-17 10:23:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\function\cpp\Own_sort.cpp
 */
#include"_sort.h"
void _sort::int_quick_sort(int *a, int n)
{
    //升序快速排序
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
	_sort::int_quick_sort(a, left);
	_sort::int_quick_sort(a+left, n-left);
}