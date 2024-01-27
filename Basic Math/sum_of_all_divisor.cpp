// solution 1
int divSum(int n)
{
	int sum=0;
	for(int i=1 ; i<=n ; i++)
	{
		if(n%i==0)
		sum+=i;
	}	
	return sum;
}

int sumOfAllDivisors(int n){
	int sum=0;
	for(int i=1 ; i<=n ; i++)
	{
		sum +=divSum(i);
	}	
	return sum;
}




//optimized solution
int sumOfAllDivisors(int n){
	int sum=0;
	for(int i=1 ; i<=n ; i++)
	{
		sum += i*(n/i);
	}	
	return sum;
}