#include <stdio.h>
int main()
{
    int d1,d2,d3;
    int n;
    int sum;
    sum = 0;
    for (d1 = 1;d1<9;d1++)
    {
    	for(d2 = 0;d2<9;d2++)
    	{
    		for(d3 = 0;d3<9;d3++)
    		{
    			n = d1*100 + d2*10 + d3;
    			if(n == (pow(d1,3)+pow(d2,3)+pow(d3,3)))
    			{
    				 sum += n;
				}
			}
		}
	}
	printf("%d\n",sum);
    return 0;
}
