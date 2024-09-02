import java.util.Arrays;

public class atv5 {
    //Empurrar os elementos do array um índice para a direita
    public static void main(String[] args) {
        int[] array = {1,2,3,4,5,6,7,8,9,10};
        int[] arrayEmpurrado = new int[10];
        for(int i = 0; i < array.length;i++){
            if (i == array.length -1) {
                arrayEmpurrado[0] = array[i];
                break;
            }else{
                arrayEmpurrado[i + 1] = array[i]; 
            }
        }
        System.out.println(Arrays.toString(arrayEmpurrado));
    }
}