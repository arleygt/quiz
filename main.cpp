#include <iostream>

using namespace std;

int main()
{
    int num= 0;
    int suma = 0;
    int mod =0;
    int may=0;
    int c=1;

    cout << "ingrese numero entero positivo: " << endl;
    cin>>num;
    while (num<=0){
        cout << "ingrese numero entero positivo: " << endl;
        cin>>num;
    }
    while (num >0){
        mod=num%10;
        if (mod>may){
            may = mod;
        }else if (mod== may) {
            c += 1;
}
        int pot=1;
        for (int cont = 1; cont <= mod; ++cont) {
            pot *= mod;


        }
        //cout<<pot<<endl;
        suma += pot;
        num /=10;
        //cout<<mod<<" "<<num<<endl;
    }
    cout<<"El resultado es: "<<suma<<endl;
    cout<<"El digito mayor encontrado es el "<<may<<" que aparece "<<c<<" vez"<<endl;
    return 0;
}
