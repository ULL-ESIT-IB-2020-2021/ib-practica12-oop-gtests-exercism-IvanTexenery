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

  static Complejo Sum(Complejo complejo1, Complejo complejo2);
  static Complejo Subtract(Complejo complejo1, Complejo complejo2);
  static Complejo Multiply(Complejo complejo1, Complejo complejo2);

  void Print();
  int GetComplexPart();
  int GetRealPart();
};

#endif
