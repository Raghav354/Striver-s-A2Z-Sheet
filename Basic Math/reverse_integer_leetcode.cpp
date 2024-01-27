int reverse(int x) {
        if(x > INT_MAX)
        {
           return 0;
        }
        if(x < INT_MIN)
        {
            return 0;
        }
        long long int ans=0;
        while(x)
        {
            int ld = x % 10;
            ans =ans*10 + ld;
            x /= 10;
        }
          if(ans > INT_MAX || ans < INT_MIN)
        {
            return 0;
        }
        return ans;
    }