/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    *returnSize = rowIndex + 1;
    int* result = (int*)malloc((rowIndex + 1) * sizeof(int));
    for (int i = 0; i <= rowIndex; i++) {
        result[i] = 1;
    }
    for (int i = 2; i <= rowIndex; i++) {
        for (int j = i - 1; j > 0; j--) {
            result[j] += result[j - 1];
        }
    }
    return result;
}