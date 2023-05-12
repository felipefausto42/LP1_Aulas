#include <iostream>

using namespace std;

class Veiculo{
  protected:  
    string modelo;
    string placa;

  // Public para ser acessado na main
  public:
    void acelerar(){
      cout << "AAAAAAAAAAAA TÔ CORRENDO (Veículo)" << endl;
    }
    void frear(){
      cout << "PARA ESSA MERDA" << endl;
    }
    ~Veiculo(){ // Destrutor
 
    }
};

class Carro : public Veiculo{
  public:  
    void setModelo(string modelo){
      this -> modelo = modelo;
    }
    string getModelo(){
      return this -> modelo;
    }
    void acelerar(){ // Polimorfismo 
      cout << "AAAAAAAAAAAA TÔ CORRENDO (Carro)" << endl;
    }
};

class Moto : public Veiculo{
  public:  
    void setModelo(string modelo){
      this -> modelo = modelo;
    }
    string getModelo(){
      return this -> modelo;
    }  
    void acelerar(){ // Polimorfismo 
      cout << "AAAAAAAAAAAA TÔ CORRENDO (Moto)" << endl;
  }
};

int main() {
  Carro Civic;
  Civic.setModelo("Civic");
  cout << Civic.getModelo() << endl;
  Civic.acelerar();
  Civic.frear();
  
  Moto *POP100 = new Moto; // Criação na heap
  POP100->setModelo("POP 100"); // -> Serve para trabalhar com ponteiros
  cout << Civic.getModelo() << endl;
  POP100->acelerar();
}