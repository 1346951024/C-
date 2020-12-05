import java.util.*;
public class HuiWen {
    //判断回文：第一个和最后一个字符一样则是回文
    public static boolean isHuiWen(String s){
        int i = 0;
         int j = s.length()-1;
         while(i<j){
             if(s.charAt(i)!=s.charAt(j)){
                 return false;
             }
             i++;
             j--;
         }
         return true;
    }

    public static void main(String[] args){
    //将第二个字符串插入第一个字符串中
        int count = 0;
        Scanner sc = new Scanner(System.in);//输入字符串
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();

        for(int i= 0;i<=str1.length();i++){
            StringBuilder sb = new StringBuilder(str1);
            //将str1存到sb中
            sb.insert(i,str2);//从i号位置开始，将str2 插入到sb中
            if(isHuiWen(sb.toString())){//判断插入后是否为回文
                count++;
                System.out.println(sb);
            }
        }
        System.out.println(count);
    }
}
