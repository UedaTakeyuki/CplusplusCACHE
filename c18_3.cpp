#include <string>
#include <iostream>
#include <sstream>

int main(){
	double pi = 3.141592;
	std::string outputString;
	std::ostringstream outStr(outputString);
	outStr.precision(5);
	outStr << "pi=" << pi << ", ";
	outStr << "sci pi =" << std::scientific << pi;
	std::cout << outStr.str() << std::endl;
	return 0;
}