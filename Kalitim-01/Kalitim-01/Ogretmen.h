#pragma once
#include <iostream>
#include <string>
#include "Insan.h"
using namespace std;
class Ogretmen : public Insan
{
public:
	Ogretmen();
	~Ogretmen();

	string Okul;

	void SinavYap();
	void SinavOku();
	void DerseGit();
	void EspriYap();
};

