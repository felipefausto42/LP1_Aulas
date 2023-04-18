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

    string search = "CORINTHIANS";

    for(auto i : list1){
        string temp = i;
        temp = temp.substr(0, i.length() -1);
        // Comparação de duas strings
        if(i.compare(search) == 0){
            cout << "Text found on position" << i << endl;
        }else{
            cout << "Text not found" << endl;
        }
    }
}