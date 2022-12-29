#include "SiTef.hpp"


class SiTefPinPad{

	protected:
		HINSTANCE* hGetProcIDDLL;

	public:

		SiTefPinPad(HINSTANCE* hDll) {
			this->hGetProcIDDLL = hDll;
		};


		int VerificarPresencaPinPad();

		int LerSimNaoPinPad(char* Mensagem);

		int EscreveMensagemPermanentePinPad(char* Mensagem);

		int EscreveMensagemPinPad(char* Mensagem);

		int LeDigitoPinPad(char* MensagemDisplay, char* NumeroDigitado);

		int LerTeclaEspecialPinPad();

		int LerTrilha3(char* Mensagem);


};