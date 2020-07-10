# Auxiliador_de_Viagens
O código lê os parâmetros solicitados e lhe diz o valor gasto e o tempo de chegada ao destino.

Utilizando como variáveis:
  Atenção no valor dos combustíveis, que deve ser atualizado com base em época e região.  
    float: gas = 3.89, et = 2.29, ds = 2.89.
    float: value, kmaut, km, kmh, aut, l.
    int: type, h, a.

        cout<<"Bem vindo ao auxiliador de viagens!"<<endl;
        cout<<"Favor Inserir a distância a ser percorrida (km): ";
        cin>>km;
        cout<<endl;
        cout<<"Favor Inserir a velocidade média do automóvel (km/h) : ";
        cin>>kmh;
        cout<<endl;
        cout<<"Favor Selecionar um dos combustíveis abaixo: ";
        cout<<endl;
        cout<<endl;
        cout<<"         Gasolina = 1"<<endl;
        cout<<"          Etanol = 2"<<endl;
        cout<<"          Diesel = 3"<<endl;
        cout<<endl;
        cout<<"               ";
        cin>>type;
        cout<<endl;
        cout<<"Favor Inserir a autonomia média esperada para o combustível selecionado (km/l): ";
        cin>>aut;
        cout<<endl;

        kmaut=(km/aut);
        h=(km/kmh);

        cout<<"Serão necessários ao menos "<<kmaut<<" Litros para concluir a viagem.";
        cout<<endl;
        cout<<endl;
        cout<<"Favor Inserir a quantidade em litros que será abastecido: ";
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
        cout<<"Favor Inserir um valor válido"<<endl;
        break;
}

    cout<<endl;
    cout<<"O valor gasto em combustível será de R$"<<value<<" e a viagem levará dentre "<<h<<" e "<<h+1<<" horas."<<endl;
        return 0;
}
