#include "./summer.h"

#ifdef DEBUGKNNECT
#include <iostream>
#endif // DEBUGKNNECT
int addMe(int a , int b) {
	return a + b;
}


#ifdef DEBUGKNNECT
int debugger() {
	int debugCount = 129;
	std::cout << "Debug counter is = " << debugCount << std::endl;
	return debugCount;
}
#endif // DEBUGKNNECT
