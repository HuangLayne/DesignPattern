/**
 * @file cstring.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STRING_HELPER_H_
#define STRING_HELPER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

/**
 * @brief 从src拷贝字符串到dst，若相同则直接返回，否则创建新的存储空间进行拷贝
 *
 * @param src source string
 * @param dst destination buffer
 * @return char* dst buffer or new buffer
 */
char *cstrcpy(const char *src, char *dst);

/**
 * @brief 从src拷贝字符串到dst，拷贝长度不超过size - 1
 *
 * @param dst destination buffer
 * @param src source string
 * @param size size of destination buffer
 * @return size_t the length of src
 */
size_t cstrlcpy(char *dst, const char *src, size_t size);

/**
 * @brief 与BSD的strlcat()相似，但是size <=
 * strlen(dst)。在dst尾部追加src，但长度不能超过size - 1
 *
 * @param dst destination buffer
 * @param src source string
 * @param size size of destination buffer
 * @return size_t the total length of src and dst
 */
size_t cstrlcat(char *dst, const char *src, size_t size);

/**
 * @brief 在haystack字符串中搜索needle，返回第一个匹配的位置
 *
 * @param haystack string to search in
 * @param needle string to search for
 * @param hay_length length of string to search in
 * @return char* pointer to the located match within haystack or a null pointer
 * if no match
 */
char *cstrnstr(const char *haystack, const char *needle, size_t hay_length);

/**
 * @brief 按照格式在dst buffer中输出字符串
 *
 * @param dst destination buffer (string to which the output is appended
 * @param size total size of the destination buffer
 * @param fmt printf-compatible format string, specifying how the following
 * parameters are used
 * @param ...
 * @return size_t the length of the string that would have been generated if
 * enough space had been available
 */
size_t cstrlcatf(char *dst, size_t size, const char *fmt, ...);

/**
 * @brief 将字符串拷贝到新建的位置处
 *
 * @param s 源字符串
 * @return char* 新字符串
 */
char *cstrdup(const char *s);

/**
 * @brief 将字符串拷贝到新建的位置处，拷贝长度不超过len
 *
 * @param s 源字符串
 * @param len 拷贝长度
 * @return char* 新字符串
 */
char *cstrndup(const char *s, size_t len);

#ifdef __cplusplus
}
#endif
#endif  // STRING_HELPER_H_
