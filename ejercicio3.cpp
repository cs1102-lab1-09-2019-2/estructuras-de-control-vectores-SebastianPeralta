#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstddef>
#include <unordered_map>
#include <bits/unordered_map.h>

using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector <int> lista;
    int num;
    cout<<"Ingrese un número positivo, escriba -1 si ya no quiere ingresar más números:\n";
    while(true){
        cin>>num;
        if (num<0){
            break;
        }
        lista.push_back(num);
    }
    return lista;
}

int mediana(vector<int> &lista) {
    auto len=lista.size();
    int mediana;
    if (len%2==0) {
        mediana = ((lista[len / 2 - 1] + lista[len / 2]) / 2);
    } else {
        mediana = lista[(len-1)/2];
    }
    return mediana;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}