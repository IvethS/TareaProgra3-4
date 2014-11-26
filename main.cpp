#include "Evaluador.h"
#include <fstream>
#include <math.h>
using namespace std;

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo de texto
void escribirNumeroTexto(string nombre_archivo, int num)
{

}
int leerNumeroTexto(string nombre_archivo)
{
    return -1;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo de texto
void escribirStringTexto(string nombre_archivo, string str)
{
}
string leerStringTexto(string nombre_archivo)
{
    return "";
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo binario
void escribirNumeroBinario(string nombre_archivo, int num)
{
}
int leerNumeroBinario(string nombre_archivo)
{
    return -1;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo binario
void escribirStringBinario(string nombre_archivo, string str)
{
}
string leerStringBinario(string nombre_archivo)
{
    return "";
}

//Devuelve true si encuentra str (dada) en un archivo dado el nombre
bool existe(string nombre_archivo, string str)
{
    return false;
}
//realizado con ayuda del ejercicio en clase
//Devuelve el numero mayor dado el nombre de un archivo binario
int obtenerMayor(string nombre)
{
  ifstream in(nombre.c_str());
    in.seekg(0,ios::end);
    int tamano = in.tellg();
    in.seekg(0,ios::beg);

    int mayor = -999;
    while(in.tellg()<tamano)
    {
        int num;
        in.read((char*)&num,4);
        if(mayor<num)
            mayor = num;
    }
    return mayor;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
