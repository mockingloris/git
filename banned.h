#ifndef BANNED_H
#define BANNED_H

/*
 * This header lists functions that have been banned from our code base,
 * because they're too easy to misuse (and even if used correctly,
 * complicate audits). Including this header turns them into compile-time
 * errors.
 */

#define BANNED(func) sorry_##func##_is_a_banned_function()

#define strcpy(x,y) BANNED(strcpy)
#define strncpy(x,y,n) BANNED(strncpy)

#ifdef HAVE_VARIADIC_MACROS
#define sprintf(...) BANNED(sprintf)
#endif

#endif /* BANNED_H */
