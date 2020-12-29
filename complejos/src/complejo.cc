/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file complejo.cc
 * @author Iván Texenery Díaz García
 * @date 29/12/2020
 * @brief Código de la clase Complejo
 */
#include "complejo.h"

#include <iostream>

/**
 * Constructor de la clase Complejo.
 * Crea un número complejo a partir de su parte imaginaria y real.
 * @param[in] complex_part Parte compleja del número imaginario.
 * @param[in] real_part Parte real del número imaginario.
 */
Complejo::Complejo(int complex_part, int real_part) {
  complex_part_ = complex_part;
  real_part_ = real_part;
}
/**
 * Constructor por defecto.
 */
Complejo::Complejo() {
  complex_part_ = 0;
  real_part_ = 0;
}

/**
 * Realiza una suma de números complejos.
 * @param[in] complejo1 Primer número complejo de la suma.
 * @param[in] complejo2 Segundo número complejo de la suma.
 * @return Parte compleja y real del número complejo resultante.
 */
Complejo Complejo::Sum(Complejo complejo1, Complejo complejo2) {
  int result_complex{0};
  int result_real{0};

  result_complex = complejo1.GetComplexPart() + complejo2.GetComplexPart();
  result_real = complejo1.GetRealPart() + complejo2.GetRealPart();

  return Complejo{result_complex, result_real};
}

/**
 * Realiza una resta de números complejos.
 * @param[in] complejo1 Primer número complejo de la resta.
 * @param[in] complejo2 Segundo número complejo de la resta.
 * @return Parte compleja y real del número complejo resultante.
 */
Complejo Complejo::Subtract(Complejo complejo1, Complejo complejo2) {
  int result_complex{0};
  int result_real{0};

  result_complex = complejo1.GetComplexPart() - complejo2.GetComplexPart();
  result_real = complejo1.GetRealPart() - complejo2.GetRealPart();

  return Complejo{result_complex, result_real};
}

/**
 * Realiza una multiplicación de números complejos.
 * @param[in] complejo1 Primer número complejo de la multiplicación.
 * @param[in] complejo2 Segundo número complejo de la multiplicación.
 * @return Parte compleja y real del número complejo resultante.
 */
Complejo Complejo::Multiply(Complejo complejo1, Complejo complejo2) {
  int result_complex{0};
  int result_real{0};

  result_complex = (complejo1.GetRealPart() * complejo2.GetComplexPart()) +
                   (complejo1.GetComplexPart() * complejo2.GetRealPart());
  result_real = (complejo1.GetRealPart() * complejo2.GetRealPart()) -
                (complejo1.GetComplexPart() * complejo2.GetComplexPart());

  return Complejo{result_complex, result_real};
}

/**
 * Imprime en pantalla el número complejo resultante.
 */
void Complejo::Print() {
  if (real_part_ < 0) {
    std::cout << complex_part_ << "i " << real_part_ << std::endl;
  } else {
    std::cout << complex_part_ << "i + " << real_part_ << std::endl;
  }
}

/**
 * Métodos para obtener los miembros de la clase Complejo.
 */
int Complejo::GetComplexPart() { return complex_part_; }
int Complejo::GetRealPart() { return real_part_; }