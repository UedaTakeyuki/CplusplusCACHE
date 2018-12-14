#include <string>
#include <sstream>
#include <iostream>
int main () {
  double d_value = 0.0;
  int i_value = 0;

  std::string str1("7.045 ");
  std::string str2("12345 ");

  std::istringstream inStr(str1);

  inStr >> d_value; // Collect a double value
  inStr.seekg(0); // Reset the string to be re-read
  inStr >> i_value; // Collect an int value

  std::cout << "First String Stream:" << std::endl;
  std::cout << "d_value=" << d_value << std::endl;
  std::cout << "i_value=" << i_value << std::endl << std::endl;

  inStr.str(str2);

  inStr >> d_value; // Collect a double value
  inStr.seekg(0); // Reset the string to be re-read
  inStr >> i_value; // Collect an int value

  std::cout << "Sirst String Stream:" << std::endl;
  std::cout << "d_value=" << d_value << std::endl;
  std::cout << "i_value=" << i_value << std::endl << std::endl;

  return 0;
}
