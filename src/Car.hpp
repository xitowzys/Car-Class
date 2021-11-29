//
//  Car.hpp
//  carClass
//
//  Created by George Kalinka on 19.11.2021.
//

#ifndef Car_hpp
#define Car_hpp

#include <iostream>

class Car {
private:

    // Модель автомобиля
    std::string model;
    // Цвет автомобиля
    std::string color;
    // Двигатель
    std::string engine;

    // Мощность автомобиля
    unsigned int power;

    // Объем бензина
    float gasolineVolume = .0f;

    // Год выпуска
    unsigned short yearRelease;

protected:
    Car(std::string model,
        std::string color,
        std::string engine,
        unsigned int power,
        unsigned short yearRelease);
public:

    void printSpecifications();

    // Завести автомобиль
    void runTransport();

    // Заглушить транспорт
    void stopTransport();

    // Заправить автомобиль
    void refuelTransport(float liters);

};

#endif /* Car_hpp */
