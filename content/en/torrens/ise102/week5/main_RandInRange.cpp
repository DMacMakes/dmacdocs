#include <iostream>
#include <______>   // We need rand, srand functions
#include <______>   // We need the time function
using namespace std;

/// Generate and return a random number in the range 0-rangeMax inclusive.
/// Argument 'rangeMax' is a positive int
int randInRange(int rangeMax)
{
  /// Generate a raw random in whatever range this system uses
  ___ rawRandom = ____;

  /// You can use modulus here or ratios (percentages)
  /// to convert our raw random to a number between 0 and rangeMax
  /// Look at the week 5 notes for either approach.
  int ranged = ___________________;

  return ranged;
}

int main() {
  /// Seeding the random number generator. 
  /// Use the current time in seconds to start it off.
  int seed = ________;
  srand( _____ );
  
  /// Tell the world your program's name.
  cout << "\n";
  cout << "----------------------------" << "\n";
  cout << ______________________________ << "\n";
  cout << "----------------------------" << "\n\n";
  
  /// Pre-generate two randoms
  int rand0to5 = ________(5);
  int rand0to16 = __________;
  
  cout << " Between 0 and 5     | " << ________ << "\n";
  cout << " Between 0 and 16    | " << ________ << "\n";
  /// Generate and print a third one 
  cout << " Between 0 and 144   | " << ____________ << "\n\n";

  /// Testing: are getting our full range? Under? Over?
  /// Run it 10 times to be sure.
  for ( ______ ; ______; _____ )  
  {
    cout << " Between 0 and 3     | " << _________ << endl;
  }
}

