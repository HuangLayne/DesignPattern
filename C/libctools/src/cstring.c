/**
 * @file cstring.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "cstring.h"

#include <stdarg.h>
#include <stdio.h>

#include "mem.h"

char *cstrcpy(const char *src, char *dst) {
    if (NULL != dst) {
        if (0 == strcmp(src, dst)) {
            return dst;
        } else {
            free(dst);
        }
    }
    return cstrdup(src);
}

size_t cstrlcpy(char *dst, const char *src, size_t size) {
    size_t len = 0;
    while (++len < size && *src) *dst++ = *src++;
    if (len <= size) *dst = 0;
    return len + strlen(src) - 1;
}

size_t cstrlcat(char *dst, const char *src, size_t size) {
    size_t len = strlen(dst);
    if (size <= len + 1) return len + strlen(src);
    return len + cstrlcpy(dst + len, src, size - len);
}

char *cstrnstr(const char *haystack, const char *needle, size_t hay_length) {
    size_t needle_len = strlen(needle);
    if (!needle_len) return (char *)haystack;
    while (hay_length >= needle_len) {
        hay_length--;
        if (!memcmp(haystack, needle, needle_len)) return (char *)haystack;
        haystack++;
    }
    return NULL;
}

size_t cstrlcatf(char *dst, size_t size, const char *fmt, ...) {
    size_t len = strlen(dst);
    va_list vl;

    va_start(vl, fmt);
    len += vsnprintf(dst + len, size > len ? size - len : 0, fmt, vl);
    va_end(vl);

    return len;
}

char *cstrdup(const char *s) {
    char *ptr = NULL;
    if (s) {
        size_t len = strlen(s) + 1;
        ptr = realloc(NULL, len);
        if (ptr) memcpy(ptr, s, len);
    }
    return ptr;
}

char *cstrndup(const char *s, size_t len) {
    char *ret = NULL, *end;

    if (!s) return NULL;

    end = memchr(s, 0, len);
    if (end) len = end - s;

    ret = realloc(NULL, len + 1);
    if (!ret) return NULL;

    memcpy(ret, s, len);
    ret[len] = 0;
    return ret;
}
