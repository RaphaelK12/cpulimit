// cpulimit.cpp : d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"


int wmain(int argc, WCHAR *argv[])
{
    MyExceptionHandler::SignalRegister();

    cpulimitMain(argc, argv);

    ExitProcess(0);
}
