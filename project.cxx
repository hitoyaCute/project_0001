#include <iostream>

int main(){
  while (true){
    float cm;
    std::cout << "convert cm to m\nplease enter a whole number:";
    
    if (!(std::cin >> cm))
        break;
    std::cout << cm << '\n';
    float m = cm/100;
    std::cout << "\nresult is:" << m << "\ntype 0 to exit and this ";
  }
}
