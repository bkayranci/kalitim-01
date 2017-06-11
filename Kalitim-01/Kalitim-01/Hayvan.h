#pragma once
#include <string>
#include <iostream>
#include <time.h>
using namespace std;
class Hayvan
{
private:
	//Ozellik
	string His;
	int Omur;

	//Eylem
	
protected:
	//Ozellik
	int OrganSayisi;

	//Eylem
	void SesCikar();
	
	void Terle();

public:
	~Hayvan();
	//Yapici
	Hayvan();

	//Ozellik
	int AyakSayisi;
	

	//Eylem
	void Kos();
	

};

