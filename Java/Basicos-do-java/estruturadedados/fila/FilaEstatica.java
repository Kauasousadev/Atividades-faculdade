import java.util.Arrays;
import java.util.Integer;

public class FilaEstatica {
    private 
        Integer[] fila;
        final int comeco = 0;
        final int capacidade;

    public FilaEstatica(int capacidade){
        this.capacidade = capacidade;
        this.fila = new Integer[capacidade];
    }

    public boolean isEmpty(){
        return fila[comeco] == null;
    }

    public boolean isFull(){
        if (fila[fila.length - 1] != null) {
            return true;
        }else{
            return false;
        }
    }
    
    public void enqueue(int entrada){
        for(int i = 0; i < fila.length; i++){
            if (fila[i] == null) {
                fila[i] = entrada;
                break;
            }
        }
    }

    public int dequeue(){
        int saida = fila[comeco];
        for(int i = 1; i < fila.length; i++){
            fila[i - 1] = fila[i];
        }
        fila[fila.length - 1] = null;
        return saida;
    }

    public void display(){
        System.out.println("Fila: " + Arrays.toString(fila));
    }
    public static void main(String[] args){
        FilaEstatica minhaFila = new FilaEstatica(4);
        minhaFila.enqueue(5);
        minhaFila.enqueue(1);
        minhaFila.enqueue(3);
        minhaFila.enqueue(6);
        minhaFila.enqueue(7);
        minhaFila.display();
        System.out.println(minhaFila.dequeue());
        minhaFila.display();
        System.out.println(minhaFila.isEmpty());
        System.out.println(minhaFila.isFull());
    }
}