#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main(){
    
    list<string> list1;

    ifstream file;

    // Arquivo com textos pré colocados
    file.open("MyFile.txt");
    string line;

    // Leitura do arquivo e adição de seus elementos em uma lista
    while(getline(file, line)){
        list1.push_back(line);
    }

    for(auto i : list1){
        cout << line << endl;
    }

    
}