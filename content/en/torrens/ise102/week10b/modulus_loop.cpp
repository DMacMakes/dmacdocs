#include <iostream>
using namespace std;

int main()
{
  for (int i=0; i<20; i++)
  {
    if (i % 3 == 0)
    {
      // Only prints if current value of i was evenly divisible 
      // by 3. This code runs every.. ?th loop. You tell me.
      cout << i << ", ";
    }
  }
}

