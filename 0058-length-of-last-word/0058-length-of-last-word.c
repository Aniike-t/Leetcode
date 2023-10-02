int lengthOfLastWord(char * s){
    int count=0,i,j;
    j=strlen(s);
    for(i=j-1;i>=0;i--){
        if(s[i]==' '&& count!=0)
            break;
        if(s[i]!=' ')
            count++;
    }
    return count;
}