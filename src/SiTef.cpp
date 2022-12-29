#include "SiTef.hpp"

SiTef::SiTef(std::string str32, std::string str64)
{

	std::string  sw;
#if _WIN64
	std::cout << "Windows 64bits" << std::endl;
	sw = str64;
#elif _WIN32
	std::cout << "Windows 32bits" << std::endl;
	sw = str32;
#endif
	//Convertendo o path em LPCWSTR para usar no LoadLibrary
	std::wstring stemp = std::wstring(sw.begin(), sw.end());
	LPCWSTR path = stemp.c_str();

	this->hGetProcIDDLL = LoadLibrary(path);

	if (!hGetProcIDDLL) {
		std::cout << "could not load the dynamic library" << std::endl;
	}
	else {
		std::cout << "loading sucess the dynamic library " << std::endl;
	}
}