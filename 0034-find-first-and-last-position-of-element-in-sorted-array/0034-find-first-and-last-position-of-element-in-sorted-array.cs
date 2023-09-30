public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        int[] a=new int[2];
        a[0]=a[1]=-1;
        if(nums.Length==0){
            return new int[] {-1,-1};
        }
        for(int i=0;i<nums.Length;i++){
            if(nums[i]==target){
                if(a[0]==-1){
                    a[0]=i;
                }
                a[1]=i;
            }
        }
        return a;
    }
}