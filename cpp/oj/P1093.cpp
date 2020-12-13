/*
 * @Author: your name
 * @Date: 2020-12-03 09:49:07
 * @LastEditTime: 2020-12-10 20:28:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\oj\p1059.cpp
 */

//练习结构体，数组，排序
#include <iostream>
using namespace std;
struct student
{
    int id;                     //学号
    int math;
    int yuwen;
    int english;
    int sum;
};
void j_qsortsum(student *a,int n);
void func1(student *a);
void func2(student *a);
int main(void)
{
    int i,n;
    cin >> n;
    student a[n];       //创建一个结构体数组
	student temp;
//给每个结构体传入数据
	for (i = 0;i<n;i++)
	{
		cin >> a[i].yuwen >> a[i].math >> a[i].english;
		a[i].id = i+1;
		a[i].sum = a[i].yuwen + a[i].math + a[i].english;
	}
j_qsortsum(a,n); //先通过总分排序
for (i=0; i<6; i++)
	func1(a);
for (i=0; i<6; i++)
	func2(a);

for (i = 0;i<5;i++)
{
	cout <<a[i].id << " " << a[i].sum <<endl;
}
system("pause");
return 0;
}

void func1(student *a)//对于总分相等
{
	int i;
	student temp;
	for (i = 1;i<6;i++)
	{
		if (a[i-1].sum == a[i].sum && a[i-1].yuwen<a[i].yuwen) 
		{
				temp = a[i-1];a[i-1] = a[i];a[i]=temp;
		}
	}
	return ;
}

void func2(student *a)//对于总分相等并且语文分相等
{
	int i;
	student temp;
	for (i = 1;i<6;i++)
	{
		if (a[i-1].sum == a[i].sum && a[i-1].yuwen == a[i].yuwen && a[i-1].id>a[i].id ) 
		{
				temp = a[i-1];a[i-1] = a[i];a[i]=temp;
		}
	}
	return ;
}

void j_qsortsum(student *a,int n)
{
	int left,right,key;
	student temp; //用于交换的结构体
	if (n<2) return;

	key = a[n/2].sum;

	for (left = 0,right = n-1;;left++,right--)
	{
		while(a[left].sum >key)
			left++;
		while(a[right].sum<key)
			right--;
		if (left >= right)
			break;
		temp =a[left];a[left] = a[right];a[right] = temp;
	}
	j_qsortsum(a,left);
	j_qsortsum(a+left,n-left);
}