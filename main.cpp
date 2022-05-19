#include <iostream>
using namespace std;
float descuento(){//funcion para determinar el desucuento sobre compras mayors 10000 y menores de 10000.
    int producto;
    float descuento1=0.25;
    float descuento2=0.10;
    float resultado;
    cout<<"Ingrese el producto: ";
    cin>>producto;
    if(producto>10000){//Evaluacion de que si el producto es mayor a 10000 entonces el mismo sera multiplicado
        cout<<producto*descuento1;//por 0.25 que es el total del primer descuentp.
        cin>>resultado;
    }else if(producto<10000){//Evaluacion de que si el producto es menor a 10000 entonces el mismo sera
        cout<<producto*descuento2;//miltiplicado por 0.10 que es el total del segundo descuentp.
        cin>>resultado;
    }
    resultado = producto;
return resultado;
}
int main() {
    cout<<descuento();//Muestra del resultado en la patalla.
}