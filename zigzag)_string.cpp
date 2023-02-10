#include <iostream>
#include <string>

using namespace std;


string zigzag_method_one(string st, int n)
{
    if (n <= 1)
    {
        return st;
    }
    
    string zigzag_format_string = "";
    for (int row=0; row<n; row++)
    {
        int i = row;
        bool isUp=true;
        
        while (i < st.length())
        {
            zigzag_format_string += st[i];
            
            if (row == 0 || row == n-1)
            {
                i += (2 * n - 2);
            }
            else
            {
                if (isUp)
                {
                    i += (2 * (n - row) - 2);
                }
                else
                {
                    i += row * 2;
                }
                isUp ^= true;
            }
        }
    }
    
    return zigzag_format_string;
}



void zigzag_method_two(string str, int user_row)
{
  if (user_row == 1)
  {
    cout << str;
    return;
  }
  int len = str.length();
  string arr[user_row];
  int initial_row = 0;
  bool isDown;
  
  for (int i=0; i<len; i++)
  {
    arr[initial_row].push_back(str[i]);
    
    if (initial_row == user_row-1)
    {
      isDown = false;
    }
    
    else if (initial_row == 0)
    {
      isDown = true;
    }
    
    (isDown)? (initial_row++): (initial_row--);
  }
  
  for (int i=0; i<user_row; i++)
  {
    cout << arr[i];
  }
}

int main()
{
  string str = "GEEKSFORGEEKS";
  int row = 3;
  
  cout << zigzag_method_one(str, row);
  zigzag_method_two(str, row);
  
  return 0;
}

/*

Zigzag String
Tina Loves A
Fraction
Minus Minus is Plus
Distint Concat
Code Characters
Branches of Bytecode
Aman And Math
Fraction To Float
Square Moves
Aman String

*/
