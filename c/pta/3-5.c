int main()
{
	int year,max,count = 0;
	scanf("%d",&max);
	if (max<=2000||max>2100)
	{
		printf("Invalid year!");
		return 0;
	}
	for (year=2004;year<=max;year++)
	{
		if(0 == year % 4&&0!=year%100 || 0 == year%400)
		{
			printf("%d\n",year);
			count++;
		}
	}
	if (count == 0)
	{
		printf("None");
	}
	return 0;
}

