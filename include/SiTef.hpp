#ifndef SITEF_H
#define SITEF_H

#include <windows.h>
#include <iostream>


class SiTef{

protected:
	HINSTANCE hGetProcIDDLL;

public:

	SiTef(std::string str32 = "CliSiTef32I.dll",
		std::string str64 = "CliSiTef64I.dll");

	
	HINSTANCE* getDLL() {
		return &hGetProcIDDLL;
	}


};

#endif // !SITEF_H