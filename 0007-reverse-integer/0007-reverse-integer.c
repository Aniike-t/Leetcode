long reverse(long x){
 long reverse = 0,remainder;
    long y=x;
    if(x<0){ x=x*-1;}
    
   
    while (x!= 0) {
    remainder = x % 10;
    reverse = reverse * 10 + remainder;
    x/=10;
    }
    if(y<0){reverse=reverse*-1;}
    if(reverse>2147483647 || reverse<-2147483648){reverse=0;}

    return reverse;

}