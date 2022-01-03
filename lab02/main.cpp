#include <iostream>
#include "time.h"
#include <fstream>


int main() {
  // Нужно указывать абсолютный путь к файлу...
    std::ifstream file("test_01.txt");
    int size;
    TimePoint n = 1_sec;
    file >> size;
    int count;
    TimePoint m;
    for(int i = 0; i < size; i++){
        file >> m;
            std::cout << "\nSourse data"<< std::endl << m.sec();
            m = m + n;
            std::cout << "\n+ 00.00.1"<< std::endl << m.sec();
            m = m - n;
            std::cout << "\n- 00.00.1"<< std::endl << m.sec();
            int t = m / n;
            std::cout << "\n/00.00.1"<< std::endl << t;
        } 
    
return 0;
} 