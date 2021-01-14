/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado de Ingeniería Informática
 * Informática Básica
 * @file text_complex.h
 * @author Iván Texenery Díaz García
 * @date 29/12/2020
 * @brief Test de google tests.
 */
#include <gtest/gtest.h>

#include "complejo.h"
 
TEST(ComplejoTest, sum){
    Complejo c1{2, -4};
    Complejo c2{2, 2};
    Complejo c3{Complejo::Sum(c1, c2)};
    Complejo c4{3, 8};
    Complejo c5{-7, -6};
    Complejo c6{Complejo::Sum(c4, c5)};

    EXPECT_EQ(true, c3.GetComplexPart() == 4);
    EXPECT_EQ(true, c3.GetRealPart() == -2);
    EXPECT_EQ(false, c6.GetComplexPart() == 4);
    EXPECT_EQ(false, c6.GetRealPart() == -2);
}

TEST(ComplejoTest, subtract){
    Complejo c1{2, -4};
    Complejo c2{2, 2};
    Complejo c3{Complejo::Subtract(c1, c2)};
    Complejo c4{3, 8};
    Complejo c5{-7, -6};
    Complejo c6{Complejo::Subtract(c4, c5)};

    EXPECT_EQ(true, c3.GetComplexPart() == 0);
    EXPECT_EQ(true, c3.GetRealPart() == -6);
    EXPECT_EQ(false, c6.GetComplexPart() == 4);
    EXPECT_EQ(false, c6.GetRealPart() == -2);
}

TEST(ComplejoTest, multiply){
    Complejo c1{2, -4};
    Complejo c2{2, 2};
    Complejo c3{Complejo::Multiply(c1, c2)};
    Complejo c4{3, 8};
    Complejo c5{-7, -6};
    Complejo c6{Complejo::Multiply(c4, c5)};

    EXPECT_EQ(true, c3.GetComplexPart() == -4);
    EXPECT_EQ(true, c3.GetRealPart() == -12);
    EXPECT_EQ(false, c6.GetComplexPart() == 4);
    EXPECT_EQ(false, c6.GetRealPart() == -2);
}



