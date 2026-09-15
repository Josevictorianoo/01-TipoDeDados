// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/2)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;

	cout << endl << endl;



	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Exercicio 1 - Limite de tipo\n";
	cout << "=================================\n";

#include <climits>
	cout << "int  max = " << INT_MAX << "\n";
	cout << "int  min = " << INT_MIN << "\n";
	cout << "short max = " << SHRT_MAX << "\n";
	cout << "int max +1 = " << INT_MAX + 1LL << "\n";
	
	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "\nExercicio 2 - Conversao de Temperatura\n";
	cout << "======================================\n";
	double celsius = 0.0;

	cout << "Digite a temperatura em Celsius: ";
	cin >> celsius;

	double fahrenheit = (celsius * 1.8) + 32.0;
	double kelvin = celsius + 273.15;

	cout.precision(2);
	cout << fixed;

	cout << "Fahrenheit: " << fahrenheit << " F\n";
	cout << "Kelvin:     " << kelvin << " K\n\n";
	
	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Exercicio 3 - Conversao de Segundos\n";
	cout << "===================================\n";
	long total_segundos = 0;

	cout << "Digite a quantidade de segundos: ";
	cin >> total_segundos;

	
	dias = total_segundos / 86400;
	long resto_dias = total_segundos % 86400;

	horas = resto_dias / 3600;
	long resto_horas = resto_dias % 3600;

	minutos = resto_horas / 60;
	int segundos_restantes = resto_horas % 60; 

	cout << "\nResultado do desmembramento:\n";
	cout << "Dias:    " << dias << "\n";
	cout << "Horas:   " << horas << "\n";
	cout << "Minutos: " << minutos << "\n";
	cout << "Segundos restantes: " << segundos_restantes << "\n\n";

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Exercicio 4 - Ponteiro na Pratica\n";
	cout << "=================================\n";

	int meu_numero = 42;


	cout << "Valor original da variavel: " << meu_numero << "\n";


	cout << "Endereco da variavel (&meu_numero): " << &meu_numero << "\n";

	
	int* pt_numero = &meu_numero;

	
	*pt_numero = *pt_numero * 2;

	
	cout << "Novo valor da variavel original (apos alteracao via ponteiro): " << meu_numero << "\n\n";

	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows
}