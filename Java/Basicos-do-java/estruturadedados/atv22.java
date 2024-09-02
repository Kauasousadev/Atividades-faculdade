public class atv22 {
    //imprimindo numeros primos
    public static void main(String[] args) {
        int num = 50;
        for(int i = 1; i <= 50; i++){
            if (i != 2 & i != 3 & i != 5 & i !=7) {
                if (i % 2 != 0 && i % 3 != 0 && i % 5 !=0 && i % 7 != 0) {
                    System.out.println("O número " + i + " é primo.");
                }
            }
        }
    }
}
