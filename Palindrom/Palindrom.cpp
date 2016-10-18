// Palindrom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ragTest.h"
#include "Palindrom.h"

using namespace std;


/***********************************************************
ANROP:    bool yes = isPalindrome( str );
UPPGIFT:  Returnerar true omm strängen är ett palindrom
***********************************************************/
bool isPalindrome(const string& str){
	// Create new string from input string but with no spaces and no uppercase.
	string str1 = "";
	for (auto &letter : str){
		if (letter != ' '){
			str1 += tolower(letter);
		}
	}

	// Create reversed string from str1
	string str2 = "";
	for (int i = str1.size() - 1; i >= 0; i--){
		str2 += str1[i];
	}

	return (str1 == str2);
}


/*****************************************************
UPPGIFT:   För varje mening användaren knappar in talar
           datorn om ifall det är ett palindrom eller ej.
           Programmet avslutas då användaren knappar in
           en tom rad.
*****************************************************/
void main()
{
    setlocale(LC_ALL, "swedish");//å,ä,ö

    // TODO: Låt nedanstående anrop vara kvar men ändra 
    // strängen till ditt förnamn och de sista 4 siffrorna 
    // i ditt personnummer
    ragnarsTest("Jonny 2472");  

    while (true)
      {
        cout << "Skriv mening: ";
        string str;
        getline(cin, str); 

        if (str.length()==0)
          break;

        // skriv ut resultatet
        if (isPalindrome(str))
          cout << str << " är ett palindrom" << endl;
        else cout << str << " är INTE ett palindrom. " << endl;
      }
}// main




