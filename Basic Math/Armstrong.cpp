int countDigit(int n)
{
	int count=0;
	while(n)
	{
		n/=10;
		count++;
	}
	return count;
}
bool checkArmstrong(int n){
	int num=n;
	int count=countDigit(n);

	int sum=0;
	while(n)
	{
		int ld= n%10;
		sum += pow(ld,count);
		n/=10;
	}
	return sum==num;
}
