// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
//

#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#pragma once

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#define UNICODE

#include <windows.h>
#include "targetver.h"

//#include <iostream>
//#include <stdlib.h>
#include <string>

#include <stdio.h>
//#include <tchar.h>


#include "Tlhelp32.h"

#include "functions.h"
#include "RTL_calls.h"
#include "service_support.h"

#include "cpulimit.h"

// TODO�: faites r�f�rence ici aux en-t�tes suppl�mentaires n�cessaires au programme


// don't work
//#pragma comment(linker, "/MERGE:.rdata=.text") 
//#pragma comment(linker, "/MERGE:.data=.text") 
//#pragma comment(linker, "/FILEALIGN:512 /SECTION:.text,ERW /IGNORE:4078") 
//#pragma comment(linker, "/ENTRY:MyMain") 
//#pragma comment(linker, "/NODEFAULTLIB") 
//#pragma comment(linker, "/SUBSYSTEM:WINDOWS") 




#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
