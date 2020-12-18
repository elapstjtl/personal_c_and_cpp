#include <stdio.h>

struct student
{
    char name[21];                     
    int sum;
};

void j_qsortsum(student *a,int n);

int main(void)
{
    int i,n;
    scanf("%d",&n);
    student a[n];   
	for (i = 0;i<n;i++)
	{
        scanf("%d %s",&a[i].sum,&a[i].name);
	}
j_qsortsum(a,n); 

for (i = 0;a[i].sum==a[0].sum;i++)
{
    printf("%s\n",a[i].name);
}
return 0;
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