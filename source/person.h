#include <scapix/bridge/object.h>

using namespace std;

class Person : public scapix::bridge::object<Person>
{
private:
  string name;
public:
    Person(string name);
    void SpeakName();
};
