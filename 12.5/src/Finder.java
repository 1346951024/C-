public class Finder {
    public static int quickFind(int[] a, int n, int k){
        return findKth(a, 0, n - 1, k);
    }
public static int findKth(int[] a,int low,int high,int k){
    int part = partation(a,low,high);

    if(k == part - low + 1) //若基准值part前面数的个数等于K
        return a[part];//则第K大就是a【part】
    else if(k > part - low + 1)//若基准值part前面数的个数小于K
        return findKth(a,part+1,high,k-part+low-1);
    //对part后面的数进行快排，此时K为此区间的K-part+low-1
    else return findKth(a,low,part-1,k);
    //若基准值part前面数的个数大于K，对part前面的数进行快排，此时K为此区间的K-part+low-1
}

public static int partation(int[] a,int low,int high){
    int key = a[low];//初始基准值设为low,即第一个元素
    while(low<high){
        while(low<high && a[high] <= key)
            high--;//从a[high]即最后一个元素开始，找到大于key的数，没有就继续往前找
        a[low] = a[high];//当a[high]大于key时,，交换a[low]和a[high]，即将大的数放在前面，从大到小排序
        while(low<high && a[low]>=key)
            low++;//从a[low]开始，大于key的数，就继续往前找，直至找到小于key的数放在后面
        a[high] = a[low];
    }
    a[low] = key;//此时a[low]=a[high],即从前向后找和从后向前找相遇，也是最新的基准值所在位置
    return low;
}

    public static void main(String[] args){
        int ret = quickFind(new int[]{1,1,5,8,2},5,3);
        System.out.println(ret);
    }

}
