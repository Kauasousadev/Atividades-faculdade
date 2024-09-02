public class atv2 {
    //Média dos valores
    public static void main(String[] args) {
        int [] array = {1,4,35,7,2,6,7,74,3,6,3};
        int soma = 0;
        float media = 0;
        for(int i = 0; i < array.length; i++){
            soma = soma + array[i];
            media = soma/array.length;
        }
        System.out.println("A média dos valores do array resulta em " + media);
    }
}
