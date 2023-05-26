#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "memory"
#include "Musica.hpp"
#include "Gerenciador.hpp"

using namespace std;

Gerenciador::Gerenciador(string path){
  ifstream musica_file {path};

    if( musica_file.is_open() ){ // file está aberto e pronto para processamento?
        string line{};
        while( !musica_file.eof() ){
            getline( musica_file, line );
            shared_ptr<Musica> a = createMusicaFromLine( line, ';' );
            Musicas.emplace_back( a );
        }
  
  }
}


shared_ptr<Musica> Gerenciador::createMusicaFromLine(string line, const char delimiter ) {
    string str_parte{};
    stringstream ss(line ) ; // um objeto auxiliar para referenciar a linha
    vector<string> vec_partes;

    while ( getline(ss, str_parte, delimiter ) ){
        vec_partes.emplace_back( str_parte );
    }
    
    return make_shared<Musica>(stoi(vec_partes.at(0)), vec_partes.at(1), vec_partes.at(2), stoi(vec_partes.at(3)));
  }

bool Gerenciador::buscarMusicaPorID(int ID){
  for( shared_ptr<Musica> each : Musicas ){
    if(each->getId() == ID){
      return true;
    }
  } 
  return false;
}

bool Gerenciador::cadastrarMusica(int ID, string Titulo, string Autor, int Ano){
  if(buscarMusicaPorID(ID)){
    return false;
  }
  Musica musAux(ID, Titulo, Autor, Ano);
  shared_ptr<Musica> ptrMus = make_shared<Musica>(musAux);
  Musicas.emplace_back(ptrMus);
  return true;
}


shared_ptr<Musica> Gerenciador::getMusica(int ID){
  for( shared_ptr<Musica> each : Musicas ){
    if(each->getId() == ID){
      return each;
    }
  } 
  return NULL;
  
}

void Gerenciador::listarMusicasTerminal(){
  for( shared_ptr<Musica> each : Musicas ){
    cout << each->toString() << endl;
  }
}
