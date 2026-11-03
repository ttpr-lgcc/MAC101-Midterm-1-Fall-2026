#include <iostream>
using namespace std;

int main()
{
  int input;


  cout << "Enter a number to print pattern\n";
  cin >> input;


  for (int j = 1; j <= input; j++)
  {
        for (int i = 1; i <= input - j; i++)
        {
            cout << " ";
        }

         for (int i = 1; i <= j; i++)
         {
             cout << '*' << " "; 
         }

    
    cout << endl;
  }

  return 0;
}
