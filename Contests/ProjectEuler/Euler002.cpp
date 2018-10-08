#include <cstdint>
#include <iostream>

using namespace std;

/* Project Euler #2: Even Fibonacci numbers */

int main( int, char** )
{
  uint32_t T = 0;
  cin >> T;

  for( uint32_t t = 0; t < T; ++t )
  {
    uint64_t N = 0, n = 2, nm3 = 0, nm6 = 0, sum = 0;
    cin >> N;

    while( n < N )
    {
      sum += n;
      nm6 = nm3;
      nm3 = n;
      n = nm3 * 4 + nm6;
    }

    cout << sum << '\n';
  }

  return 0;
}