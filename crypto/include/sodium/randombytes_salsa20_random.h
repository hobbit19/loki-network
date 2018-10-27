
#ifndef randombytes_salsa20_random_H
#define randombytes_salsa20_random_H

#include <sodium/export.h>
#include <sodium/randombytes.h>

#ifdef __cplusplus
extern "C"
{
#endif

  SODIUM_EXPORT
  extern struct randombytes_implementation randombytes_salsa20_implementation;

#ifdef __cplusplus
}
#endif

#endif
