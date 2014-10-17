// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top(); // con el top() nos permite devolver el elemento dentro de la pila
}

//nos devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size(); // size() nos permite devolver la cantidad de elementos dentro de la pila
}

//con el nos devuelve si "str" esta dentro de "mi_pila" de lo contrario retorna false
bool existeEnPila(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty()) // con el while hacemos un ciclo para asegurarnos que la fila no este vacia
    {
        if(mi_pila.top()== str) // nos aseguramos que el valor del elemento supieror de la pila contenga el mismo valor del string
        {
            return true; // si el valor se encuentra dentro de la pila retornara true
        }
        mi_pila.pop(); // con pop() vamos sacando el elemento superior que se encuentra dentro de la pila
    }
    return false; // retornamos false sino se encuentra
}

//aqui vamos a devuelver el elemento mayor que se encuentre dentro de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor =0; // creamos una variable donde se va a guardar en memoria temporal el valor mayor (valor buscado)

   while(!mi_pila.empty()) // hacemos un ciclo para determinar que la pila no este vacia
   {
       if(mi_pila.top()==0) // revisamos si el valor del elemento superior es igual a cero
       {
           mayor = mi_pila.top(); //determinamos que el numero mayor de la pila es cero, hasta el momento en que se guarde otro numero en memoria
       }
       else
       if(mi_pila.top()>mayor) // verificamos que el valor del elemento superior de la pila es mayor que el numero mayor hasta el momento "0"
       {
           mayor= mi_pila.top(); // el numero se combira a ser el mayor que "0"
       }
       mi_pila.pop();  // eliminaremos el elemento superior de la pila "0"

   }
    return mayor; // retornaremos el valor mayor "0"

}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor = mi_pila.top(); // sera el valor hasta al momento y sera el top de la pila
    while(!mi_pila.empty()) // creamos un ciclo de validacion para determinar que la pila no este vacia
    {
        if(mi_pila.top()==0) // comparamos si el valor del elemento superior de la pila  es igual a cero
        {
            menor = mi_pila.top(); // si es menor se tomar el valor del elemento sueperior de la pila "0"
        }
        else
        if(mi_pila.top()<menor) // creamos una condicion si el elemento superior de la pila sera menor hasta el momento
        {
            menor = mi_pila.top();  // si el  valor resulta ser elemento superior de la pila, se toma como el menor de la pila.
        }
        mi_pila.pop(); // con el pop eliminaremos el elemento superior de la pila
    }

    return menor; // retornamos el valor menor
}

//devuelve el promedio de todos los elementos de "mi_pila"
float getPromedio(stack<float> mi_pila)
{
    int suma =0; // creamos una variable para almacenar la sumar los elementos
    int cantidad = mi_pila.size(); // size() determina el tamaño de la cantidad de elementos dentro de la pila
    int promedio =0; //variable donde se almacenara el promedio general dentro de la pila

    while(!mi_pila.empty()) // hacemos un ciclo de validacion para determinar que la pila no se encuentre vacia
    {
        suma += mi_pila.top(); //se suman cada uno de los elementos de la pila
        mi_pila.pop(); //eliminamos el elmento superior de la pila
    }
    promedio = suma/cantidad; // hacemos la evaluacion del promedio = suma entre la cantidad de elementos

return promedio; // retornamos el promedio obtenido
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
