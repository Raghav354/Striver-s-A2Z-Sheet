// Tip -: ith largest element is placed at it's right position on ith iteration.

void recursiveBubble(int arr[] , int n){
        if(n==0||n==1)
        return;
        
        for(int i=0 ; i<n-1 ; i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i] , arr[i+1]);
            }
        }
        recursiveBubble(arr, n-1);
    }
    void bubbleSort(int arr[], int n) {
        recursiveBubble(arr,n);
    }