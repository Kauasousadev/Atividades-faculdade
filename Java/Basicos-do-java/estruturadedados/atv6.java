public class atv6 {
    //Segundo maior numero sem ordenar o array
    public static void main(String[] args) {
        int[] array = {5,6,52,34,84,7,4,7,3,2};
        int maiorValor = 0;
        int segundoMaiorValor = 0;
        for(int i = 0; i < array.length; i++){
            for(int j = i + 1; j < array.length; j++){
                if (array[j] > array[i] & array[j] > maiorValor) {
                    maiorValor = array[j];
                }
            }
        }
        for(int i = 0; i < array.length; i++){
            for(int j = i + 1; j < array.length; j++){
                if (array[i] < array[j]) {
                    if (segundoMaiorValor < array[j]) {
                        if (array[j] < maiorValor) {
                            segundoMaiorValor = array[j];
                        }
                    }
                }
            }
        }
        System.out.println("O maior valor do array é " + maiorValor);
        System.out.println("O segundo maior valor do array é " + segundoMaiorValor);
    }
}
