/**
  * This is free and unencumbered software released into the public domain.
  *
  * Anyone is free to copy, modify, publish, use, compile, sell, or
  * distribute this software, either in source code form or as a compiled
  * binary, for any purpose, commercial or non-commercial, and by any
  * means.
  *
  * In jurisdictions that recognize copyright laws, the author or authors
  * of this software dedicate any and all copyright interest in the
  * software to the public domain. We make this dedication for the benefit
  * of the public at large and to the detriment of our heirs and
  * successors. We intend this dedication to be an overt act of
  * relinquishment in perpetuity of all present and future rights to this
  * software under copyright law.
  *
  * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
  * IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
  * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
  * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
  * OTHER DEALINGS IN THE SOFTWARE.
  *
  * For more information, please refer to <https://unlicense.org>
  **/

// This code attempts to create a generic linear grammar state machine
//

#ifndef _GRAMMAR_RL_H_
#define _GRAMMAR_RL_H_ 1

#include <stdint.h>

struct grm_rl8_production {
  uint8_t terminal;
  uint8_t new_state;
};


// This function takes the current state of the state machine and produces terminals
// This machine emulates the productions of a right linear grammar to conform a regular grammar.
//
uint32_t grm_rl8(struct grm_rl8_production* productions, uint8_t* current_state, uint32_t iterations, uint8_t* output);

#endif // !_GRAMMAR_RL_H_
#define _GRAMMAR_RL_H_ 1

