vector<int> twoOddNum(vector<int> arr){
    int num = arr[0];
    for(int i=1 ; i<arr.size() ; i++)
    {
        num ^= arr[i]; 
    }
    int n1=0,n2=0,count=0;

    while(num)
    {
        if(num&1)break;
        count++;
        num=num>>1;
    } 

    for(int i=0 ; i<arr.size() ;i++)
    {
        if(arr[i]&(1<<count))
        n1=n1^arr[i];
        else 
        n2 = n2^arr[i];
    }
    if(n1>n2)
    return {n1,n2};
    else 
    return {n2,n1};
}