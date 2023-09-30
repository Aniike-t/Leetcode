public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        int minlen= strs[0].Length;
        for(int i=1;i<strs.Length;i++){
            if(strs[i].Length<minlen){
                minlen=strs[i].Length;
            }
        }
        string s = "";
        for (int i = 0; i < minlen; i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.Length; j++) {
                if (c != strs[j][i]) {
                    return s;
                }
            }
            s += c;
        }
        return s;
    }
}