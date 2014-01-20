#include <stdio.h>
#include <inttypes.h>


uint8_t palindrome(uint32_t uint32_a, uint32_t uint32_b);

int main()
{
  uint32_t uint32_numi;
  uint32_t uint32_numj;
  uint8_t uint16_n;
  uint8_t uint16_m;


  for(uint32_numi = 999, uint32_numj = 999, uint16_n = 0; palindrome(uint32_numi, uint32_numj) && uint16_n < 999;){
    uint32_numj--;
    
    for(uint16_m = 0; uint16_m < uint16_n; uint16_m++)
      uint32_numi++;
    
    uint16_n++;
    
    for(uint16_m = 0; uint16_m < uint16_n && palindrome(uint32_numi, uint32_numj); uint16_m++)
      uint32_numi--;
  }

  printf("The largest palindrome made from the product of two 3-digit numbers is %" PRIu32 "\n", uint32_numi * uint32_numj);

  return 0;
}

uint8_t palindrome(uint32_t uint32_a, uint32_t uint32_b)
{
  uint32_t uint32_product;
  uint32_t uint32_reversed;
  
  uint32_product = 0;
  uint32_reversed = 1;

  uint32_product = uint32_a * uint32_b;

  while(uint32_product != 0){
    uint32_reversed *= 10;
    uint32_reversed += uint32_product%10;
    uint32_product /= 10;
  }

  if(uint32_product == uint32_reversed)
    return 0;
  else
    return 1;

}

