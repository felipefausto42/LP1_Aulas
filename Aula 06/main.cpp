#include <iostream>
#include <fstream>

using namespace std;

int main(){

    // Criação da variável que receberá um arquivo apenas com write
    ofstream file;
    file.open("MyFile.txt", ios::app);
    // Com o ios:app, é possível guardar informações de outras runs

    // Loop da inserção de músicas
    while(true){
        char choice;
        cout << "Sim ou Não porra? ";
        
        // O cin tem uma limitação de salvar apenas o que vem antes de um espaço
        cin >> choice;
        if(choice == 's' || choice == 'S'){
            string nameMSC;
            //cin >> nameMSC
            cin.ignore();
            // O getline, junto com o ignore, resolve o problema do cin
            getline(cin, nameMSC);
            cout << nameMSC << endl;
            file << nameMSC << endl;
        }else{
            break;
        }
    }

    // Passando informações de texto para file.txt
    file << "SALVE" << endl;
    file << "O" << endl;
    file << "CORINTHIANS" << endl;
}