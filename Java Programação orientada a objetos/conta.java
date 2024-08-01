import java.util.Scanner;

public class conta {
    private
        float saldo;
    public
        String codigoconta;
        String nome;
    
        float getSaldo (){
            return saldo;
        }

        void criarConta (){
            Scanner ler = new Scanner(System.in);

            System.out.println("| Abrindo sua conta |");
            System.out.println("| Nome do portador: |");
            nome = ler.nextLine();
            System.out.println("| Código da conta: |");
            codigoconta = ler.nextLine();
            System.out.println("| Saldo inicial: |");
            saldo = ler.nextFloat();
            System.out.println("Conta criada com sucesso!");
        }

        boolean depositar (float valordeposito){

            if (valordeposito <= 0) {
                System.out.println("Valor inválido, precisa ser maior que 0!");
                return false;
            } else {
                saldo = saldo + valordeposito;
               System.out.println("Valor depositado com sucesso!");
               return true;
            }
        }

        boolean sacar (float valorsaque){

            if (valorsaque < 0) {
                System.out.println("Valor inválido!");
                return false;
            } else if (valorsaque > saldo) {
                System.out.println("Saldo insuficiente!");
                return false;
            } else {
                saldo = saldo - valorsaque;
                System.out.println("Saque realizado com sucesso!");
                return true;
            }
        }

        int impriMenu (){
            
            Scanner ler = new Scanner(System.in);
            
            System.out.println("| SELECIONE UMA OPÇÃO |");
            System.out.println("  1-Consultar Saldo");
            System.out.println("  2-Depositar");
            System.out.println("  3-Sacar");
            System.out.println("  4-Sair");
            System.out.print(" Digite uma das opcoes acima: ");
            
            return ler.nextInt();
        }
    public static void main(String[] args) {

        conta minhaconta = null;
        int opcao;
        Scanner ler = new Scanner(System.in);

        System.out.println("| Seja bem vindo ao KauBank! |");
        System.out.println("| 1 - Conta Corrente         |");
        System.out.println("| 2 - Conta Poupança         |");
        System.out.println("| 3 - Conta Salário          |");
        System.out.println("| 4 - Conta Universitária    |");
        System.out.print("Escolha sua opção de conta: ");

        int tipoconta = ler.nextInt();

        if (tipoconta == 1) {
            minhaconta = new conta();
            minhaconta.criarConta();
        }
        if (tipoconta == 2) {
            minhaconta = new Poupança();
            minhaconta.criarConta();
        }
        if (tipoconta == 3) {
            minhaconta = new Salario();
            minhaconta.criarConta();
        }

        do {
            opcao = minhaconta.impriMenu();
            switch (opcao) {
                case 1:
                    float valorsaldo = minhaconta.getSaldo();
                    System.out.println("O saldo da conta é:" + valorsaldo);
                    break;
                case 2:
                    System.out.println("Indique o valor a ser depositado:");
                    float valordeposito = ler.nextFloat();
                    minhaconta.depositar(valordeposito);
                    break;
                case 3:
                    System.out.println("Indique o valor a ser sacado:");
                    float valorsaque = ler.nextFloat();
                    minhaconta.sacar(valorsaque);
                    break;           
                default:
                    break;
            }
        } while (opcao < 4);
        
    }
}