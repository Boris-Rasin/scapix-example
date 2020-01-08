#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person(string name) {
  this->name = name;
}

void Person::SpeakName() {
  cout << "My name is : " << this->name << endl;
}
