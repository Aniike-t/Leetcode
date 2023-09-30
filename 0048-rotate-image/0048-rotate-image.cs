public class Solution{
    public void Rotate(int[][] matrix){
        for (int i = 0; i < matrix.Length; i++){
            for (int j = i; j < matrix[0].Length; j++)
                (matrix[j][i], matrix[i][j]) = (matrix[i][j], matrix[j][i]);
            Array.Reverse(matrix[i]);
        }
    }
}