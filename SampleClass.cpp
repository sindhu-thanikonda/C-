// Basic Class, Object & functional call

#include<iostream>
using namespace std;

class Sample
{
private:
  int sum;
public:
  float add(int n1, int n2)
  {
    sum = n1 + n2;
    return sum;
  }
};

int main()
{
  Sample s1; // Creating Object Reference to Sample Class as S1 
  float final;
  final = s1.add(5,4); // Calling Sample Class add() 
  cout << "Total Sum: " << final << endl;
  return 0;
}
