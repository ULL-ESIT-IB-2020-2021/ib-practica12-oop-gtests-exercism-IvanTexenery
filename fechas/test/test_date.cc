#include <gtest/gtest.h>

#include "fecha.h"
 
TEST(FechaTest, greater){
    Fecha d1{2020, 12, 1};
    Fecha d2{2020, 12, 2};
    Fecha d3{2020, 11, 1};

    EXPECT_EQ(true, d2 > d1);
    EXPECT_EQ(false, d3 > d1);
}

TEST(FechaTest, equal){
    Fecha d1{2020, 12, 1};
    Fecha d2{2020, 12, 1};

    Fecha d3{2020, 12, 2};
    Fecha d4{2020, 11, 1};
    Fecha d5{2019, 12, 1};

    EXPECT_EQ(true, d1 == d2);
    EXPECT_EQ(false, d1 == d3);
    EXPECT_EQ(false, d1 == d4);
    EXPECT_EQ(false, d1 == d5);
}
TEST(FechaTest, lower){
    Fecha d1{2020, 12, 1};
    Fecha d2{2020, 12, 2};
    Fecha d3{2020, 11, 1};

    EXPECT_EQ(false, d2 < d1);
    EXPECT_EQ(true, d3 < d1);
}
