public class ListaOrdenadaDinamica {
    private Nodo inicio;

    public ListaOrdenadaDinamica() {
        this.inicio = null;
    }
    // Método para inserir um novo elemento de forma ordenada
    public void inserir(int valor) {
        Nodo novoNodo = new Nodo(valor);

        // Se a lista estiver vazia ou o valor do novo nodo for menor que o primeiro, insere no início
        if (inicio == null || valor < inicio.valor) {
            novoNodo.proximo = inicio;
            inicio = novoNodo;
        } else {
            // Caso contrário, percorre a lista para encontrar a posição correta
            Nodo atual = inicio;
            while (atual.proximo != null && atual.proximo.valor < valor) {
                atual = atual.proximo;
            }
            novoNodo.proximo = atual.proximo;
            atual.proximo = novoNodo;
        }
    }

    public int remove(int remocao){
        Nodo atual = inicio;

        if (inicio == null) {
            System.out.println("Lista vazia");
        }
        while (atual.proximo.valor <= remocao) {
            if(atual.proximo.valor == remocao){
                atual.proximo = atual.proximo.proximo;
                break;
            }
            atual = atual.proximo;
        }
        return atual.valor;
    }

    public void display(){
        Nodo atual = inicio;
        System.out.println("Exibindo lista ordenada: ");
        while (atual.proximo != null) {
            System.out.println(atual.getValor());
            atual = atual.proximo;
        }
        System.out.println(atual.getValor());
    }

    public static void main(String[] args) {
        ListaOrdenadaDinamica lista = new ListaOrdenadaDinamica();

        lista.inserir(7);
        lista.inserir(5);
        lista.inserir(10);
        lista.inserir(3);
        lista.inserir(9);
        lista.display();
        lista.remove(5);
        lista.display();
        lista.remove(9);
        lista.display();
    }
}