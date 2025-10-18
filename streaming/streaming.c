#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int summ(int a, int b)
{
  return a + b;
}