void rearrange(int arr[], int n) {
	    vector<int>pos,neg;
	    for(int i=0 ; i< n; i++){
	        if(arr[i]>=0 )pos.push_back(arr[i]);
	        else neg.push_back(arr[i]);
	    }
	    vector<int>ans;
	    int posInd = 0 , negInd = 0 , i=0 ,j=1;
	    while(posInd < pos.size() && negInd < neg.size()){
	        ans.push_back(pos[posInd++]);
	        ans.push_back(neg[negInd++]);
	        i+=2;
	        j+=2;
	    }
	    while(posInd<pos.size())
	    {
	        ans.push_back(pos[posInd++]);
	    }
	    while(negInd<neg.size())
	    {
	        ans.push_back(neg[negInd++]);
	    }
	    for(int i=0 ; i<ans.size();i++){
	        arr[i]=ans[i];
	    }
	}