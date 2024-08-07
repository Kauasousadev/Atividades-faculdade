public class Salario extends conta{
    //A conta salário só pode receber 1 depósito por mês//
    protected int qtddepositos = 1;

    @Override
    public boolean depositar (float valordeposito){
        if (qtddepositos < 1) {
            System.out.println("Limite de depósitos excedidos");
            return false;
        }else {
            super.depositar(valordeposito);
            System.out.println("Valor depositado com sucesso!");
            --qtddepositos;
            return true;
        }
    }
}
