#include <cstdint>
#include <cmath>
#include <iostream>

using namespace std;

/* Project Euler #3: Largest prime factor */

int main( int, char** )
{
  uint32_t T = 0;
  cin >> T;
  for( uint32_t t = 0; t < T; ++t )
  {
    uint64_t N = 0, PN = 2;
    cin >> N;

    while( N % 2 == 0 )
    {
      N >>= 1;
    }

    uint64_t MAX_N = (uint64_t)sqrt( N ) + 1;
    for( uint64_t i = 3; i <= MAX_N; i+=2 )
    {
      while( N % i == 0 )
      {
        PN = i;
        N /= i;
      }
    }

    cout << max( PN, N ) << '\n';
  }
  return 0;
}