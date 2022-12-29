#include "SiTefFunction.hpp"
#include "SiTefPinPad.hpp"




class SiTefService {


private:
	SiTef ST = SiTef();
	SiTefFunction STF = SiTefFunction(ST.getDLL());
	SiTefPinPad   pinpad = SiTefPinPad(ST.getDLL());
	int rtn = -1;
public:

	SiTefService(std::string IPSiTef,
						char* IdLoja,
						char* IdTerminal,
						char* Reservado) 
	{
		this->rtn = this->STF.ConfiguraIntSiTefInterativo(&IPSiTef[0],
													IdLoja,
													IdTerminal,
													Reservado);

	}

	void commandType(int* command, char* buffer);
	void fieldType(long* field);
	void error(int& rtn);

	void debito(char* valor,
				char* cupom,
				char* DataFiscal,
				char* HoraFiscal,
				char* Operador);

	void credito(char* valor,
				 char* cupom,
				 char* DataFiscal,
				 char* HoraFiscal,
				 char* Operador);

	void menu_pagamento(char* valor,
	 		  char* cupom,
	  		  char* DataFiscal,
			  char* HoraFiscal,
			  char* Operador);


	void menu_gerencial(char* Operador);






};