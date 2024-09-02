public class atv1 {
    //Soma de um array de inteiros
    public static void main(String[] args) {
        int [] array = {1,4,35,7,2,6,7,74,3,6,3};
        int soma = 0;
        for(int i = 0; i < array.length; i++){
            soma = soma + array[i];
        }
        System.out.println("A soma dos elementos do array resulta em " + soma);
    }
}
