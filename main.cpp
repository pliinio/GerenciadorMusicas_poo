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

int main() {
  Gerenciador ger("musicas.txt");
  ger.cadastrarMusica(9999, "teste", "Plinio", 2023);
  ger.listarMusicasTerminal();
  cout << "    " << endl;
  cout << ger.buscarMusicaPorID(9999) << endl;
  cout << ger.buscarMusicaPorID(8888) << endl;
  cout << ger.getMusica(9999);
}