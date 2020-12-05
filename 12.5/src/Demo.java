import java.util.Scanner;
public class Demo {
    public static int findKth(int[] a,int n,int k) {
        return find(a, 0, n - 1, k);
    }

    //递归寻找数组中第K大的元素
    public static int find(int[] a,int low,int high,int k){
        int pivot = partiton(a,low,high);

        if(pivot+1 <k )//中轴位置少于K个，在右子数组中继续查找
            return find(a,pivot+1,high,k);

        else if(pivot+1 > k)//中轴位置大于K个，在左子数组中继续查找
            return find(a,0,pivot+1,k);

        else//中轴元素正好是第K大的元素
        return a[pivot];
    }

    //将数组划分为两部分：左边较大，右边较小
    public static int partiton(int[] a,int low,int high){
        //将数组首元素作为每一轮比较的基准
        int key = a[low];

        while(low < high){
            //从右往左扫描，直到遇见比基准值大的元素
            while(low < high && a[high]<=key)
                high--;
            a[low] = a[high];

            //从左往右扫描，直到遇见比基准值小的元素
            while(low < high && a[low]>=key)
                low++;
            a[high] = a[low];
        }
        //将基准值放到中间位置
        a[low] = key;
        //返回数组中的中轴位置
        return low;
    }
    public static void main(String[] args) {
        System.out.println(findKth(new int[]{6,1,5,8,2},5,3));
    }
}
