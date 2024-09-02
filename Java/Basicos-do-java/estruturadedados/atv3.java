public class atv3 {
    //Encontrar valores repetidos em um array
    public static void main(String[] args){
        int [] array = {1,4,6,4,3,6,3};
        for(int i = 0; i < array.length; i++){
            for(int j = i + 1; j < array.length; j++){
                if (array[j] == array[i]) {
                    System.out.println("O número " + array[i] + " se repete");
                }
            }
        }
    }
}
