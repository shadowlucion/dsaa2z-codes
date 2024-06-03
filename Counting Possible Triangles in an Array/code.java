import java.util.Arrays;

public class TriangleCount {
    public static int findNumberOfTriangles(int[] arr, int n) {
        Arrays.sort(arr);
        
        int count = 0;
        
        for (int k = n - 1; k >= 2; k--) {
            int i = 0, j = k - 1;
            
            while (i < j) {
                if (arr[i] + arr[j] > arr[k]) {
                    count += (j - i);
                    j--;
                } else {
                    i++;
                }
            }
        }
        
        return count;
    }
    
    public static void main(String[] args) {
        int[] arr1 = {10, 21, 22, 100};
        int n1 = arr1.length;
        System.out.println(findNumberOfTriangles(arr1, n1));  // Output: 1
        
        int[] arr2 = {4, 6, 3, 7, 8, 10};
        int n2 = arr2.length;
        System.out.println(findNumberOfTriangles(arr2, n2));  // Output: 20
    }
}
