#include <stdio.h>
#include <inttypes.h>

int main()
{
  uint32_t uint32_num1;
  uint32_t uint32_num2;
  uint32_t uint32_next;
  uint32_t uint32_sum;

  uint32_next = 0;
  uint32_num1 = 1;
  uint32_num2 = 2;
  uint32_sum = 2;

  while(uint32_next < 4000000){
    if(uint32_next % 2 == 0)
      uint32_sum += uint32_next;

    uint32_next = uint32_num1 + uint32_num2;

    if(uint32_num1 > uint32_num2)
      uint32_num2 = uint32_next;
    else if (uint32_num2 > uint32_num1)
      uint32_num1 = uint32_next; 
  }

  printf("The sum of the Even Fibonacci Numbers that are less than four million is %" PRIu32"\n", uint32_sum);
 
  return 0;
}
