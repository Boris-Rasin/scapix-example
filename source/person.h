#include <string>
#include <scapix/bridge/object.h>

class Person : public scapix::bridge::object<Person>
{
private:
  string name;
public:
    Person(string name);
    void SpeakName();
};
