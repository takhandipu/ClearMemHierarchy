#include <iostream>
#include <cstdint>

#define L3SIZE 28835840
#define WIDTH 16

using namespace std;

int main(void)
{
  uint64_t *large_array= new uint64_t[WIDTH*L3SIZE];
  for(uint64_t i = 0; i< WIDTH*L3SIZE; i++)
  {
    if(large_array[i]!=0)
    {
      large_array[i]=0;
    }
  }
  return 0;
}
