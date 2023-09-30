int search(int* nums, int numsSize, int target){
    int i =0;
    int j =numsSize-1;
    while(i<=j){
        if(nums[i]!=target && nums[j]!=target){
            i++;
            j--;
        }
        else if(nums[i]==target){
            return i;
        }
        else if(nums[j]==target){
            return j;
        }
    }
    return -1;
}