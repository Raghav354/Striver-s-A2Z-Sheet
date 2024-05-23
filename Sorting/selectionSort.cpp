// Tip -: In ith round , ith smallest element is placed on it's right place.

int select(int arr[], int i)
    {
        int minInd = i;
        for(int j=i+1 ; j<this->n ; j++){
            if(arr[j] < arr[minInd])
                minInd = j;
        }
        return minInd;
    }
     
    void selectionSort(int arr[], int n)
    {
        this->n = n;
       for(int i=0 ; i<n ; i++){
           int minInd = i;
           minInd = select(arr,i);
           swap(arr[i] , arr[minInd]);
       }
    }

    // void selectionSort(int arr[], int n)
    // {
    //    for(int i=0 ; i<n ; i++){
    //        int minInd = i;
    //        for(int j=i+1 ; j<n ;j++){
    //            if(arr[j] < arr[minInd]){
    //                minInd = j;
    //            }
    //        }
    //        swap(arr[i] , arr[minInd]);
    //    }
    // }