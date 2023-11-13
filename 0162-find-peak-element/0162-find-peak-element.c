int findPeakElement(int* nums, int s) {
    if(s==1){
        return 0;
    }
    for(int i= 0;i<s;i++){
        if(i==0 || i==s-1){
            if(i==0 && (nums[i+1] < nums[i])){
                return i;
            }
            if(i==s-1 && (nums[i-1] < nums[i])){
                return i;
            }
        }
        else{
            if((nums[i-1] < nums[i]) && (nums[i+1]< nums[i])){
                return i;
            }
        }
    }
    return -1;
}