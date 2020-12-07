/*
 * @Author: your name
 * @Date: 2020-11-26 11:03:21
 * @LastEditTime: 2020-12-03 19:37:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\cpp\base\circle\quick_sort.cpp
 */
void s_qsort (int *a,int n);
void j_qsort (int *a,int n);
# include<iostream>
using namespace std;
int main()
{
    //输入阶段
    int n,i,j,key;
    printf("要排序几个数：");
    cin >> n;
    int a[n] = {0};
    printf("请以空格为间隔，输入这%d个数:",n);
    for (i = 0;i<n;i++)
        cin >> a[i];

	s_qsort(a,n);
	    for (i = 0;i<n;i++)
        cout <<  a[i] << ' ';
		
system("pause");
return 0;
}

//升序快速排序
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
//降序
void j_qsort (int *a,int n)
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