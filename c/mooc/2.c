#include<stdio.h> 
int main()
{
	char *array[5] = {"fishc","five","star","good","wow"};
	char *(*a)[5] =&array;
	int i,j;
	
	for (i = 0;i < 5;i = i+1)
	{
		 for (j = 0;(*a)[i][j]      != '\0';j = j+1)
		 {
		 	printf("%c", (*a)[i][j]  );
		 }
	}	printf("\n");
	return 0;
}
