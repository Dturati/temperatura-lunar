#include "Entrada.h"

//construtor
Entrada::Entrada(){
	std::cout<<"Bem vindo a lua viajante"<<std::endl;
	//std::cout<< "Teperaturas medidas: "<<std::endl;
	contador = 0;
}

Entrada::~Entrada(){
	std::cout<<"Boa viajem de volta, mande noticias"<<std::endl;
}

// metodos set
void Entrada::setNumN(int numN){
	this->numN = numN;
}

void Entrada::setNumM(int numM){
	this->numM = numM;
}

void Entrada::setVetorTemp(int temp){
	this->vetorTemp.push_back(temp);
}

//metodos get
int Entrada::getNumN(){
	return this->numN;
}

int Entrada::getNumM(){
	return this->numM;
}

//metodos diversos
void Entrada::digiteOsDadosDeEntrada(){
	int numN;
	int numM;
	std::cout<<"Digite um numero N entre 0 e 10000"<<std::endl;
	std::cin>>numN;
	while(numN < 0 || numN > 10000){
		std::cout<<"Digite um numero entre 0 e 10000"<<std::endl;
		std::cin>>numN;
	}

	std::cout<<"Digite um numero entre 1 e menor ou igual a N"<<std::endl;
	std::cin>>numM;
	while(numM < 1 || numM > numN){
		std::cout<<"Digite um numero entre 1 e menor ou igual a M"<<std::endl;
		std::cin>>numM;
	}

	this->numN = numN;
	this->numM = numM;
}

void Entrada::temperaturas(){
	int numN = this->numN;
	int temp;
	std::cout<<"Digite as teperaturas da sua planilha de dados"<<std::endl;
	while(numN > 0){
		std::cout<<"Temperatura:";
		std::cin>>temp;
		vetorTemp.push_back(temp);
		numN--;
	}

}

void Entrada::destroiVetor(){
	this->vetorTemp.clear();
}

void Entrada::limpaVetorResultado(){
	this->resultado.clear();
}

std::vector<int> Entrada::getVetorTemp(){
	return vetorTemp;
}

void Entrada::calcula(){
	int intervalo = this->numM;
	int avancaUm = 0;
	int cont = 0;
	int media = 0;
	int i;

	while(avancaUm < this->vetorTemp.size()){
		media = 0;
		for(cont = avancaUm  ; cont < intervalo; cont++){
			media += this->vetorTemp[cont];
		}

		media = media / this->numM;
		resultado.push_back(media);
		avancaUm++;
		intervalo++;
		if(cont == this->vetorTemp.size()){ 
			break;
		}
	}

	//ordena vetor do menor para o menor com a finalidade de pegar o menor(primeiro) e o maior(último) elemento
	std::sort(this->resultado.begin(), this->resultado.end());
	for(i = 0; i < this->resultado.size(); i++){
		std::cout<<"Teste"<<' '<<++contador<<std::endl;
		std::cout<<this->resultado[0]<<' '<<this->resultado[this->resultado.size()-1]<<std::endl;
		std::cout<<'\n';
		break;
	}
}




