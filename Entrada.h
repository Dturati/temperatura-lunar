/*
	David Turati	
	davidturati@gmail.com
*/
#include "includes.h"

class Entrada{
private:
	int numN;
	int numM;
	std::vector<int> vetorTemp;
	std::vector<int> resultado;

public:
	int contador;
	std::string ent;
	//construtor
	Entrada();

	//destrutor
	~Entrada();


	// metodos set
	void setNumN(int numN);
	void setNumM(int NumM);
	void setVetorTemp(int temp);

	//metos get
	int getNumN();
	int getNumM();
	std::vector<int> getVetorTemp();
	//metodos diversor
	void digiteOsDadosDeEntrada();
	void temperaturas();
	void calcula();
	void destroiVetor();
	void limpaVetorResultado();

};
