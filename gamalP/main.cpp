#include <iostream>

using namespace std;
#include "Func.h"
#include "Gamal.h"

int main()
{
    srand(time(NULL));
    /*void LFSR::Paso_A(int numero_de_bits, vector<int> numero_grande, short int op, int n_particiones){
        int n=numero_de_bits;
        int n_t=n/10;
        vector<int> seed;
        for(int i=0;i<n_t;i++){
            seed.push_back(numero_grande[i]);
        }
        switch(op){
            case 1:
                cout<<"Izquierda-Izquierda"<<endl;
                break;
            case 2:
                cout<<"Derecha-Derecha"<<endl;
                break;
            case 3:
                cout<<"Izquierda-Derecha"<<endl;
                break;
            case 4:
                cout<<"Derecha-Izquierda"<<endl;
                break;
        }
    }*/
    /*vector<int> lamp;
    lamp.push_back(8);
    lamp.push_back(3);
    lamp.push_back(1);
    vector<int> bih;
    bih.push_back(0);
    bih.push_back(1);
    bih.push_back(1);
    bih.push_back(0);
    LFSR cuack(8,bih,lamp);
    cuack.fill_seed();
    cout<<rand()%8<<endl;
    cout<<rand()%8<<endl;
    cout<<rand()%8<<endl;
    cout<<rand()%8<<endl;
    cout<<rand()%8<<endl;*/
    string a, b, c;
    cout << "e1: ";
    cin >> a;
    cout << "e2: ";
    cin >> b;
    cout << "p: ";
    cin >> c;
    string d="1";
    string g="1";
    Gamal Tamal(string_To_ZZ(a), string_To_ZZ(b), string_To_ZZ(c),string_To_ZZ(d),string_To_ZZ(g));
    ///Gamal Tamal(ZZ(2),ZZ(7),ZZ(29),ZZ(12),ZZ(5));
//    Gamal Tamal(5);
//  string a=3;
//  string b=761553096;
//  string c=3524711851;
//
//  ZZ as;
//  as=string_To_ZZ(a);
//
//  ZZ ab;
//  ab=string_To_ZZ(b);
//
//  ZZ eb;
//  eb=string_To_ZZ(eb);//   ZZ a(3);
//    ZZ b(761553096);
//    cout<<b<<endl;
//    ZZ c(3524711851);
//    cout<<c<<endl;
//    ZZ a(430530876407147956242600279898816064060372048501);
//    ZZ b(10691912);
//    ZZ c(25710107);
//    ZZ an(1);
//    ZZ al(2);
//       cout<<b<<endl;
//       cout<<c<<endl;
//    Gamal Tamal(a,b,c,an,al);


    int op;
    do{
            cout<< " ELIGE UNA OPCIÓN: "<<endl;
            //cout<< " 1. GENERAR KEYS "<<endl;
            cout<< " 1. ENCRIPTAR "<<endl;
            cout<< " 2. DESENCRIPTAR "<<endl;
            cout<< " 3. SALIR "<<endl;
            cin>>op;
            switch(op)
            {
                case 1:{
//

                        string linea;
                        string message;
                        ifstream MSJ ("plaintext.txt");
                        if (MSJ.is_open())
                        {
                            while (!MSJ.eof())
                            {
                                getline(MSJ,linea);
                                message+=linea;
                            }
                            MSJ.close();
                        }

                        cout<<"muere"<<endl;
                        string Cipher=Tamal.Encriptado(message);
                        cout<<"MSJ Cifrado: "<<endl<<Cipher<<endl;
                        ofstream ciphertext;
                        ciphertext.open("ciphertext.txt");
                        ciphertext<<Cipher;
                        break;}

                case 2:{
                        //ZZ Cipher= conv<ZZ>(1806073159);
                        string Cipher;
                        string linea;
                        ifstream CIPHER ("ciphertext.txt");
                        if (CIPHER.is_open())
                        {
                            while (!CIPHER.eof())
                            {
                                getline(CIPHER,linea);//lee linea a linea reconociendo el enter
                                Cipher+=linea;
                            }
                            CIPHER.close();
                        }
//
                        cout<<Cipher<<endl;
                        string Descipher;
                        Descipher= Tamal.Desencriptado(Cipher);
                        cout<<"MSJ Descifrado: "<<endl;
                        cout<<Descipher<<endl;


                        break;}
            }
    }while(op!=3);
    system("pause");

    return 0;

}
