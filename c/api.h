/**
 * @file api.h
 * @author Albert Hu
 * @brief Doxygen Example in C Language
 * @version 0.0.1
 * @date 2019-10-02
 *
 * @copyright Copyright (c) 2019
 *
 */

/**
 * @mainpage The Main Page
 *
 * ## Introduction
 * The main page is written in Markdown format.
 *
 * ## Functions
 * There are three functions:
 * - set_number
 * - get_number
 * - allocate_buffer
 *
 * ## Macro
 * There is one macro.
 * - MAXIMUM
 *
 * ## Structure
 * There is one structure:
 * - buffer
 *
 * ## Enumeration
 * There is one enumeration:
 * - number
 */

#ifndef _API_H_
#define _API_H_

/**
 * @defgroup function
 * @brief The group of functions.
 *
 * There are all of functions.
 */

/**
 * @defgroup macro
 * @brief The group of macros.
 *
 * There are all of macros.
 */

/**
 * @defgroup structure
 * @brief The group of structures.
 *
 * There are all of structures.
 */

/**
 * @defgroup enumeration
 * @brief The group of enumerations.
 *
 * There are all of enumerations.
 */

/**
 * @ingroup macro
 * @brief A macro that returns maximum value.
 *
 * Usage:
 * ```
 * int a = 0, b = 1, c;
 *
 * c = MAXIMUM(a, b);
 * ```
 */
#define MAXIMUM(a, b) ((a) < (b) ? (a) : (b))

/**
 * @ingroup enumeration
 * @brief The number enumeration.
 * Start at one and end at ten.
 */
enum number {
  ONE = 0, /**< number 1. */
  TWO, /**< number 2. */
  THREE, /**< number 3. */
  FOUR, /**< number 4. */
  FIVE, /**< number 5. */
  SIX, /**< number 6. */
  SEVEN, /**< number 7. */
  EIGHT, /**< number 8. */
  NINE, /**< number 9. */
  TEN /**< number 10. */
};

/**
 * @ingroup structure
 * @brief Buffer structure.
 * The structure that represents a buffer.
 */
struct buffer {
  void *data; /*< pointer to allocated memory. */
  unsigned int size; /*< size of buffer. */
};

/**
 * @ingroup function
 * @brief Function to set number.
 *
 * The number refers to #number.
 *
 * @param number the number would be set.
 */
void set_number(int number);

/**
 * @ingroup function
 * @brief Function to get number.
 *
 * @returns integer not in between one and ten.
 * @returns 1 means #ONE.
 * @returns 2 means #TWO.
 * @returns 3 means #THREE.
 * @returns 4 means #FOUR.
 * @returns 5 means #FIVE.
 * @returns 6 means #SIX.
 * @returns 7 means #SEVEN.
 * @returns 8 means #EIGHT.
 * @returns 9 means #NINE.
 * @returns 10 means #TEN.
 */
int get_number();

/**
 * @ingroup function
 * @brief Allocate a new buffer.
 * Allocate a new #buffer with non-zero positive size.
 *
 * @param size buffer size
 * @return struct buffer* pointer to new buffer if success else NULL returned.
 */
struct buffer* allocate_buffer(unsigned int size);

#endif /* _API_H_ */
