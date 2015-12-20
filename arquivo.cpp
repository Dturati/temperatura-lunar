#include "arquivo.h"

//construtor
LerArquivo::LerArquivo(){
		//std::cout<<"Lendo arquivo"<<std::endl;
}


//destrutor
LerArquivo::~LerArquivo(){
	std::cout<<"fim da leitura"<<std::endl;
}

void LerArquivo::lerArquivo(){
	std::vector <int> temperatura;

	regex_t reg;
	regmatch_t match;

	int cont = 0;
    char car[20];
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    FILE *arquivo;
    arquivo = fopen ("lua.in" , "r");
	//verifica se arquivo foi aberto
	if(!arquivo){
		std::cout<<"Erro em abrir o arquivo"<<std::endl;
	}else{
		std::cout<<"Arquivo aberto com sucesso"<<std::endl;
	}

	//uso de expressão regular
	if(regcomp(&reg, exp, REG_EXTENDED|REG_NOSUB) != 0){
		std::cout<<"Epressao invalida"<<std::endl;
	}

	//percorre arquivo de txt lendo linha por linha
	while ( (std::fgets(car,sizeof(car), arquivo) != NULL)){
		//usa expressão regular para ver se existe um caracter de espaço entre os numeros
		//se existir então tratace de um intervalo 
		if ((regexec(&reg, car, 0, (regmatch_t *)NULL, 0)) == 0){
			//ent = car;
			if( (num1 != 0) && (num2 !=0) ){
				//chama o metodo da classe heradade de Entrada.cpp para fazer os calculos
				this->calcula();
				this->limpaVetorResultado();
				this->destroiVetor();
			}
				sscanf(car,"%d %d",&num1,&num2);
				if((num1 != 0) && (num2 !=0)){
					this->setNumN(num1);
					this->setNumM(num2);
				}
		}else{
			//se a expressão regular não encontrar um espaço então trata-ce de uma temperatura
			sscanf(car,"%d",&num3);
			setVetorTemp(num3);
		}
		cont++;
	}

}


