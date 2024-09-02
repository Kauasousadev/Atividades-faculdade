public class atv23 {
    //fibonacci
    public static void main(String[] args) {
        int num = 10;
        int A = 1;
        int B = 1;
        int C = 1;
        for(int i = 1; i <= 10; i++){
            A = B;
            B = C;
            C = A + B;
            System.out.println(C);
        }
    }
}