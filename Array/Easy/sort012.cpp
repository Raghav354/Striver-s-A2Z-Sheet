// Tip -: Count the  0,1 & 2 as we have only 3 variables.
// Optimal - DNF algorithm

void sort012(int a[], int n)
    {
        int left = 0 , right = n-1 , i=0;
        while(i<n && i<=right){
            if(a[i]==0){
                swap(a[i],a[left++]);
            }else if(a[i] == 2){
                swap(a[i] , a[right--]);
            }else{
                i++;
            }
            i++;
        }
        
    }