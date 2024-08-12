// Salut eu sunt Ciuflea Alex
// Si dupa 4 luni de programare  
// M am gandit sa fac un Joculet pe baza a ceea ce am invatat
// Asa ca astazi pe data de 1 Iulie 2024 o sa fac acest joculet cat mai rapid
// Impreuna cu update-uri, pentru ca inca de la inceput mi am dorit sa fac un joculet
// Si o sa l fac in C++
// Enjoy :)


/*
	01.07.2024
	Update 0.1
  -Am pus Intrebare de Inceput cu Da sau Nu, care aceasta intreaba daca doreste sa acceseze jocul
  -Am pus Regulamentul jocului, daca este de-acord o sa fie trimis la intrebarile de robot
  -Am facut momentan 2 intrebari de robot.

	 02.07.2024
	 Update 0.2
   -Am facut intrebarea cu numaru 3 cu steaguri, folosind string de vectori, Rezolvata toate eroriile

	 03.07.2024
	-Am facut intrebarea cu numar 4 si cu numaru 5.
	-Am facut subprogramu cu felicitari

	Update 0.3
	04.07.2024
	-Adaugate cateva culori micute
	facute intrebare numaru 1
	inspirata din evaluare nationala
	-au fost facute 5 intrebari si colorate
	
	Update 0.4
	08.07.2024
	Au fost facute toate intrebarile
	Colorate si facute cele 20 de intrebari
	de facut sistemu felcitari2
	!!!!mai trebuie de rezolvat la intrebarea!!!!
	cu patratu acele 3 patrate

	si ulterior alte sisteme


	Update 0.5
	last

	A fost rezolvata problema cu patratele
	au fost adaugate mai multe patrate
	



*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

#include <windows.h>
void Inceput1(string n, int& value) {
	cout << "Salut vrei sa jucam un joc ?" << endl;
	cout << "Raspunde cu da sau nu " << endl;
	cin >> n;
	if (n == "da" || n == "DA" || n == "dA" || n == "Da")
	{
		return;
	}
	else if (n == "nu" || n == "NU" || n == "nU" || n == "Nu")
	{
		cout << endl;
		cout << "O zi/seara frumoasa sa ai";
		value = 0;
	}
	else
	{
		cout << endl;
		cout << "Eroare, raspunsul pe care l-ai dat este invalid";
		value = 0;
	}
}
#include <windows.h>
void Regulament(string n, int& viatarobot1) {
	if (viatarobot1 > 0) {
		for (int i = 1; i <= 3; ++i)
			cout << endl;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "REGULAMENT" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Tu o sa ai un set de 5 intrebari ca sa testam.." << endl;
		cout << "Daca esti robot sau nu :)" << endl;
		cout << "Daca la aceste 5 intrebari ai picat, nu o sa treci mai departe la cele 20 de intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "ATENTIE" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "La fiecare 5 intrebari raspunse corect viata ta o sa fie reincarcata, adica daca mai ai o viata si ai trecut" << endl;
		cout << "De a 5 a intrebare o sa iti revina cele 3 vieti" << endl;
		cout << "Succes!!" << endl;
		cout << "Tasteaza GO cand esti pregatit" << endl;
		cout << "Daca scrii altceva o sa fie invalid si o sa se opreasca totul." << endl;
		cout << "Raspunsul tau o sa fie tastat mereu JOS";

		for (int i = 1; i <= 17; ++i)
			cout << endl;

		cout << "Tasteaza aici:";
		cin >> n;

		if (n == "go" || n == "gO" || n == "GO" || n == "Go")
			return;
		else
		{
			cout << endl;
			cout << "Eroare, raspunsul pe care l-ai dat este invalid";
			viatarobot1 = 0;
		}
	}
}


#include <windows.h>
void IntrebareRobot1(int& nr1, int& viatarobot1) {
	if (viatarobot1 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		cout << "Incepem cu ceva simplu :)" << endl;
		cout << "Cat face 2+2 = ?" << endl;
		for (int i = 1; i <= 26; ++i)
			cout << endl;
		while (viatarobot1 > 0) {
			cout << "Raspunsul tau: ";
			cin >> nr1;
			if (nr1 == 4)
				return;

			else
			{
				viatarobot1--;
				if (viatarobot1 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot1 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}

}
#include <windows.h>
void IntrebareRobot2(string m, int& viatarobot1) {
	//INTREBARE 2 FRUCTU
	if (viatarobot1 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		cout << "CORECT, ai raspuns la 1/5 intrebari" << endl;
		cout << " " << endl;
		cout << "Care dintre cele 5 alimente este fruct ?" << endl;
		cout << "| Laptele |   | Cartof |   | Mar |   | Ardei |   | Mazare |";
		for (int i = 1; i <= 26; ++i)
			cout << endl;

		while (viatarobot1 > 0) {
			cout << "Raspunsul tau:";
			cin >> m;
			if (m == "Mar" || m == "mAr" || m == "maR" || m == "MAr" || m == "mAR" || m == "MAR" || m == "MaR" || m == "Marul" || m == "mar") {
				cout << "CORECT";
				return;
			}
			else
			{
				viatarobot1--;
				if (viatarobot1 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot1 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}
#include <windows.h>
void IntrebareRobot3(string k[], int& viatarobot1) {
	//CULORILE STEAGULUI intrebare 3
	if (viatarobot1 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		cout << "CORECT, ai raspuns la 2/5 intrebari" << endl;
		cout << " " << endl;
		cout << "Care sunt culorile steagului Romaniei ?" << endl;
		cout << "Le poti scrie pe toate pe un rand sau poti si la liniuita" << endl;
		for (int i = 1; i <= 25; ++i)
			cout << endl;

		cout << "Raspunsul tau:";
		while (viatarobot1 > 0)
		{
			for (int i = 0; i < 3; ++i)
				cin >> k[i];
			if ((k[0] == "albastru" || k[0] == "Albastru" || k[0] == "ALBASTRU" || k[0] == "ALBastru" || k[0] == "AlbastrU" || k[0] == "a") &&
				(k[1] == "galben" || k[1] == "Galben" || k[1] == "GALBEN" || k[1] == "GALBen" || k[1] == "GalbeN" || k[1] == "g") &&
				(k[2] == "rosu" || k[2] == "Rosu" || k[2] == "ROSU" || k[2] == "ROsu" || k[2] == "RosU" || k[2] == "r")) {
				return;
			}
			else {
				viatarobot1--;
				if (viatarobot1 == 2)
				{
					cout << endl;
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
					cout << "Rescrie din nou culorile TOATE de la capat, in ordine corecta" << endl;
					cout << endl;
				}
				else if (viatarobot1 == 1) {
					cout << endl;
					cout << "Ai grija, mai ai o singura viata" << endl;
					cout << "Rescrie din nou culorile TOATE de la capat, in ordine corecta" << endl;
					cout << endl;
				}
				else {
					cout << endl;
					cout << "Ai pierdut toate vietile";
				}
			}
		}
	}
}
#include <windows.h>
void IntrebareRobot4(int n, int& viatarobot1) {
	if (viatarobot1 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		cout << "CORECT, ai raspuns la 3/5 intrebari" << endl;
		cout << " " << endl;
		cout << "Cate patrate sunt in imaginea de mai jos ?";
		for (int i = 1; i <= 2; ++i)
			cout << endl;

		int n = 4; // Dimensiunea unui pătrat (4x4)
		int num_patrațe = 5; // Numărul de pătrate
		int space = 3; // Spațiul între pătrate

		// Afișează liniile de sus pentru toate cele cinci pătrate
		for (int i = 0; i < num_patrațe; i++) {
			for (int j = 0; j < n; j++) {
				cout << "_";
			}
			if (i < num_patrațe - 1) {
				for (int s = 0; s < space; s++) {
					cout << " "; // Spațiu între pătrate
				}
			}
		}
		cout << endl;

		// Afișează laturile laterale pentru toate cele cinci pătrate
		for (int i = 0; i < n - 2; i++) { // (n-2) deoarece avem linii de sus și jos
			for (int k = 0; k < num_patrațe; k++) {
				cout << "|";
				for (int j = 0; j < n - 2; j++) {
					cout << " ";
				}
				cout << "|";
				if (k < num_patrațe - 1) {
					for (int s = 0; s < space; s++) {
						cout << " "; // Spațiu între pătrate
					}
				}
			}
			cout << endl;
		}

		// Afișează linia de jos pentru toate cele cinci pătrate
		for (int i = 0; i < num_patrațe; i++) {
			for (int j = 0; j < n; j++) {
				cout << "-";
			}
			if (i < num_patrațe - 1) {
				for (int s = 0; s < space; s++) {
					cout << " "; // Spațiu între pătrate
				}
			}
		}
		cout << endl;

		for (int i = 1; i <= 18; ++i)
			cout << endl;


		cout << endl;
		cout << "Raspunsul tau:";
		while (viatarobot1 > 0) {

			cin >> n;
			if (n == 5)
				return;
			else {
				viatarobot1--;
				if (viatarobot1 == 2)
				{
					cout << endl;
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot1 == 1) {
					cout << endl;
					cout << "Ai grija, mai ai o singura viata" << endl;
				}
				else {
					cout << endl;
					cout << "Ai pierdut toate vietile";

				}
			}
		}
	}

}

#include <windows.h>
void IntrebareRobot5(string m, int& viatarobot1) {
	//functie culoare luata cu chatgpt
	if (viatarobot1 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		cout << "CORECT, ai raspuns la 4/5 intrebari" << endl;
		cout << " " << endl;
		cout << "Ce culoare are acest text --> ";
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Nu o sa stii ce culoare sunt";
		SetConsoleTextAttribute(hConsole, 7);
		cout << " <--";

		while (viatarobot1 > 0) {

			for (int i = 1; i <= 27; ++i)
				cout << endl;
			cout << "Raspunsul tau:";
			cin >> m;
			if (m == "Rosu" || m == "Rosie" || m == "rosu" || m == "ROSU" || m == "ROSIE" || m == "Rosul" || m == "rosul")
				return;
			else {
				viatarobot1--;
				if (viatarobot1 == 2)
				{
					cout << endl;
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot1 == 1) {
					cout << endl;
					cout << "Ai grija, mai ai o singura viata" << endl;
				}
				else {
					cout << endl;
					cout << "Ai pierdut toate vietile";

				}
			}
		}
	}
}


void Felicitari(string m, int& viatarobot1) {

	if (viatarobot1 > 1) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		cout << "Felicitari, ai trecut de intrebarile de robot" << endl;
		cout << "Aparent nu esti un robot, dar adevaratele intrebari incep ACUM" << endl;
		cout << endl;
		cout << "Atentie!! La fiecare 5 intrebari o sa ai un checkpoint(adica vietile pe care le ai pierdut, le vei recupera pe toate" << endl;
		cout << "SUCCESS!!" << endl;
		cout << "Tasteaza GO, pentru a incepe, daca tastezi orice altceva programu o sa se opreasca";
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		cout << "Tasteaza aici:";
		cin >> m;
		if (m == "go" || m == "gO" || m == "GO" || m == "Go")
			return;
		else
		{
			cout << endl;
			cout << "Eroare, raspunsul pe care l-ai dat este invalid";
			viatarobot1 = 0;
		}
	}

}

#include <windows.h>
void Intrebare1(int n, int& viatarobot2) {
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 1)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Rezultatul calculului 8+14:2 = ?" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata din Evaluarea Nationala 2023-2024";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 27; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 15)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare2(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 1 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 2)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Care este capitala Romaniei ?" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul Wikipedia";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 25; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Bucuresti" || m == "bucuresti" || m == "bucharest" || m == "Bucharest" || m == "BUCURESTI" || m == "BUCUresti")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}
#include <windows.h>	
void Intrebare3(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 2 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 3)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Cuvantu MASINA intors este ANISAM, numaru 46251 intors este ?" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul Test Free IQ";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 15264)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare4(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 3 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 4)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Cate strofe are poezia 'Luceafarul' scrisa de Mihai Eminescu ? " << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul Libertatea.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 98)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare5(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 4 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 5)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Cate culori are curcubeul ?" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul Descopera.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 7)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare6(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		viatarobot2 = 3;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 5 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		cout << "Viata ta a fost reincarcata, ai din nou 3 vieti";
		cout << endl;
		cout << "Urmeaza intrebari de dificultate ";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "MEDIU" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 6)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Ce urmeaza dupa 3 6 12 24 ... ?" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul iq-tester.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 21; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 48)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare7(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 6 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 7)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "5 masini au nevoie de 5 minute pentru a fabrica 5 obiecte. De cat timp au nevoie 100 de masini pentru a fabrica 100 de obiecte?" << endl;
		cout << "Scrie doar numarul mai jos" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul adevarul.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 22; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 5)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare8(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 7 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 8)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "A cui apartine aceasta Teorema ( Ip2 = a2 + b2)" << endl;
		cout << "Adica Ipotenuza la a doua = cateta 1 la a 2 a + cateta 2 la a 2 a" << endl;
		cout << "Scrie mai jos doar numele" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul Wikipedia.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 22; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Pitagora" || m == "pitagora" || m == "PitaGORA" || m == "PIGATORA" || m == "PITAgora" || m == "PiTaGoRa" || m == "PITAGOra")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare9(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 8 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 9)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Care este cel mai mare Ocean ?";
		cout << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul libertatea.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Pacific" || m == "PACIFIC" || m == "pacific" || m == "PACIfic" || m == "paciFIC" || m == "PACIFIc" || m == "PaciFIC")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare10(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 9 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 10)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Care este capitala Germaniei ?";
		cout << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul wikipedia.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Berlin" || m == "BERLIN" || m == "BerLIN" || m == "BERlin" || m == "berLIN" || m == "BerLIN" || m == "berlin")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare11(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		viatarobot2 = 3;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 10 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		cout << "Viata ta a fost reincarcata, ai din nou 3 vieti";
		cout << endl;
		cout << "Urmeaza intrebari de dificultate ";
		SetConsoleTextAttribute(hConsole, 4);
		cout << "GREU" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 11)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Ce urmeaza dupa 1,1,2,3,5,8,13,21 ... ?" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul libertatea.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 21; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 34)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare12(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 11 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 12)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Cate luni au 28 de zile?" << endl;
		cout << "Scrie intre 1-12" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul adevarul.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 22; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 12)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare13(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 12 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 13)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Care cifra este intalnita cel mai des intr-un sir de numere de la 0 la 109" << endl;
		cout << " ";

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul unica.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 22; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 0)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare14(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 13 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 14)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Daca te afli intr-o cursa si il depasesti pe cel de pe locul al doilea, pe ce loc ajungi ?" << endl;
		cout << "Scrie doar numarul" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul adevarul.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 22; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 2)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare15(int n, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 14 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 15)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Pe un stalp sunt 10 pasari, impusti 2 pasari, cate pasari raman in total ?" << endl;
		cout << "Scrie doar numarul" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul adevarul.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 22; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> n;
			if (n == 0)
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

#include <windows.h>
void Intrebare16(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		viatarobot2 = 3;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 15 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		cout << "Viata ta a fost reincarcata, ai din nou 3 vieti";
		cout << endl;
		cout << "Urmeaza intrebari de dificultate ";
		SetConsoleTextAttribute(hConsole, 8);
		cout << "FOARTE GREU" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 16)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "" << endl;
		cout << "Cine umbla dimineata pe patru picioare, la amiaza pe doua si seara pe trei ?" << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul Wikipedia.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 21; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Omul" || m == "omul" || m == "OMUL" || m == "OmUL" || m == "OmuL" || m == "omu" || m == "Omu" || m == "OMU" || m == "OmU" || m == "MAN" || m == "man" || m == "MaN")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

void Intrebare17(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 16 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 17)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Nu e o fiinta vie, dar tot are cinci degete ?";
		cout << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul wikipedia.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Manusa" || m == "MANUSA" || m == "manusa" || m == "MaNUsA" || m == "ManuSA" || m == "MANUsa" || m == "manuSA")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}


void Intrebare18(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 17 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 18)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Ce este, dar nu a existat niciodata, niciodata va exista, dar este mereu in prezent ?";
		cout << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul wikipedia.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "MAINE" || m == "maine" || m == "Maine" || m == "MAIne" || m == "maiNE" || m == "MainE" || m == "Tommorow")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

void Intrebare19(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 18 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 19)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Ce urmareste pe cineva in fiecare zi, dar nu-l vede niciodata?";
		cout << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul wikipedia.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Umbra" || m == "UMBRA" || m == "umbra" || m == "UmbRA" || m == "Shadow" || m == "shadow" || m == "UMBra")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}


void Intrebare20(string m, int& viatarobot2) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (viatarobot2 > 0) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Corect";
		SetConsoleTextAttribute(hConsole, 7);
		cout << ", ai raspuns la";
		SetConsoleTextAttribute(hConsole, 3);
		cout << " 19 / 20 ";
		SetConsoleTextAttribute(hConsole, 7);
		cout << "intrebari" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "Intrebarea numaru 20)" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Ce poate umbla toata ziua fara sa se miste deloc?";
		cout << endl;

		SetConsoleTextAttribute(hConsole, 6);
		cout << "Source: Aceasta sursa a fost inspirata de pe site-ul wikipedia.ro";
		SetConsoleTextAttribute(hConsole, 7);
		for (int i = 1; i <= 24; ++i)
			cout << endl;
		while (viatarobot2 > 0) {
			cout << "Raspunsul tau: ";
			cin >> m;
			if (m == "Ceasul" || m == "Ceasu" || m == "CEASUL" || m == "ceasu" || m == "ceasul" || m == "Clock" || m == "CEASU")
				return;

			else
			{
				viatarobot2--;
				if (viatarobot2 == 2)
				{
					cout << "Ai gresit, ai grija mai ai 2 vieti" << endl;
				}
				else if (viatarobot2 == 1)
					cout << "Ai grija, mai ai o singura viata" << endl;
				else
					cout << "Ai pierdut toate vietile";
			}
		}
	}
}

void Felicitari2(int n, int viatarobot2) {
	if (viatarobot2 > 1) {
		for (int i = 1; i <= 30; ++i)
			cout << endl;
		cout << "Felicitarii!!" << endl;
		cout << "Ai trecut de toate cele 20 de intrebari" << endl;
		cout << "Multumesc pentru timpul acordat" << endl;
		cout << "Sper ca ti a placut mini-aplicatie/joculet cum vrei sa ii spui" << endl;
		cout << "Sa ai o zi/seara frumoasa <3" << endl;
		cout << endl;
	}
	for (int i = 1; i <= 23; ++i)
		cout << endl;
	cin >> n;
}
int main() {
	int n;
	string m;
	string k[1001];
	int viatarobot1 = 3;
	int viatarobot2 = 3;
	//------------------------------
	Inceput1(m, viatarobot1);
	Regulament(m, viatarobot1);
	//------------------------------
	IntrebareRobot1(n, viatarobot1);
	IntrebareRobot2(m, viatarobot1);
	IntrebareRobot3(k, viatarobot1);
	IntrebareRobot4(n, viatarobot1);
	IntrebareRobot5(m, viatarobot1);
	//------------------------------
	Felicitari(m, viatarobot1);
	//------------------------------
	Intrebare1(n, viatarobot2);
	Intrebare2(m, viatarobot2);
	Intrebare3(n, viatarobot2);
	Intrebare4(n, viatarobot2);
	Intrebare5(n, viatarobot2);
	Intrebare6(n, viatarobot2);
	Intrebare7(n, viatarobot2);
	Intrebare8(m, viatarobot2);
	Intrebare9(m, viatarobot2);
	Intrebare10(m, viatarobot2);
	Intrebare11(n, viatarobot2);
	Intrebare12(n, viatarobot2);
	Intrebare13(n, viatarobot2);
	Intrebare14(n, viatarobot2);
	Intrebare15(n, viatarobot2);
	Intrebare16(m, viatarobot2);
	Intrebare17(m, viatarobot2);
	Intrebare18(m, viatarobot2);
	Intrebare19(m, viatarobot2);
	Intrebare20(m, viatarobot2);
	Felicitari2(n, viatarobot2);
}