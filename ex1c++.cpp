// ex1c++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cassert>


using namespace std;

float calc_f(float x, float y, float r) {
    float g= 6.67e-11;

    return (g * (x * y) / (pow(r, 2)));

}

int main()
{
    cout << calc_f(5.972e24, 100, 6371000);
    assert(fabs(calc_f(5.972e24,100,6371000) - 981.365) < FLT_EPSILON*10000);

    assert(fabs(calc_f(3,7,4.7) - 6.34088e-11) < FLT_EPSILON);

    assert(fabs(calc_f(8,6.1,6) - 9.04156e-11) < FLT_EPSILON*10000);

    return 0;
}

