package aulaswitchcase;
import java.util.Scanner;

public class SwitchCase {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite um nome: ");
        String nome = ler.nextLine();
        switch (nome) {
            case "Ronaldo":
                System.out.println("Meu parça");
                break;
            case "Kauã":
                System.out.println("Lindo, gostoso, maravilhoso, perfeito");
                break;
        }
    }
}
