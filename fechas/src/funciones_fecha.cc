/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file funciones_fecha.cc
 * @author Iván Texenery Díaz García
 * @date 24/12/2020
 * @brief Funciones del programa principal
 */
#include "funciones_fecha.h"

#include <iostream>
#include <string>

/**
 * Controla que los parámetros que se le pasan a la funcion main sean correctos.
 * @param Cantidad de parámetros introducidos, array de caracteres con los
 * argumentos introducidos.
 */
void Usage(int argc, char *argv[]) {
  const std::string kHelpText =
      "  Introduzca ./fechas junto con el nombre del fichero de entrada  \n\
  y el nombre del fichero de salida en el que desea escribir las fechas  \n\
  ordenadas cronológicamente en orden ascendente, de la forma:\n\
  ./fechas fichero_entrada.txt fichero_salida.txt ";

  if (argc != 3) {
    if (argc == 2) {
      std::string parameter{argv[1]};
      if (parameter == "--help") {
        std::cout << kHelpText << std::endl;
        exit(EXIT_SUCCESS);
      } else {
        std::cout
            << argv[0]
            << " Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt"
            << std::endl;
        std::cout << "Pruebe " << argv[0] << " --help para más información"
                  << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    std::cout << argv[0]
              << " Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt"
              << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información"
              << std::endl;
    exit(EXIT_SUCCESS);
  }
}