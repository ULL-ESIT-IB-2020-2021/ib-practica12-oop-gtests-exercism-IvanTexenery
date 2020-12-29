/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file fecha.cc
 * @author Iván Texenery Díaz García
 * @date 24/12/2020
 * @brief Código de la clase Fecha
 */
#include "fecha.h"

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

/**
 * Constructor de la clase Fecha.
 * Crea un objeto fecha.
 * @param[in] date String de la que sacar los miembros de clase.
 */
Fecha::Fecha(std::string date) {
  std::string day_str{date.substr(0, 2)};
  std::string month_str{date.substr(3, 2)};
  std::string year_str{date.substr(6, 2)};

  day_ = std::stoi(day_str);
  month_ = std::stoi(month_str);
  year_ = std::stoi(year_str);
}

/**
 * Comprueba si un año es bisiesto o no.
 * @return true o false según si el año es bisiesto o no.
 */
bool Fecha::LeapYear() {
  if (year_ % 4 == 0) {
    if (year_ % 100 == 0) {
      if (year_ % 400 == 0) {
        return true;
      } else {
        return false;
      }
    } else {
      return true;
    }
  } else {
    return false;
  }
}

// Operador de inserción sobrecargado.
std::ostream &operator<<(std::ostream &out, const Fecha &date) {
  out << date.day() << "/" << date.month() << "/" << date.year();
  return out;  // Devuelve std::ostream para que podamos encadenar llamadas al
               // operator<<.
}

/**
 * Convierte una Fecha en string.
 * @param[in] date Objeto fecha para convertir a string.
 */
std::string ToString(const Fecha date) {
  std::string resultado{""};
  std::stringstream os;

  // resultado = resultado + date.day() + "/" + date.month() + "/" +
  // date.year();
  os << date.day() << "/" << date.month() << "/" << date.year();
  os >> resultado;

  return resultado;
}

/**
 * Retorna si dos fechas son iguales.
 * @param[in] date1 Primera fecha que queremos comparar con la siguiente.
 * @param[in] date2 Segunda fecha.
 * @return true o false según las fechas sean iguales o no.
 */
bool operator==(const Fecha &date1, const Fecha &date2) {
  return (date1.day() == date2.day() && date1.month() == date2.month() &&
          date1.year() == date2.year());
}

/**
 * Retorna si la primera fecha es mayor que la segunda.
 * @param[in] date1 Primera fecha que queremos comparar con la siguiente.
 * @param[in] date2 Segunda fecha.
 * @return true o false según la primera fecha sea mayor que la segunda.
 */
bool operator>(const Fecha &date1, const Fecha &date2) {
  if (date1.year() > date2.year()) {
    return true;
  }
  if ((date1.year() == date2.year()) && (date1.month() > date2.month())) {
    return true;
  }
  if ((date1.year() == date2.year()) && (date1.month() == date2.month()) &&
      (date1.day() > date2.day())) {
    return true;
  }
  return false;
}

/**
 * Retorna si la primera fecha es menor que la segunda.
 * @param[in] date1 Primera fecha que queremos comparar con la siguiente.
 * @param[in] date2 Segunda fecha.
 * @return true o false según la primera fecha sea menor que la segunda.
 */
bool operator<(const Fecha &date1, const Fecha &date2) {
  if (date1.year() < date2.year()) {
    return true;
  }
  if ((date1.year() == date2.year()) && (date1.month() < date2.month())) {
    return true;
  }
  if ((date1.year() == date2.year()) && (date1.month() == date2.month()) &&
      (date1.day() < date2.day())) {
    return true;
  }
  return false;
}
