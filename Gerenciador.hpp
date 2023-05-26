
#ifndef GERENCIADOR_CPP
#define GERENCIADOR_CPP

#include "memory"
#include <vector>
#include "Musica.hpp"

using namespace std;

class Gerenciador {
  private:
    vector<shared_ptr<Musica>> Musicas;
  public:
    Gerenciador(string path);

    bool buscarMusicaPorID(int ID);

    bool cadastrarMusica(int ID, string Titulo, string Autor, int Ano);

    shared_ptr<Musica> getMusica(int Id);

    void listarMusicasTerminal();

    shared_ptr<Musica> createMusicaFromLine(string line, const char delimiter );

};


#endif 