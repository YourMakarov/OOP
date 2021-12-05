#include <iostream>
#include "time.h"
#include <fstream>


int main() {
  // Нужно указывать абсолютный путь к файлу...
    std::ifstream file("test_01.txt");
    int size;
    TimePoint n(12,24,60);
    file >> size;
    int count;
    TimePoint m;
    for(int i = 0; i < size; i++){
        file >> m;
            std::cout << "\nSourse data"<< std::endl << m.sec();
            std::cout << "\nSourse data"<< std::endl << m.min();
            m = m + n;
            std::cout << "\n+ 12.25.60"<< std::endl << m.min();
            m = m - n;
            std::cout << "\n- 12.25.60"<< std::endl << m.min();
            m = m / n;
            std::cout << "\n/12.25.60"<< std::endl << m.min();
        } 
    
return 0;
} 