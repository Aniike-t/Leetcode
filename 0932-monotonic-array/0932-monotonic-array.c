bool isMonotonic(int* nums, int size){
    if (size == 1) {
        return true;
    }
    int a = nums[0];
    int k = 0;
    for (int i = 1; i < size; i++) {
        if (a == nums[i]) {
            continue;
        } else if (k == 0 && a > nums[i]) {
            k = 1;
            a = nums[i];
        } else if (k == 0 && a < nums[i]) {
            k = -1;
            a = nums[i];
        } else if (k == 1 && a >= nums[i]) {
            a = nums[i];
        } else if (k == -1 && a <= nums[i]) {
            a = nums[i];
        } else {
            return false;
        }
    }
    return true;
}