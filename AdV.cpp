#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float value, kmaut, km, kmh, aut, l, gas = 3.6, et = 2.79, ds = 3.27;
    int type, h, a;

        cout<<"Bem vindo ao auxiliador de viagens!"<<endl;
        cout<<"Favor Inserir a dist�ncia a ser percorrida (km): ";
        cin>>km;
        cout<<endl;
        cout<<"Favor Inserir a velocidade m�dia do autom�vel (km/h) : ";
        cin>>kmh;
        cout<<endl;
        cout<<"Favor Selecionar um dos combust�veis abaixo: ";
        cout<<endl;
        cout<<endl;
        cout<<"         Gasolina = 1"<<endl;
        cout<<"          Etanol = 2"<<endl;
        cout<<"          Diesel = 3"<<endl;
        cout<<endl;
        cout<<"               ";
        cin>>type;
        cout<<endl;
        cout<<"Favor Inserir a autonomia m�dia esperada para o combust�vel selecionado (km/l): ";
        cin>>aut;
        cout<<endl;

        kmaut=(km/aut);
        h=(km/kmh);

        cout<<"Ser�o necess�rios ao menos "<<kmaut<<" Litros para concluir a viagem.";
        cout<<endl;
        cout<<endl;
        cout<<"Favor Inserir a quantidade em litros que ser� abastecido: ";
        cin>>l;

        switch (type) {

    case 1:
        value=(l*gas);
        break;
    case 2:
        value=(l*et);
        break;
    case 3:
        value=(l*ds);
        break;
    default:
        cout<<endl;
        cout<<"Favor Inserir um valor v�lido"<<endl;
        break;
}

    cout<<endl;
    cout<<"O valor gasto em combust�vel ser� de R$"<<value<<" e a viagem levar� dentre "<<h<<" e "<<h+1<<" horas."<<endl;
        return 0;
}
