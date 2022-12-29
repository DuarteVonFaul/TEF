#include "include/SiTefService.hpp"



int main()
{
    int rtn = -1;
    bool permission = false;

    //ConfiguraIntSiTefInteratico
    std::string IdLoja = "00000000";
    std::string IdTerminal = "HH000001";
    std::string IPSiTef = "127.0.0.1:4096";
    char* Reservado = new char('0');

    SiTefService SiTef = SiTefService(&IPSiTef[0],
                                     &IdLoja[0],
                                     &IdTerminal[0],  
                                      Reservado);

    //IniciaFuncaoSiTefInterativo
    std::string Valor = "00,50";
    std::string CNfe = "123456";
    std::string Data = "20221104";
    std::string Hora = "102533";
    std::string Operador = "654312";


    SiTef.menu_gerencial(&Operador[0]);

    





    

    return 1;
   }