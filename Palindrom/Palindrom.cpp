// Palindrom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ragTest.h"
#include "Palindrom.h"

using namespace std;


/***********************************************************
ANROP:    bool yes = isPalindrome( str );
UPPGIFT:  Returnerar true omm str�ngen �r ett palindrom
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
	for (int i = str1.length() - 1; i >= 0; i--){
		str2 += str1[i];
	}

	return (str1 == str2);
}


/*****************************************************
UPPGIFT:   F�r varje mening anv�ndaren knappar in talar
           datorn om ifall det �r ett palindrom eller ej.
           Programmet avslutas d� anv�ndaren knappar in
           en tom rad.
*****************************************************/
void main()
{
    setlocale(LC_ALL, "swedish");//�,�,�

    // TODO: L�t nedanst�ende anrop vara kvar men �ndra 
    // str�ngen till ditt f�rnamn och de sista 4 siffrorna 
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
          cout << str << " �r ett palindrom" << endl;
        else cout << str << " �r INTE ett palindrom. " << endl;
      }
}// main




