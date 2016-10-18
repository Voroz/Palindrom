#include "stdafx.h"
#include "Palindrom.h"
using std::string;

//***********************************************************************
// ANROP:   isOk( str, palFlagga )
// VERSION: 2010-01-15
// UPPFIFT: Returnerar true omm isPalindrome(str)==palFlagga.
//          I annat fall sker också en felutskrift
//***********************************************************************
bool isOk( const string& str, bool pal){
	if (isPalindrome(str)!=pal){
       if (pal)
		   std::cerr << "BUG: programmet fattar inte att " << str << " är ett palindrom!\7\n";
	   else std::cerr << "BUG: programmet tror att " << str << " är ett palindrom!\7\n";
       return false;
	}
	else return true;
}// isOk

//***********************************************************************
// ANROP:   ragnarsTest( myIdentity );
// VERSION: 2010-01-15
// UPPFIFT: Testar en eller flera rutiner som studenten har skrivit.
//***********************************************************************
bool ragnarsTest(const string& myIdentity){
	if (myIdentity.find("Homer")!=string::npos){
		std::cerr << "Felaktig identitet : " << myIdentity << "\7\7\n";
		std::cerr << "Använd DITT förnamn och de sista 4 siffrorna i DITT personnunmmer!!\n";
        system("pause");
		exit( 0 );
	}

    bool ok =    isOk("12344321", true)
              && isOk("123454321", true)
			  && isOk("1   2345  4321          ", true)
              && isOk("12344322", false)
              && isOk("Ni talar bra latin", true)
              && isOk("ragnar", false);

    ok = ok && isOk("1      231", false)
            && isOk("12  3454321", true)
            && isOk("123454321  ", true);

	if (ok)
		std::cerr << "ragnarsTest lyckades\n";
	else std::cerr << "ragnarsTest MISSLYCKADES!!\7\n";
    return ok;
}// ragnarsTest