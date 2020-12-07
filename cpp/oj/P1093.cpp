/*
 * @Author: your name
 * @Date: 2020-12-03 09:49:07
 * @LastEditTime: 2020-12-03 22:24:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\oj\p1059.cpp
 */
#include <iostream>
using namespace std;
void j_qsort (int *a,int n);
struct student
{
    int id;                     //学号
    int math;
    int yuwen;
    int english;
    int sum;
};
int main(void)
{
    int i,n;
    cin >> n;
    student a[n];       //创建一个结构体数组
    //给每个结构体传入数据
for (i = 0;i<n;i++)
{
    cin >> a[i].yuwen >> a[i].math >> a[i].english;
    a[i].id = i+1;
    a[i].sum = a[i].yuwen + a[i].math + a[i].english;
}
j_qsort(a,n); //快速排序

system("pause");
return 0;
}

void j_qsort (,int n)
{
	int left,right,key,temp;
	if (n<2) return;

	key = a[n/2];

	for (left = 0,right = n-1;;left++,right--)
	{
		while(a[left] >key)
			left++;
		while(a[right]<key)
			right--;
		if (left >= right)
			break;
		temp =a[left];a[left] = a[right];a[right] = temp;
	}
	j_qsort(a,left);
	j_qsort(a+left,n-left);
}