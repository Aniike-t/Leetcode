void Rev(int a, int b, char* s){
    int c= b-a;
    for(int i=0;i<=c/2;i++){
        int temp=s[a+i];
        s[a+i]= s[b-i];
        s[b-i]= temp;
    }
}
char * reverseWords(char * s){
    int l= strlen(s);
    int prev=0;
    for(int i=0;i<l;i++){
        if(s[i]==' '){
            Rev(prev,i-1,s);
            prev=i+1;
        }
    }        
    Rev(prev,l-1,s);
    return s;
}