#include <cstdint>
#include <cmath>
#include <iostream>

using namespace std;

/* Project Euler #4: Largest palindrome product */

inline bool isPalindrome( uint32_t in_num )
{
  int right = in_num % 1000;
  return ( ( in_num / 1000 ) == 0 );
}

int main( int, char** )
{
  uint32_t T = 0;
  cin >> T;
  for( uint32_t t = 0; t < T; ++t )
  {
    uint64_t N = 0;
    cin >> N;

    cout << 0 << '\n';
  }
  return 0;
}