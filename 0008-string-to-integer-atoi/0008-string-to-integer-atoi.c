int myAtoi(char * s){
    int k=1;
    while(*s==' '){
        s++;
    }
    if(*s=='+'||*s=='-'){
        if(*s=='-'){
            k=-1;
            }
        s++;
    }
    double result=0;
    while (*s) {
        int value = *s - '0';
        if (value < 0 || value > 9) break;
        
        result*= 10;
        result=result+value;
        s++;
    }
    if(k==-1){
        result=result*-1;
    }
    if(result>2147483647)
        return 2147483647;
    else if (result<-2147483648)
        return -2147483648;
    else
        return result;

}