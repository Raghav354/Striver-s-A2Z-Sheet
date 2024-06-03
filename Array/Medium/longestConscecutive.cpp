int findLongestConseqSubseq(int arr[], int N)
    {
      int maxi = INT_MIN;
      for(int i=0 ; i<N ; i++){
          maxi = max(maxi,arr[i]);
      }
      vector<int>temp(maxi+1,0);
      for(int i=0 ; i<N ;i++){
          temp[arr[i]]=1;
      }
      int count=0,i=0,ans=0;
      while(i<temp.size()){
          if(temp[i]==1)
              count++;
          else
          {
              ans = max(ans,count);
              count=0;
          }
          
          ans = max(ans,count);
          i++;
      }
      return ans;
    }