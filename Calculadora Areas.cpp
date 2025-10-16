#include<iostream>

using namespace std;

void calcarea1(float &l); //quadrado
void calcarea1(float &h,float &b); //retangulo
void calcarea1(float &B,float &b,float &h); //trapézio
void calcarea2(float &r); //círculo
void calcarea2(float &D,float &d); //losango
void calcarea3(float &b,float &h); //triangulo

int main(){
    float h,l,b,B,r,D,d;
    int op;
    do{
        cout << endl <<"\tCALCULAR AREA DE UM: \n<0>SAIR DO PROGRAMA\n<1>QUADRADO\n<2>RETANGULO\n<3>TRAPEZIO\n<4>CIRCULO\n<5>LOSANGO\n<6>TRIANGULO\nOPCAO DESEJADA: ";
        cin >> op;
        switch(op){
            case 1:
            calcarea1(l);
            break;
            case 2:
            calcarea1(h,b);
            break;
            case 3:
            calcarea1(B,b,h);
            break;
            case 4:
            calcarea2(r);
            break;
            case 5:
            calcarea2(D,d);
            break;
            case 6:
            calcarea3(b,h);
            break;
            case 0:
            cout << endl << "Saindo do programa...";
            break;
            default:  cout << endl << "Opcao nao encontrada...";
        }
    }while(op!=0);
}

void calcarea1(float &l){
    cout << endl << "Informe o lado do quadrado: ";
    cin >> l;
    cout << endl << "Area do quadrado: " << l*l;
}
void calcarea1(float &h,float &b){
    cout << endl << "Informe a base do retangulo: ";
    cin >> b;
    cout << endl << "Informe a altura do retangulo: ";
    cin >> h;
    cout << endl << "Area do retangulo: " << b*h;
}
void calcarea1(float &B,float &b,float &h){
    cout << endl << "Informe a base maior: ";
    cin >> B;
    cout << endl << "Informe a base menor: ";
    cin >> b;
    cout << endl << "Informe a altura: ";
    cin >> h;
    cout << endl << "Area do trapezio: " << ((B+b)*h)/2;
}
void calcarea2(float &r){
    cout << endl << "Informe o raio do circulo: ";
    cin >> r;
    cout << "Area do circulo: " << ((r*r)*3.14);
}
void calcarea2(float &D,float &d){
    cout << endl << "Informe a diagonal maior do losango: ";
    cin >> D;
    cout << endl << "Informe a diagonal menor do losango: ";
    cin >> d;
    cout << endl << "Area do losango: " << (D*d)/2;
}
void calcarea3(float &b,float &h){
    cout << endl << "Informe a base do triangulo: ";
    cin >> b;
    cout << endl << "Informe a altura do triangulo: ";
    cin >> h;
    cout << endl << "Area do triangulo: " << (b*h)/2;
}
