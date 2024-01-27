int singleNumber(vector<int>& arr) {
        int num=arr[0];
        for(int i=1 ; i<arr.size();i++)
        {
            num = num^arr[i];
        }
        return num;
    }