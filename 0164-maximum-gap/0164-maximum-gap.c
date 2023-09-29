int compare(const void* num1, const void* num2){  
    int a = *(int*) num1;  
    int b = *(int*) num2;  
    if(a > b){  
        return 1;  
    }  
    else if(a < b){  
        return -1;  
    }  
    return 0;  
} 


int maximumGap(int* nums, int numsSize){
    int max=0;
    int temp=-1;
    if(numsSize==1){
        return 0;
    }
    if(numsSize==2){
        return abs(nums[0]-nums[1]);
    }
    else{
        qsort(nums, numsSize, sizeof(int), compare); 
        for(int i=0;i<numsSize-1;i++){
            temp=nums[i+1]-nums[i];
            if(temp==max || temp>max){
                max=temp;
            }
        }
    }
    return max;
}