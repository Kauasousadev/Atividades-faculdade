import java.util.Arrays;

public class atv4 {
    //Invertendo um array
    public static void main(String[] args){
        int[] array = {1,2,3,4,5,6,7,8,9,10};
        int[] arrayInvertido = new int[10];
        int j = array.length - 1;
        for(int i = 0; i < array.length; i++){
            arrayInvertido[i] = array[j];
            j--;
        }
        System.out.println(Arrays.toString(arrayInvertido));
    }
}
