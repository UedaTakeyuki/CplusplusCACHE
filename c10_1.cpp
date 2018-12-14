#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ifstream reader("a.txt");
  while (reader.good()){
    string temp;
    getline(reader, temp);
    cout << temp << endl;
  }
  reader.close();
  return 0;
}
