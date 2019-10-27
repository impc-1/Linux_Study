int sum(int *a, int n)
{
	int i;	
	int sum = 0;
	for(i =0; i<n; i++)
	{
		sum += a[i];
	}
	return sum;
}

int max(int *a, int n)
{
	int i;	
	int m=a[0];
	for(i=0; i<n ; i++)
	{
		if(m <a[i])
		{
			m = a[i];
		}
	}
	return m;
}
