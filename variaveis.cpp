#include <iostream>

using namespace std;

int main () {
    
    int vidas=0;
    char letra='B';
    char letras[20];// Texto com até 20 caracteres.
    double decimal=5.2;
    float decimal2=5.2;//Identico ao double, porem tem uma precisao menor.
    bool vivo=true;
    string nome="Pedro";

    cout << "Digite o número de vidas: ";
    cin >> vidas;//Ler o teclado e adicionar em vidas.
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> nome;

    cout <<"\nVidas: "<< vidas << "\nLetra: ";
    cout << letra << "\nDinheiro: ";
    cout << decimal << "\nVivo: ";
    cout << vivo << "\nNome: ";
    cout << nome << "\n";
    

    return 0;
}