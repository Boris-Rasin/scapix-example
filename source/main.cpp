#include <iostream>
#include "person.h"

using namespace std;

int main()
{
  cout << "Hello World!" << endl;

  auto joe = std::make_shared<Person>("Joe");
  joe->SpeakName();

  return 0;
}
