int countDigits(int n){
	int count=0;
	int num=n;
	while(n>0)
	{
		int t = n%10;
		if(t != 0 && num % t==0)
		{
			count++;
		}
		n/=10;
	}
	return count;
}