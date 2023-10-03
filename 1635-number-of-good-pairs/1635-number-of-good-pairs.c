int numIdenticalPairs(int* nums, int numsSize){
        int count=0,i,j;
        for(i=0;i<numsSize;i++){
                for(j=0;j<numsSize;j++){
                        if(nums[i]==nums[j]&&i<j){
                                count++;
                        }
                }
        }
        free(nums);
        return count;
}