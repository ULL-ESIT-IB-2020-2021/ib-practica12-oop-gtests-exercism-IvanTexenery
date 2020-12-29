/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file fechas_main.cc
 * @author Iván Texenery Díaz García
 * @date 24/12/2020
 * @brief El programa deberá imprimir en el fichero de salida (segundo
 * parámetro) todas las fechas que se encuentran en el fichero de entrada pero
 * escritas en orden ascendente cronológicamente.
 */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include<algorithm>

#include "fecha.h"
#include "funciones_fecha.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string my_infile{argv[1]};
  std::string my_outfile{argv[2]};
  std::ifstream infile(my_infile, std::ifstream::in);
  std::ofstream outfile(my_outfile, std::ofstream::out);
  std::vector<Fecha> dates{};

  for (std::string line; std::getline(infile, line);) {
    dates.emplace_back(Fecha{line});
  }
  std::sort(dates.begin(), dates.end());

  for(auto date:dates){
    outfile << date << std::endl;
  }

  return 0;
}