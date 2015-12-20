/*
David Turati
Exercicos da disciplina projeto e análise de algoritmos 
cálculo da temperatura lunar
*/

#include "includes.h"
#include "arquivo.h"

int main(){
	//cria dois objetos da classe LerAquivo e Entrada
	LerArquivo *novoArquivo = new LerArquivo();
	int opt = 0;
	std::cout<<"Digite 2 para entradada de dados do teclado ou 1 para ler do arquivo "<<std::endl;
	std::cin>>opt;

	switch(opt){
		case 1:
			//chama metodos da classe e sem seguida deleta objetos
			novoArquivo->lerArquivo();
			delete novoArquivo;
		break;

		case 2:
			//chama metodos da classe e sem seguida deleta objetos
			Entrada *entrada = new Entrada();
			entrada->digiteOsDadosDeEntrada();
			std::cout<< entrada->getNumN() <<std::endl;
			std::cout<< entrada->getNumM() <<std::endl;

			entrada->temperaturas();
			entrada->calcula();
			//destroi objeto
			delete entrada;
		break;

	}

	
	return 0;
}