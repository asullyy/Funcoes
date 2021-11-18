#include <iostream>

using namespace std;

int soma (int x1, int x2){
    int soma;
    soma = x1 + x2;
    return soma;
}

int multiplicacao (int x1, int x2){
    int mult;
    mult = x1 * x2;
    return mult;
}

int main(int argc, char const *argv[])
{
    //Na função 1 faremos a soma ou a multiplicação de dois números fornecidos pelo usuário;

    int x1; int x2; int op; // variaveis: x1 = numero 1; x2 = numero 2; op = operação;

    cout<< "Digite o primeiro numero: \n";
    cin>>x1;

    cout<<"Digite o segundo numero: \n";
    cin>>x2;

    cout<<"Digite o codigo da operacao que deseja realizar\n";
    cout<<"1 - soma\n2 - multiplicacao\n";
    cin>>op;
    
    if(op == 1){
        int sum;
        sum = soma(x1,x2);
        cout<<sum;
    };

    if(op == 2){
        int mult;
        mult = multiplicacao(x1,x2);
        cout<<mult;
    }
    

}