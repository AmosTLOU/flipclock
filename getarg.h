/*
 * Filename: getarg.h
 * Created by 喵Alynx.
 * alynx.zhou@gmail.com, https://alynx.xyz/.
 */
#ifndef __GETARG_H__
#	define __GETARG_H__

#	ifndef WIN32
#		define OPT_START '-'
#	else
#		define OPT_START '/'
#	endif

/* Global optarg. */
extern const char *argopt;

/*
 * getarg() receives an arguments counter,
 * a pointer array of arguments,
 * and parse it with given option string.
 * It only receives single-char option, and will return it.
 * In order to parse a value following the option,
 * use "x:" in the option string where 'x' is the option,
 * and it will store a pointer to the value in global pointer argopt.
 * You should use a while-switch-case to deal with options.
 * If you have a single value not leading by an option, it will return 0
 * and store the pointer in the argopt.
 */
int getarg(const int argc, \
	   const char *const argv[], \
	   const char opt_string[]);

#endif
