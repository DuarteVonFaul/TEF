#include "include/SiTefService.hpp"
#include <string>


char* title = new char();
void SiTefService::commandType(int* command, char* buffer)
{
	switch (*command) {

		case 0:
			std::cout << buffer << std::endl;
			break;
		case 1:
			std::cout << buffer << std::endl;
			break;
		case 2:
			this->pinpad.EscreveMensagemPinPad(buffer);
			break;
		case 3:
			std::cout << buffer << std::endl;
			//this->pinpad.LerSimNaoPinPad(buffer);
			break;
		case 4:
			title = buffer;
			break;
		case 11:
			std::cout << "Remover Mensagem Operador" 
					  << std::endl;
			break;
		case 12:
			std::cout << "Remover Mensagem Cliente" 
					  << std::endl;
			break;
		case 13:
			std::cout << "Remover Mensagem na tela do Cliente e Operador" 
					  << std::endl;
			break;
		case 14:
			//free(title);
			//title = new char();
			break;
		case 15:
			title = buffer;
			break;
		case 16:
			//free(title);
			//title = new char();
			break;
		case 20:

			if (this->pinpad.LerSimNaoPinPad(buffer) == 1) {
				*buffer = '0';
			}
			else {
				*buffer = '1';
			}
			break;
		case 21:
			std::cout << title << std::endl;
			scanf_s("%s", buffer);
			break;
		case 22:
			std::cout << buffer << std::endl;
			break;
		case 23:
			break;
		case 29:
			std::cout << "Buffer: " << title << std::endl;
			scanf_s("%s", buffer);
			break;
		case 30:
			std::cout <<"Buffer: " << buffer << std::endl;
			scanf_s("%s", buffer);
			break;
		case 34:
			std::cout << "Buffer: " << buffer << std::endl;
			scanf_s("%s", buffer);
			break;
		case 42:
			std::cout << title << std::endl;
			scanf_s("%s", buffer);
			break;
		default:
			std::cout << "Codigo " << *command << " mensagem " << buffer << std::endl;
			exit(0);
			break;

	}

};


void SiTefService::fieldType(long* field)
{
	std::cout << "TipoCampo: " << *field << std::endl;
	if (*field == -1) {

	}
	else if (*field == 0) {

	}
	else if (*field == 1) {

	}
	else if (*field == 2) {

	}
	else if (*field <= 99 || *field >= 10) {

	}
	else if (*field == 100) {

	}
	else if (*field == 101) {

	}
	else if (*field == 2470) {
		std::cout << "Ponto Flutuante" << std::endl;
	}
	else if (*field <= 3000 || *field >= 3999) {

	}

};

void SiTefService::error(int& rtn) {


	switch (rtn) {

		case 0:
			std::cout << "Sucesso na execu��o da fun��o." << std::endl;
			break;
		case -1:
			std::cout << "M�dulo n�o inicializado. O PDV tentou chamar alguma rotina sem antes executar a fun��o configura." << std::endl;
			break;
		case -2:
			std::cout << "Opera��o cancelada pelo operador." << std::endl;
			break;
		case -3:
			std::cout << "O par�metro fun��o / modalidade � inexistente/inv�lido." << std::endl;
			break;
		case -4:
			std::cout << "Falta de mem�ria no PDV." << std::endl;
			break;
		case -5:
			std::cout << "Sem comunica��o com o SiTef." << std::endl;
			break;
		case -6:
			std::cout << "Opera��o cancelada pelo usu�rio (no pinpad)." << std::endl;
			break;
		case -7:
			std::cout << "Reservado" << std::endl;
			break;
		case -8:
			std::cout << "A CliSiTef n�o possui a implementa��o da fun��o necess�ria, provavelmente est� desatualizada (a CliSiTefI � mais recente)." << std::endl;
			break;
		case -9:
			std::cout << "A automa��o chamou a rotina ContinuaFuncaoSiTefInterativo sem antes iniciar uma fun��o iterativa." << std::endl;
			break;
		case -10:
			std::cout << "Algum par�metro obrigat�rio n�o foi passado pela automa��o comercial." << std::endl;
			break;
		case -12:
			std::cout << "Erro na execu��o da rotina iterativa. Provavelmente o processo iterativo anterior n�o foi executado at� o final (enquanto o retorno for igual a 10000)." << std::endl;
			break;
		case -13:
			std::cout << "Documento fiscal n�o encontrado nos registros da CliSiTef. Retornado em fun��es de consulta tais como ObtemQuantidadeTransa��esPendentes." << std::endl;
			break;
		case -15:
			std::cout << "Opera��o cancelada pela automa��o comercial." << std::endl;
			break;
		case -20:
			std::cout << "Par�metro inv�lido passado para a fun��o." << std::endl;
			break;
		case -21:
			std::cout << "Utilizada uma palavra proibida, por exemplo SENHA, para coletar dados em aberto no pinpad. Por exemplo na fun��o ObtemDadoPinpadDiretoEx." << std::endl;
			break;
		case -25:
			std::cout << "Erro no Correspondente Banc�rio: Deve realizar sangria." << std::endl;
			break;
		case -30:
			std::cout << "Erro de acesso ao arquivo. Certifique-se que o usu�rio que roda a aplica��o tem direitos de leitura/escrita." << std::endl;
			break;
		case -40:
			std::cout << "Transa��o negada pelo servidor SiTef." << std::endl;
			break;
		case -41:
			std::cout << "Dados inv�lidos." << std::endl;
			break;
		case -42:
			std::cout << "Reservado" << std::endl;
			break;
		case -43:
			std::cout << "Problema na execu��o de alguma das rotinas no pinpad." << std::endl;
			break;
		case -50:
			std::cout << "Transa��o n�o segura." << std::endl;
			break;
		case -100:
			std::cout << "Erro interno do m�dulo." << std::endl;
			break;
		default:
			std::cout << "Erros detectados internamente pela rotina." << std::endl;
			break;
	}

};

