public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
        nums1 = nums1.Concat(nums2).ToArray();
        Array.Sort(nums1);

        if(nums1.Length%2==0){
            return (double)(nums1[nums1.Length/2]+nums1[(nums1.Length/2)-1])/2;
        }
        else{
            return (double)(nums1[nums1.Length/2]);
        }
    }
}