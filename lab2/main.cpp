#include "pentagon.h"
#include "tstack.h"

void menu(){
  std::cout << "Select an action" << std::endl;
  std::cout << "1) Print the top element" << std::endl;
  std::cout << "2) Remove an item from the stack" << std::endl;
  std::cout << "3) Print items from the stack" << std::endl;
  std::cout << "4) Clear the stack" << std::endl;
  std::cout << "5) Add an item to the stack" << std::endl;
  std::cout << "6) Print the stack length" << std::endl;
  std::cout << "7) Is the stack empty?" << std::endl;
  std::cout << "8) End the program" << std::endl;
}

int main() {
  std::cout.setf(std::ios_base::boolalpha);
  TStack s = TStack();
  char k = 'y';
  menu();
  std::cin >> k;
  while (k != EOF) {
    switch (k) {
      case '1': {
        if(!s.Empty()) std::cout << s.Top() << std::endl;
        else std::cout << std::endl;
        break;
      }
      case '2': s.Pop();
        break;
      case '3': std::cout << s << std::endl;
        break;
      case '4': s.Clear();
        break;
      case '5': s.Push(Pentagon(std::cin));
        break;
      case '6':std::cout << s.Length() << std::endl;
        break;
      case '7':std::cout << (bool)s.Empty() << std::endl;
        break;
      case '8': {
        std::cout << "Have a nice day!" << std::endl;
        return 0;
      }
      default: std::cout << "Input error! Enter a number from the suggested menu!" << std::endl;
        break;
    }
    menu();
    std::cin >> k;
  }
  return 0;
}