import java.util.*;
public class Demo1 {
    public static int findKth(int[] a, int n, int k){
        int size = a.length;
        for(int i=0;i<k;i++){
            for(int j=size-1;j>i;j--) {
                if (a[j-1] < a[j]) {
                    int t = a[j-1];
                    a[j-1] = a[j];
                    a[j] = t;
                }
            }
            }
        return a[k-1];
    }

    public static void main(String[] args) {
        System.out.println(findKth(new int[]{9,6, 1, 5, 8, 2}, 6, 3));
    }
}
