int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,k,j=1;
    *returnSize=2;
    int* a = malloc((*returnSize)*sizeof(int));
    for(i=0;i<numsSize;i++){
    for(k=1;k<numsSize;k++)
        if(nums[i]+nums[k]==target && i!=k){
            a[1] = i;
            a[0] = k;
            j=0;
            break;
        }
        if(j==0)break;
    }                     
    return a; 
}