#include "include/SiTefPinPad.hpp"


int SiTefPinPad::VerificarPresencaPinPad() {

	typedef int(__stdcall* f_funci)();

	f_funci VerificaPresencaPinPad = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "KeepAlivePinPad");

	return VerificaPresencaPinPad();


}


int SiTefPinPad::EscreveMensagemPermanentePinPad(char* Mensagem) {

	typedef int(__stdcall* f_funci)(char* Mensagem);

	f_funci EscreveMensagemPermanentePinPad = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "EscreveMensagemPermanentePinPad");
	return EscreveMensagemPermanentePinPad(Mensagem);

};


int SiTefPinPad::EscreveMensagemPinPad(char* Mensagem) {

	typedef int(__stdcall* f_funci)(char* Mensagem);

	f_funci EscreveMensagemPinPad = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "EscreveMensagemPinPad");

	return EscreveMensagemPinPad(Mensagem);

};

int SiTefPinPad::LerSimNaoPinPad(char* Mensagem) {

	typedef int(__stdcall* f_funci)(char* Mensagem);

	f_funci LeSimNaoPinPad = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "LeSimNaoPinPad");

	return LeSimNaoPinPad(Mensagem);

};

int SiTefPinPad::LerTeclaEspecialPinPad() {

	typedef int(__stdcall* f_funci)();

	f_funci LeTeclaPinPad = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "LeTeclaPinPad");

	return LeTeclaPinPad();


}


int SiTefPinPad::LerTrilha3(char* Mensagem)

{
	
	typedef int(__stdcall* f_funci)(char* Mensagem);

	f_funci LeSimNaoPinPad = (f_funci)GetProcAddress(*this->hGetProcIDDLL, "LeSimNaoPinPad");

	return LeSimNaoPinPad(Mensagem);

};