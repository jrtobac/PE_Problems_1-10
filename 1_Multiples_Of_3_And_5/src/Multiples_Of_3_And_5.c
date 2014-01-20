#include <stdio.h>
#include <inttypes.h>

#define THREE 3
#define FIVE 5
 
int main()
{
  uint32_t uint32_sum;
  uint32_t uint32_num;

  for(uint32_sum = 0, uint32_num = 0; uint32_num < 1000; uint32_num++)
    if(uint32_num % THREE == 0 || uint32_num % FIVE == 0)
      uint32_sum += uint32_num;

  printf("The sum of all the multiples of 3 or 5 below 1,000 is: %" PRIu32"\n", uint32_sum);

  return 0;
}
