#include <iostream>

using std::cout;
using std::cin;

int media(int, int);
int main(int argc, char const *argv[])
{
    //Essa função calcula a média entre duas notas fornecidas pelo usuário e informa se ele foi 
    //aprovado ou não. A conveção de média para aprovação adotada foi igual a 5.
    int nota1; int nota2; int nota_geral;

    cout<<"Digite a nota 1 = \n";
    cin>>nota1;

    cout<<"Digite a nota 2 = \n";
    cin>>nota2;

    nota_geral = media(nota1, nota2);

    if (nota_geral < 5){
        cout<<"Voce esta reprovado :(";
    } else{
        cout<<"Voce esta aprovado, parabens :)";
    }
   
}

int media(int nota1, int nota2){
    return (nota1 + nota2)/2;
}
