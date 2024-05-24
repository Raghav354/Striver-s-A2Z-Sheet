void quickSort(int arr[], int s, int e)
    {
        if(s>=e){
           return;
       }
       int pivot = partition(arr,s,e);
       quickSort(arr,s,pivot-1);
       quickSort(arr,pivot+1,e);
    }
    
    int partition (int arr[], int s, int e)
    {
       int pivot = arr[s];
       int count=0;
       for(int i=s+1 ; i<=e ;i++){
           if(arr[i] <= pivot)count++;
       }
       int pInd = count+s;
       swap(arr[s] , arr[pInd]);
       
       int i=s , j=e;
       while(i<pInd && j>pInd){
           while(i<pInd && arr[i] <= pivot){i++;}
           while(j>pInd && arr[j] > pivot){j--;}
           
           if(i<pInd && j>pInd){
               swap(arr[i++] , arr[j--]);
           }
       }
       return pInd;
    }