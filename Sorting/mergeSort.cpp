// Tip :- Divide than merge.

void merge(int arr[], int l, int m, int r)
    {
        int k=l;
        int l1 = m-l+1;
        int l2= r-m;
        int arr1[l1] , arr2[l2];
        for(int i=0 ; i<l1 ; i++){
            arr1[i] = arr[k++];
        }
        k=m+1;
        for(int i=0 ; i<l2 ; i++){
            arr2[i] = arr[k++];
        }
        
        int i=0 , j=0 ;
        k=l;
        while(i<l1 && j<l2){
            if(arr1[i] < arr2[j]){
                arr[k++] = arr1[i++];
            }
            else{
                arr[k++] = arr2[j++];
            }
        }
        
        while(i<l1)arr[k++] = arr1[i++];
        while(j<l2)arr[k++] = arr2[j++];
    }
    
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
            return;
        }
        int mid = (l+r)/2;
        mergeSort(arr,l , mid);
        mergeSort(arr,mid+1 ,r);
        merge(arr,l,mid,r);
    }