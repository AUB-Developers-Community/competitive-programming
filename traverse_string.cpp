#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str = "hello";
  
  for (int i=0; i<str.length(); i++)
  {
      cout << str[i] << " ";
  }
  
  return 0;
}

// output: h e l l o
