import java.util.Arrays;
public class atv11 {
    public static void main(String[] args) {
        int[][] matriz = {
            {1,3,4,5,7},
            {4,5,1,6,8},
            {3,1,4,3,5}
        };
        int[] array = new int[3];

        for(int i = 0; i < array.length; i++){
            for(int linha = 0; linha < matriz.length; linha++){
                for(int coluna = 0; coluna < matriz[linha].length; coluna++){
                    int elematriz = matriz[linha][coluna];
                    array[i] = array[i] + elematriz;
                }
            }
        }
        System.out.println(Arrays.toString(array));
    }
}
