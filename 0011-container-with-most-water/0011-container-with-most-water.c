int maxArea(int* h, int hLength){
    int i=0;
    int j=hLength-1;
    int a=0;
    int temp=0;
    while(i<j){
        temp=(j-i)*(h[i]<h[j]?h[i]:h[j]);
        if(a<temp){
            a=temp;
        }
        if(h[i]<h[j])i++;
        else if(h[i]>h[j])j--;
        else {
            i++;
            j--;
        }
    }
    return a;
}