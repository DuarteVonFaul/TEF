#include "SiTef.hpp"





class SiTefFunction{

	protected:
		HINSTANCE* hGetProcIDDLL;

		typedef int(__stdcall* ContinuaSiTef)(int* Comando,
			long* TipoCampo,
			short* TamMinimo,
			short* TamMaximo,
			char* Buffer,
			int TamBuffer,
			int Continua);

		typedef int(__stdcall* IniciaSiTef)(int Funcao,
			char* Valor,
			char* CupomFiscal,
			char* DataFiscal,
			char* HoraFiscal,
			char* Operador,
			char* param);

		IniciaSiTef IniciaFuncaoSiTef;
		ContinuaSiTef ContinuaFuncaoSiTef;
	public:

		SiTefFunction(HINSTANCE* hDll) {
			this->hGetProcIDDLL = hDll;
			this->ContinuaFuncaoSiTef = (ContinuaSiTef)GetProcAddress(*this->hGetProcIDDLL, "ContinuaFuncaoSiTefInterativo");
			this->IniciaFuncaoSiTef = (IniciaSiTef)GetProcAddress(*this->hGetProcIDDLL, "IniciaFuncaoSiTefInterativo");
		};

		int ConfiguraIntSiTefInterativo(char* IPSiTef,
			char* IdLoja,
			char* IdTerminal,
			char* Reservado);

		int ConfiguraIntSiTefInterativoEx(char* IPSiTef,
			char* IdLoja,
			char* IdTerminal,
			char* Reservado,
			char* ParametrosAdicionais);

		int IniciaFuncaoSiTefInterativo(int Funcao,
			char* Valor,
			char* CupomFiscal,
			char* DataFiscal,
			char* HoraFiscal,
			char* Operador);

		int ContinuaFuncaoSiTefInterativo(int* Comando,
			long* TipoCampo,
			short* TamMinimo,
			short* TamMaximo,
			char* Buffer,
			int TamBuffer,
			int Continua);
};
