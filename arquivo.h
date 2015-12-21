/*
	David Turati
	davidturati@gmail.com
*/
//#include "Entrada.h"
#include "includes.h"
#include "Entrada.h"

//declaração de classe e herança da classe entrada a fim de reaproveitar seus métodos
class LerArquivo : public Entrada{
private:

public:
	//construtor
	LerArquivo();

	//destrutor
	~LerArquivo();

	//metodos diversos
	void lerArquivo();
	void espaco();

};
