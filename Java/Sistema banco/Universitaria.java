public class Universitaria extends Salario{
    //Conta universitaria só pode receber deposito de no máximo 500//
    protected float podedepositar = 500;

    @Override
    public boolean depositar (float valordeposito){
        if (valordeposito > podedepositar) {
            System.out.println("Valor inválido, limite de depósito em: "+podedepositar);
            return false;
        } else {
            super.depositar(valordeposito);
            podedepositar = podedepositar - valordeposito;
            System.out.println("Deposito efetuado com sucesso!");
            return true;
        }
    }
}
