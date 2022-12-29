#include "include/SiTefFunction.hpp"


int SiTefFunction::ConfiguraIntSiTefInterativo(	char* IPSiTef,
										char* IdLoja,
										char* IdTerminal,
										char* Reservado) 
{

	typedef int(__stdcall* f_funci)(char* IPSiTef,
									char* IdLoja,
									char* IdTerminal,
									char* Reservado);

	f_funci ConfiguraIntSiTefInterativo = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "ConfiguraIntSiTefInterativo");

	return ConfiguraIntSiTefInterativo(IPSiTef,
										IdLoja,
										IdTerminal,
										Reservado);

};

int SiTefFunction::ConfiguraIntSiTefInterativoEx(	char* IPSiTef,
										char* IdLoja,
										char* IdTerminal,
										char* Reservado,
										char* ParametrosAdicionais/*,
										char* LojaECF,
										char* CaixaECF,
										char* NumeroSerieECF*/) 
{


	typedef int(__stdcall* f_funci)(char* IPSiTef,
									char* IdLoja,
									char* IdTerminal,
									char* Reservado,
									char* ParametrosAdicionais);

	f_funci ConfiguraIntSiTefInterativoEx = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "ConfiguraIntSiTefInterativoEx");

	return ConfiguraIntSiTefInterativoEx(IPSiTef,
										IdLoja,
										IdTerminal,
										Reservado,
										ParametrosAdicionais);





};


int SiTefFunction::IniciaFuncaoSiTefInterativo(int Funcao,
	char* Valor,
	char* CupomFiscal,
	char* DataFiscal,
	char* HoraFiscal,
	char* Operador)
{

	int num = this->IniciaFuncaoSiTef(Funcao,
		Valor,
		CupomFiscal,
		DataFiscal,
		HoraFiscal,
		Operador,
		NULL);

	return num;

};

int SiTefFunction::ContinuaFuncaoSiTefInterativo(int* Comando,
	long* TipoCampo,
	short* TamMinimo,
	short* TamMaximo,
	char* Buffer,
	int TamBuffer,
	int Continua) {

	try {
		this->ContinuaFuncaoSiTef;
	}
	catch (...) {
		std::cout << "Comando" << *Comando << std::endl
			<< "buffer" << *Buffer << std::endl
			<< "tipocampo" << *TipoCampo << std::endl
			<< "tammin" << *TamMinimo << std::endl
			<< "tammax" << *TamMaximo << std::endl;

	}
	int num = this->ContinuaFuncaoSiTef(Comando,
										TipoCampo,
										TamMinimo,
										TamMaximo,
										Buffer,
										TamBuffer,
										Continua);

	return num;


};





