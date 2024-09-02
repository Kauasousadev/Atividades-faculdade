public class atv7 {
    //contagem de elementos
    public static void main(String[] args) {
        int[] array = {5,6,52,34,84,7,4,7,3,2};
        for(int i = 0; i < array.length; i++){
            int contagem = 0;
            for(int j = i; j < array.length; j++){
                if (array[j] == array[i]) {
                    contagem++;
                }
            }
            System.out.println("O número " + array[i] + " se repete " + contagem + " vezes.");
        }
    }
}
