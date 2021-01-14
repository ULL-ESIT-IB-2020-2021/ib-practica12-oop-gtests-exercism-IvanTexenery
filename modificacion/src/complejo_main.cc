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
  Complejo complex_number1{1, 2}, complex_number2{3, 6};
  Complejo result;

  result = Complejo::Sum(complex_number1, complex_number2);
  result.Print();
  result = Complejo::Subtract(complex_number1, complex_number2);
  result.Print();
  result = Complejo::Multiply(complex_number1, complex_number2);
  result.Print();
  result = complex_number1 * 3;
  result.Print();

  return 0;
}