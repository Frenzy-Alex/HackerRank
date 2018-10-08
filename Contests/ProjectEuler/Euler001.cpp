#include <cstdint>
#include <iostream>

using namespace std;

/* Project Euler #1: Multiples of 3 and 5 */

int main( int, char** )
{
  uint32_t T = 0;
  cin >> T;

  for( uint32_t t = 0; t < T; ++t )
  {
    uint64_t N = 0, sum = 0;
    cin >> N;
    --N;

    sum += ( ( 3 + ( N - N % 3 ) ) * ( N / 3 ) ) / 2;
    sum += ( ( 5 + ( N - N % 5 ) ) * ( N / 5 ) ) / 2;
    sum -= ( ( 15 + ( N - N % 15 ) ) * ( N / 15 ) ) / 2;

    cout << sum << '\n';
  }

  return 0;
}