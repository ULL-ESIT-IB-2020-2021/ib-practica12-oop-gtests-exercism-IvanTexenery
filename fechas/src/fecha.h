/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file fecha.h
 * @author Iván Texenery Díaz García
 * @date 24/12/2020
 * @brief Declaración de la clase Fecha
 */
#ifndef DATE_H
#define DATE_H
#include <string>

class Fecha {
 private:
  int year_{};
  int month_{};
  int day_{};

 public:
  Fecha(int year = 2000, int month = 1, int day = 1)
      : year_{year}, month_{month}, day_{day} {}
  Fecha(std::string date);

  int year() const { return year_; }
  int month() const { return month_; }
  int day() const { return day_; }

  friend std::ostream &operator<<(std::ostream &out, const Fecha &date);
  friend bool operator==(const Fecha &d1, const Fecha &d2);
  friend bool operator>(const Fecha &d1, const Fecha &d2);
  friend bool operator<(const Fecha &d1, const Fecha &d2);
  bool LeapYear();
};

std::string ToString(const Fecha $date);

#endif
