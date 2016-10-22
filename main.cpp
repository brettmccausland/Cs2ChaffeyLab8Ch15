#include <iostream>
#include <vector>
using namespace std;
void Exercises15_1();
void Exercises15_2();
void Exercises15_3();
void Exercises15_5();

int main()
{
  system("clear");



  return 0;
}
void Exercises15_1()
{
  // Predict what the output will be in the following program,
  // then test your prediction. Explain at what point in execution
  // each message is generated.
  // void f(Trace t)
  // {
  //    cout << "Entering f \n";
  // }
  // int main()
  // {
  //    Trace tracer("main");
  //    f(tracer);
  //  }
}
void Exercises15_2()
{
  //  Extend the class Trace with a copy constructor and an assignment
  //  operator, printing a short message in each.
  //  Use this class to demonstrate
   //
  //  a.the difference between initialization
  //                 Trace t("abc");
  //                 Trace u = t;
   //
  //                 and assignment.
  //                 Trace t("abc");
  //                 Trace u("xyz");
  //                 u = t;
  //  b. the fact that all constructed objects are automatically destroyed.
  //  c. the fact that the copy constructor is invoked if an object is passed
  //     by value to a function.
  //  d. the fact that the copy constructor is not invoked when a parameter is
  //     passed by reference.
  //  e. the fact that the copy constructor is used to copy a return value to the caller.
}
void Exercises15_3()
{
  // Continue the implementation of the String class.
  // Add each of the following:
  // • A constructor String(int n, char c)that initializes the string
  //   with n copies of the character c.
  // • The + operator to perform concatenation of two String objects.
  // • A member function compare(String) that returns –1, 0, or 1
  //   depending upon whether the string is lexicographically less than,
  //   equal to, or greater than the argument. Then, using this member
  //   function, provide definitions for the comparison operators
  //   <, <=, ==, !=, >, and >=.
  // • A function resize(int n, char c)that changes the size of the
  //   string to n,either truncating characters from the end, or inserting
  //   new copies of character c.
  // • The function call operator, so that
  //   s(int start, int length) returns a substring starting at the given
  //   position of the given size.
}
void Exercises15_5()
{
  // Define class Set that stores integers in a
  // dynamically allocated array of integers.
  //              class Set
  //              {
  //                 public:
  //                 void add(int n);
  //                 bool contains(int n) const;
  //                 int get_size() const;
  //
  //                 private:
  //                   int* elements;
  //                   int size;
  //               };
  // In a set, the order of elements does not matter, and every element
  // can occur at most once.Supply the add, contains, and get_size
  // member functions and the “big three” memory management functions.
}
