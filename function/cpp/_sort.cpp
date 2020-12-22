/*
 * @Author: your name
 * @Date: 2020-12-14 22:11:59
 * @LastEditTime: 2020-12-17 10:23:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\function\cpp\Own_sort.cpp
 */
#include"_sort.h"
void _sort::qsort(int *a, int n)
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
	_sort::qsort(a, left);
	_sort::qsort(a+left, n-left);
}
void _sort::qsort(float *a, int n)
{
	float key,temp;
	int left,right;
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
	_sort::qsort(a, left);
	_sort::qsort(a+left, n-left);
}
void _sort::qsort(double *a, int n)
{
	double key,temp;
	int left,right;
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
	_sort::qsort(a, left);
	_sort::qsort(a+left, n-left);
}