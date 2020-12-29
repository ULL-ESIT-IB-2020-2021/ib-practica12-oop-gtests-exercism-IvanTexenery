/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file complejo_main.cc
 * @author Iván Texenery Díaz García
 * @date 29/12/2020
 * @brief Desarrolle un programa cliente complejos.cc que permita operar con
 * números complejos y haga uso de la clase Complejo que diseñe. La clase
 * Complejo ha de contener al menos métodos que permitan (Print()) imprimir un
 * número complejo así como sumar (Add()) y restar (Sub()) números complejos.
 */
#include <iostream>

#include "complejo.h"

int main() {
  Complejo complejo1{1, 2}, complejo2{3, 6};
  Complejo result;

  result = Complejo::Sum(complejo1, complejo2);
  result.Print();
  result = Complejo::Subtract(complejo1, complejo2);
  result.Print();
  result = Complejo::Multiply(complejo1, complejo2);
  result.Print();

  return 0;
}