#ifndef FUNC_H
#define FUNC_H


#include <bitset>
///#include <SFML/Graphics.hpp>
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <NTL/ZZ.h>

using namespace std;
using namespace NTL;
///using namespace sf;


ZZ modulo(ZZ,ZZ);
ZZ euclides(ZZ, ZZ);
vector<ZZ> euclides_extendido(ZZ,ZZ);
ZZ inversa(ZZ,ZZ);
ZZ multiplicacion_modular(ZZ,ZZ,ZZ);
ZZ exponenciacion_modular(ZZ,ZZ,ZZ);
ZZ phi_euler(ZZ,ZZ);
/*
string leer_txt_p();
string leer_txt_q();
*/
int modulo_int(int,int);
string zz_To_String(ZZ);
ZZ string_To_ZZ(string);
int ZZ_to_int(ZZ);
string int_to_string(int);
int string_to_int(string);

ZZ generar_Aleatorio(int);
ZZ generar_Aleatorio_Prime(int);
ZZ generar_Aleatorio_Max(ZZ);
ZZ generar_Aleatorio_bits(int);

ZZ Find_Gen(ZZ);

#endif // FUNC_H
