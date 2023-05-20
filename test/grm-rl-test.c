#include "grm-rl.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
  struct grm_rl8_production productions[] = {{ 'a', 1 }, { 'b', 0 }};
  uint8_t state = 0;
  uint8_t output[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

  uint32_t actions = grm_rl8((struct grm_rl8_production *)&productions, &state, 7, (uint8_t*)&output);

  for (int i = 0; i < 8; i++)
    printf("%c", output[i]);

  printf("\n current: %d\n", state);

  return 0;
}

