#include <stdio.h>   // Para usarmos os comandos de entrada e sa�da de dados
#include <stdlib.h>  // Para usarmos o comando de limoar tela system("cls");
#include <conio.h>   // Para usarmos o comando getch()
#include <iostream> // Para usarmos fun��es de manipula��o de strings
#include <locale.h>

class Conta {
	private:
		float Valor;
	protected:
		string Nome;
		string Conta;
	public: 
		int ExibirMenu();
		void ConsultarSaldo(); 
		bool Depositar(float Quanto);
		bool Sacar(float Quanto); 
		void AbrirConta(string Cliente, string numConta, float Quanto);
};

int Conta::ExibirMenu(){
	
}


