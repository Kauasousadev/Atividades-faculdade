public class atv28 {
    public static void main(String[] args) {
        int num = 12;
        int divisores = 0;
        for(int i = 1; i <= num; i++){
            if (num % i == 0) {
                divisores++;
            }
        }
        System.out.println(divisores);
    }
}
