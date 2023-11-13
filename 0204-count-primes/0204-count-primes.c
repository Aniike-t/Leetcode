

int countPrimes(int n){
    if( n<= 2){
        return 0;
    }
    _Bool IsPrime[n];
    for (int i=2 ; i<n; i++){
        IsPrime[i]=true;
    }
    int count = 0;
    for (int i = 2; i < n; i++){
        if(IsPrime[i]){
            for(long long p = (long long)i * i; p < n; p += i){
                IsPrime[p] = 0;  
            }
        }
    }
    for(int i = 2; i < n; i++){
        if(IsPrime[i]){
            count++;
        }
    }
    return count;
}