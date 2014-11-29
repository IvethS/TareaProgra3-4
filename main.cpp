#include "Evaluador.h"
#include <fstream>
#include <math.h>
using namespace std;
//Trabaje con Merari, Kevin y Maynor,
//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo de texto
//Esta funcion lo que hace es escribir un numero y luego en el archivo lee ese numero x que se ingreso.
void escribirNumeroTexto(string nombre_archivo, int num)
{
ofstream out(nombre_archivo.c_str());
out<<num<<endl;
out.flush();
out.close();
}
//se declara para poder leer el archivo
//se decra la variable que se va a leer y se devuelve ese numero.
int leerNumeroTexto(string nombre_archivo)
{
    ifstream in (nombre_archivo.c_str());
    int numero;
    in>>numero;

    return numero;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo de texto
// se declara para poder escribir lo que se quiere en el archivo.
void escribirStringTexto(string nombre_archivo, string str)
{
     ofstream out(nombre_archivo.c_str());
    out<<str<<endl;
    out.flush();
    out.close();
}
//aqui se declara la variable y luego se devuelve la variable str para poder leer el string.
string leerStringTexto(string nombre_archivo)
{
   ifstream in (nombre_archivo.c_str());
    string str;
    in>>str;

    return str;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo binario
//aqui con ayuda de lo que hemos visto en clase.
//se escribe lo que tendra el archivo.
void escribirNumeroBinario(string nombre_archivo, int num)
{
    ofstream out (nombre_archivo.c_str());

    out.write((char *)&num,4);
    out.close();
}
//se declara la variable para poder leer lo que tendra el archivo
//y luego se devuelve eso.
int leerNumeroBinario(string nombre_archivo)
{
   ifstream in(nombre_archivo.c_str());
    int leer;
    in.read((char*)&leer,4);

    return leer;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo binario
//ayuda obtenida de: http://www.cplusplus.com/forum/general/100714/
//se crea una variable para leer el archivo y luego una para que escriba la string en dicho archivo
void escribirStringBinario(string nombre_archivo, string str)
{
     ofstream out (nombre_archivo.c_str());
    out.write(str.c_str(),10);
    out.close();
    
}
//se crea una variable para leer el archivo, se hace una variable char para poder leer una string
//se lee la variable y luego devuelve ese valor
string leerStringBinario(string nombre_archivo)
{
   ifstream in(nombre_archivo.c_str());
    char leido[4];
    in.read(leido,4);
    return leido;
}

//Devuelve true si encuentra str (dada) en un archivo dado el nombre
//se crea para poder leer el archivo luego se crea otra para comparar con la palabra buscar, se hace un ciclo
//se introduce la palabra comparar y se hace un if para la comparacion.
bool existe(string nombre_archivo, string str)
{
   ifstream in(nombre_archivo.c_str());
    string palabra;
    int cant; 
          
    for(int i=0;i < cant;i++)
    {
        in>>palabra
        if(palabra == str)
        {
            return true;
        }
    }
    return false;
}

//Devuelve el numero mayor dado el nombre de un archivo binario
//realizado con ayuda del ejercicio en clase, donde declaramos variables y hacemos una condicion if
//para poder obtener el mayor.
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
