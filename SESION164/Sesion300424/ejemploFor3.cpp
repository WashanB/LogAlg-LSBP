//almacenar x cantidad de numeros e imprimir dichos numneros 
#include<iostream>
using namespace std; 

#define MAX 100 

int vector1[MAX]; 
int pos=0; 
void agregar(int Num); 
void mostrar (); 

int main()
{
    int cant;
    int Num; 
    cout << "Dime cuantos nuemeros desea almacenar: ";
    cin >> cant;
    for (int i = 0; i < cant; i++){
        agregar(Num);
    }

    cout << "Mostar Numeros \n"; 
    mostrar(); 

    return 0;
}

void agregar (int Num){
    vector1[pos]= Num; 
    pos++;
}

void mostrar(){
    for (int i = 0; i<pos; i++){
        cout << vector1[i] << endl; 
    }
}