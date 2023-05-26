
#ifndef MUSICA_HPP
#define MUSICA_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

class Musica {
  private:
    int Id;
    string Titulo;
    int Ano;
    string Autor;
  public:
    //Construtores
    Musica();
    Musica(int Id, string Titulo, string Autor, int Ano);

    //Metodos
    int getId(void);
    void setId(int id);

    int getAno(void);
    void setAno(int ano);

    string getAutor(void);
    void setAutor(string autor);

    string getTitulo(void);
    void setTitulo(string titulo);

    string toString(void);

  
};


#endif 