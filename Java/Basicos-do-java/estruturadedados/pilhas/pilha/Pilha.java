public class Pilha {
    //O ultimo elemento a entrar, é o primeiro a sair - LIFO
    Nodo topo;

    public Pilha(){
        this.topo = null;
    }

    public void push(int entrada){
        Nodo novoNodo = new Nodo(entrada);
        
        if (topo == null) {
            topo = novoNodo;
        }else{
            novoNodo.proximo = topo;
            topo = novoNodo;
        }
    }

    public int pop(){
        int pop = topo.valor;
        topo = topo.proximo;
        return pop;
    }

    public void display(){
        Nodo iterador = topo;
        System.out.println("Exibindo a pilha: ");
        while (iterador.proximo != null) {
            System.out.println(iterador.getValor());
            iterador = iterador.proximo;
        }
        System.out.println(iterador.getValor());
    }
    public static void main(String[] args) {
        Pilha pilha = new Pilha();

        pilha.push(5);
        pilha.push(2);
        pilha.push(1);
        pilha.push(7);
        pilha.display();
        pilha.pop();
        pilha.display();
    }
}
