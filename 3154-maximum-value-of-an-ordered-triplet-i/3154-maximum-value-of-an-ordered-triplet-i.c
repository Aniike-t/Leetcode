long long maximumTripletValue(int* nums, int numsSize) {
    long long a = LLONG_MIN;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            for (int k = j + 1; k < numsSize; k++) {
                long long product = (long long)(nums[i] - nums[j]) * nums[k];
                if (product > a) {
                    a = product;
                }
            }
        }
    }
    if (a < 0) {
        return 0;
    }
    return a;
}