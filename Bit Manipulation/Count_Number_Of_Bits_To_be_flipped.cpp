int minBitFlips(int a, int b) {
        int num = a^b;
        int count=0;
        while(num!=0)
        {
            if(num&1)
            count++;
            num = num>>1;
        }
        return count;
    }