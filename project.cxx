#include <iostream>

int main() {
	while (true) {
	    float cm;
	    std::cout << "convert cm to m\ntype a number:";
	    if (!(std::cin >> cm) or cm == 0) {
	        break;
	    }
	    float m = cm/100;
	    std::cout << "the conversation of '" << cm << "' to m is \n" << m << "\n";
	}
}