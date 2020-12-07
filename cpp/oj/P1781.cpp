/*
 * @Author: your name
 * @Date: 2020-12-06 10:18:45
 * @LastEditTime: 2020-12-06 10:25:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\oj\P1781.cpp
 */
#include <iostream>
using namespace std;
void s_qsort (int *a,int n);
int main(void)
{
    int n,i;
    cin >> n;
    int a[n];
    int b[n];
    for (i = 0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    s_qsort(a,n);
    for (i =0;i<n;i++)
    {
        if (a[n-1] == b[i])
        {
        cout << i+1 << endl;
        break;
        }
    }
    cout << a[n-1];
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