/**
 * Lib to determine procrastination status of Ben Gracewood
 * Author: Richard Clark <richard@redspider.co.nz>
 *
 *
 */
#include <string.h>
#include <time.h>

/* Invalid format for time */
#define ERRFORMAT -1

/**
 * catpeg_encode
 * src: Source image in byte array form
 * returns: Encoded image in byte array form
 */
int is_ben_procrastinating(time_t t);
