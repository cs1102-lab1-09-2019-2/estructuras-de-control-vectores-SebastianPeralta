#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, delta, x1, x2;
    cout<<"Ingrese los valores los 3 coeficientes de x de la ecuación cuadrática separados por espacio:\n";
    cin>>a>>b>>c;
    delta=(b*b-4*a*c);
    if (a==0 and b==0) {
        cout<<"No tiene solución\n";
    } else if (a==0) {
        cout<<"x = "<<-c/b<<"\n";
    } else if (delta<0){
        cout<<"No tiene solución\n";
    } else {
        x1=(-b+(sqrt(delta)))/(2*a);
        x2=(-b-(sqrt(delta)))/(2*a);
        cout<<"x1 = "<<x1<<", x2 = "<<x2<<"\n";
    }
    return 0;
}