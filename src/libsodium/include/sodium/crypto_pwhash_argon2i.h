#ifndef crypto_pwhash_argon2i_H
#define crypto_pwhash_argon2i_H

#include <limits.h>
#include <stddef.h>
#include <stdint.h>

#include "export.h"

#ifdef __cplusplus
# ifdef __GNUC__
#  pragma GCC diagnostic ignored "-Wlong-long"
# endif
extern "C" {
#endif

#define crypto_pwhash_argon2i_ALG_ARGON2I13 1
SODIUM_EXPORT
int crypto_pwhash_argon2i_alg_argon2i13(void);

#define crypto_pwhash_argon2i_BYTES_MIN 16ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_bytes_min(void);

#define crypto_pwhash_argon2i_BYTES_MAX 4294967295ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_bytes_max(void);

#define crypto_pwhash_argon2i_PASSWD_MIN 0ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_passwd_min(void);

#define crypto_pwhash_argon2i_PASSWD_MAX 4294967295ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_passwd_max(void);

#define crypto_pwhash_argon2i_SALTBYTES 16ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_saltbytes(void);

#define crypto_pwhash_argon2i_STRBYTES 128ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_strbytes(void);

#define crypto_pwhash_argon2i_STRPREFIX "$argon2i$"
SODIUM_EXPORT
const char *crypto_pwhash_argon2i_strprefix(void);

#define crypto_pwhash_argon2i_OPSLIMIT_MIN 3ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_opslimit_min(void);

#define crypto_pwhash_argon2i_OPSLIMIT_MAX 4294967295ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_opslimit_max(void);

#define crypto_pwhash_argon2i_MEMLIMIT_MIN 1
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_memlimit_min(void);

#define crypto_pwhash_argon2i_MEMLIMIT_MAX ((SIZE_MAX >= 1ULL << 48) ? 4398046510080ULL : (SIZE_MAX >= 1ULL << 32) ? 2147483648ULL : 32768U)
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_memlimit_max(void);

#define crypto_pwhash_argon2i_OPSLIMIT_INTERACTIVE 4ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_opslimit_interactive(void);

#define crypto_pwhash_argon2i_MEMLIMIT_INTERACTIVE 33554432ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_memlimit_interactive(void);

#define crypto_pwhash_argon2i_OPSLIMIT_MODERATE 6ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_opslimit_moderate(void);

#define crypto_pwhash_argon2i_MEMLIMIT_MODERATE 134217728ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_memlimit_moderate(void);

#define crypto_pwhash_argon2i_OPSLIMIT_SENSITIVE 8ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_opslimit_sensitive(void);

#define crypto_pwhash_argon2i_MEMLIMIT_SENSITIVE 536870912ULL
SODIUM_EXPORT
size_t crypto_pwhash_argon2i_memlimit_sensitive(void);

SODIUM_EXPORT
int crypto_pwhash_argon2i(unsigned char * const out,
                          unsigned long long outlen,
                          const char * const passwd,
                          unsigned long long passwdlen,
                          const unsigned char * const salt,
                          unsigned long long opslimit, size_t memlimit,
                          int alg)
            __attribute__ ((warn_unused_result));

SODIUM_EXPORT
int crypto_pwhash_argon2i_str(char out[crypto_pwhash_argon2i_STRBYTES],
                              const char * const passwd,
                              unsigned long long passwdlen,
                              unsigned long long opslimit, size_t memlimit)
            __attribute__ ((warn_unused_result));

SODIUM_EXPORT
int crypto_pwhash_argon2i_str_verify(const char str[crypto_pwhash_argon2i_STRBYTES],
                                     const char * const passwd,
                                     unsigned long long passwdlen)
            __attribute__ ((warn_unused_result));

/* ------------------------------------------------------------------------- */

int _crypto_pwhash_argon2i_pick_best_implementation(void);

#ifdef __cplusplus
}
#endif

#endif