void SiTefService::debito(char* valor, 
						  char* cupom, 
						  char* DataFiscal,
						  char* HoraFiscal,
						  char* Operador)
{
	rtn = this->STF.IniciaFuncaoSiTefInterativo(2,
												valor,
												cupom,
												DataFiscal,
												HoraFiscal,
												Operador);
	std::cout << "" << std::endl;
		
	if (rtn == 10000) {
		int* comando = new int(0);
		char* buffer = new char();
		long* tipocampo = new long(0);
		short* tammin = new short(0);
		short* tammax = new short(0);
		int tamBuffer = 20000;
		int Continue = 0;
		do {

			rtn = this->STF.ContinuaFuncaoSiTefInterativo(	comando,
															tipocampo,
															tammin,
															tammax,
															buffer,
															tamBuffer,
															Continue );
			this->commandType(comando, buffer);
			//this->fieldType(tipocampo);

		} while (rtn == 10000);
		delete comando;
		delete buffer;
		delete tipocampo;
		delete tammin;
		delete tammax;
		error(rtn);
	}

};

void SiTefService::credito(char* valor,
						   char* cupom,
						   char* DataFiscal,
						   char* HoraFiscal,
						   char* Operador)
{

	rtn = this->STF.IniciaFuncaoSiTefInterativo(3,
												valor,
												cupom,
												DataFiscal,
												HoraFiscal,
												Operador);

	std::cout << "" << std::endl;

	if (rtn == 10000) {
		int* comando = new int(0);
		char* buffer = new char();
		long* tipocampo = new long(0);
		short* tammin = new short(0);
		short* tammax = new short(0);
		int tamBuffer = 20000;
		int Continue = 0;
		do {
			rtn = this->STF.ContinuaFuncaoSiTefInterativo(comando,
														  tipocampo,
														  tammin,
														  tammax,
														  buffer,
														  tamBuffer,
														  Continue);

			this->commandType(comando, buffer);
			//this->fieldType(tipocampo);

		} while (rtn == 10000);
		delete comando;
		delete buffer;
		delete tipocampo;
		delete tammin;
		delete tammax;
		error(rtn);

	}

};


void SiTefService::menu_pagamento(char* valor,
	char* cupom,
	char* DataFiscal,
	char* HoraFiscal,
	char* Operador)
{

	rtn = this->STF.IniciaFuncaoSiTefInterativo(0,
		valor,
		cupom,
		DataFiscal,
		HoraFiscal,
		Operador);

	std::cout << "retorno" << rtn << std::endl;

	if (rtn == 10000) {
		int* comando = new int(0);
		char* buffer = new char();
		long* tipocampo = new long(0);
		short* tammin = new short(0);
		short* tammax = new short(0);
		int tamBuffer = 20000;
		int Continue = 0;
		do {
			rtn = this->STF.ContinuaFuncaoSiTefInterativo(comando,
				tipocampo,
				tammin,
				tammax,
				buffer,
				tamBuffer,
				Continue);

			this->commandType(comando, buffer);
			//this->fieldType(tipocampo);
			std::cout << "retorno" << rtn << std::endl;
		} while (rtn == 10000);
		delete comando;
		delete buffer;
		delete tipocampo;
		delete tammin;
		delete tammax;
		error(rtn);


	}

};


void SiTefService::menu_gerencial(char* Operador)
{

	rtn = this->STF.IniciaFuncaoSiTefInterativo(110,
		NULL,
		NULL,
		NULL,
		NULL,
		Operador);

	std::cout << "" << std::endl;

	if (rtn == 10000) {
		int* comando = new int(0);
		char* buffer = new char();
		long* tipocampo = new long(0);
		short* tammin = new short(0);
		short* tammax = new short(0);
		int tamBuffer = 20000;
		int Continue = 0;
		do {
			std::cout << "inicio" << std::endl;
			rtn = this->STF.ContinuaFuncaoSiTefInterativo(comando,
				tipocampo,
				tammin,
				tammax,
				buffer,
				tamBuffer,
				Continue);

			this->commandType(comando, buffer);
			std::cout << "fim" << std::endl;
			//this->fieldType(tipocampo);
		} while (rtn == 10000);
		delete comando;
		delete buffer;
		delete tipocampo;
		delete tammin;
		delete tammax;
		error(rtn);
	}

};



