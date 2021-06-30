#include <iostream>
#include <sstream>
#include <stdio.h>
#include <iomanip>


int main(){
  std::cout << "Speedometer" << std::endl;
  double speed;
  double delta;
  std::stringstream speedometer;

  do {
    std::cin >> delta;
    speed += delta;

    if(speed > 150){
      std::cout << "Reduce the speed" << std::endl;
    }
    speedometer << std::fixed << std::setprecision(1) << speed << " km/h ";

    std::cout << speedometer.str() <<  " " << std::endl;
    speedometer.str("");
  }while(speed > 0);
  
  return 0;
}


// Спидометр

// Что нужно сделать

// Надо реализовать цифровой спидометр автомобиля. 
// Сама модель автомобиля, которую нужно будет воссоздать 
// весьма проста. Начальная скорость - 0 км/ч. 
// Пользователь вводит в стандартный ввод разницу 
// (дельту) в скорости и результирующая скорость 
// показывается на спидометре в стандартный вывод. 
// Так происходит до той поры, пока машина снова 
// не остановится, т.е. пока скорость не станет 
// меньше или равна нулю (сравнение должно происходить 
// с дельтой в 0.01). Диапазон возможных значений 
// скорости машины от 0 до 150 км/ч. Сам показатель 
// спидометра, вместе с единицами измерения, 
// требуется записывать в отдельную строку-буфер, 
// которая потом и будет показываться на экране. 
// Точность отображения скорость до 0.1 км/ч.