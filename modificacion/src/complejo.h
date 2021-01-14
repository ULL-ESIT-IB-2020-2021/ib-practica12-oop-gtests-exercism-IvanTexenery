/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file complejo.h
 * @author Iván Texenery Díaz García
 * @date 29/12/2020
 * @brief Declaración de la clase Complejo
 */
#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo {
 private:
  int complex_part_{0};
  int real_part_{0};

 public:
  Complejo(int complex_part, int real_part);
  Complejo();

  static Complejo Sum(Complejo complex_number1, Complejo complex_number2);
  static Complejo Subtract(Complejo complex_number1, Complejo complex_number2);
  static Complejo Multiply(Complejo complex_number1, Complejo complex_number2);

  void Print();
  friend Complejo operator*(Complejo complex_number1, int real_number);
  int GetComplexPart();
  int GetRealPart();
};

#endif
