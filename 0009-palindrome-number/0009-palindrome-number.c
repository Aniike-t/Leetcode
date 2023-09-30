bool isPalindrome(int x){
    long reverse = 0;
    long remainder = 0;
    long n1 = x; 
    while (x!= 0){
        remainder = x% 10;
        reverse = reverse * 10 + remainder;
        x/= 10;
    }
    if (n1>-1 && reverse == n1)
        return true;
    else if(n1<-1)
        return false;
    else
        return false;
}