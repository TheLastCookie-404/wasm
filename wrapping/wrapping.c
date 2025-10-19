#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int main()
{
  printf("I`m alive\n");
  return 0;
}

// Building with ccall acess from js
// emcc wrapping.c -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=[ccall]

// Building with cwrap (More convinient) acess from js.
// Allows to wrap a C funtion into a js function
// emcc wrapping.c -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=[cwrap]

// Compile both ways at once
// emcc wrapping.c -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall,cwrap