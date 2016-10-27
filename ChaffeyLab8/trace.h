#ifndef TRACE
#define TRACE
#include <iostream>
#include <string>

using namespace std;

class Trace
{
public:
   Trace(string n);
   ~Trace();
private:
   string name;
};

Trace::Trace(string n) : name(n)
{
   cout << "Entering " << name << "\n";
}

Trace::~Trace( )
{
   cout << "Exiting " << name << "\n";
}
#endif // TRACE

