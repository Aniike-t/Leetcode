int integerBreak(int n){
        int max=1;
        if(n==2)return 1;
        if(n==3)return 2;
        if(n==4)return 4;
        while(n>4){
                max=max*3;
                n=n-3;
        }
        max=max*n;
        return max;
}