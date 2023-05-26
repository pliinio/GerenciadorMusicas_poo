#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
#include "Musica.hpp"
using namespace std;

Musica::Musica()
  : Musica(000, "--SEM_TITULO--", "--SEM_AUTOR--", 0000){
    
  }

Musica::Musica(int Id, string Titulo, string Autor, int Ano){
  setId(Id);
  setTitulo(Titulo);
  setAutor(Autor);
  setAno(Ano);
}

int Musica::getId(void){
  return Id;
}
void Musica::setId(int id){
  if(id!=0){
    Id = id;
  }
}

int Musica::getAno(void){
  return Ano;
}
void Musica::setAno(int ano){
  if(ano!=0){
    Ano = ano;
  }
}

string Musica::getAutor(void){
  return Autor;
}
void Musica::setAutor(string autor){
  if(!autor.empty()){
    Autor = autor;
  }
}

string Musica::getTitulo(void){
  return Titulo;
}

void Musica::setTitulo(string titulo){
  if(!titulo.empty()){
    Titulo = titulo;
  }
}

string Musica::toString(){
  
  string aux {"Id : "};
  return
        aux.append(to_string(this->Id))
           .append(", Titulo : ")
           .append(this->Titulo)
           .append(", Autor : ")
           .append(this->Autor)
           .append(", Ano : ")
           .append(to_string(this->Ano));
  
}