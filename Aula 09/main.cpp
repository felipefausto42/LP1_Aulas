#include <iostream>
#include <vector>

using namespace std;

class Pessoa{
  string nome;
  string cpf;
  int matricula;
  float salario;

  public:

  Pessoa(){
    
  }

  Pessoa(string nome, string cpf, int matricula, float salario){
    this -> nome = nome;
    this -> cpf = cpf;
    this -> matricula = matricula;
    this -> salario = salario;
  }
  
  string getNome(){
    return this -> nome;
  }
  
  void setNome(string nome){
    this -> nome = nome;
  }
  
  string getCPF(){
    return this -> cpf;
  }
  
  void setCPF(string cpf){
    this -> cpf = cpf;
  }
  
  int getMatricula(){
    return this -> matricula;
  }
  
  void setMatricula(int matricula){
    this -> matricula = matricula;
  }

  float getSalario(){
    return this -> salario;
  }

  void setSalario(float salario){
    this -> salario = salario;
  }
  
};

class Empresa{
  string nomeEmpresa;
  string cnpj;
  Pessoa *funcionarios = new Pessoa[10];
  vector<Pessoa> funcionario;
  Pessoa funcionarioss[10];
  int cont = 0;

  public:

  Empresa(string nomeEmpresa, string cnpj){
    this -> nomeEmpresa = nomeEmpresa;
    this -> cnpj = cnpj;
  }

  void inserirFuncionario(string nome, string cpf, int matricula, float   salario){
    if(cont < 10){
      funcionarios[cont].setNome(nome);
      funcionarios[cont].setCPF(cpf);
      funcionarios[cont].setMatricula(matricula);
      funcionarios[cont].setSalario(salario);
      cont++;
    
    }else{
      cout << "AAAAAAAAAAAAAAAAA TIRA";
    }
  }

  void listarFuncionarios(){
    for(int i = 0; i < cont; i++){
      cout << "Nome: " << funcionarios[i].getNome() << endl;
      cout << "CPF: " << funcionarios[i].getCPF() << endl;
      cout << "Matrícula: " << funcionarios[i].getMatricula() << endl;
      cout << "Salário: " << funcionarios[i].getSalario() << endl;
      cout << "=====================\n";
    }
  }

  float calcularSalarios(){
    float soma = 0;
    for(int i = 0; i < cont; i++){
      soma += funcionarios[i].getSalario();
    }
    return soma;
  }
};

int main() {
  Empresa *imd = new Empresa("imd", "12.345.678/1234-56");
  imd -> inserirFuncionario("Simba", "123.456.789-10", 2022069, 0.00);
  imd -> inserirFuncionario("Bruce", "124.456.789-10", 2022070, 15000.00);

  float salarios = imd -> calcularSalarios();


  imd->listarFuncionarios();
  cout << "\nSalários: " << salarios; 
  
  return 0;
}