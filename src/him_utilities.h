/***********************************************************************
* FILENAME:
*       him_utilities.h
*
* DESCRIPTION:
*       Him Arduino helpful defines
*
* NOTES:
*       This library was written to design just for fun.
*
* AUTHOR:
*       Sven Himstedt
*
* COPYRIGHT: 
*       Sven Himstedt 2021, All rights reserved.
*
* LICENSE:
*       This library is free software.
*       You can redistribute it and/or modify it.
*       But give credit or you are an asshole.
*
* START DATE:
*       2021/13/09
*
* CHANGES:
*
***********************************************************************/

#ifndef _HIM_UTILITIES_H_
#define _HIM_UTILITIES_H_



#define STRINGIFY_IDENT(str) #str
#define STRINGIFY_MACRO(str) STRINGIFY_IDENT(str)

#define PROJECT_NAME_STRING     STRINGIFY_MACRO(PROJECT_NAME)
#define PROJECT_VERSION_STRING  STRINGIFY_MACRO(PROJECT_VERSION_MAJOR) "." STRINGIFY_MACRO(PROJECT_VERSION_MINOR) "." STRINGIFY_MACRO(PROJECT_VERSION_PATCH)



#define arraysize(x) (sizeof(x) / sizeof(x[0]))  



#define TRUE  1
#define FALSE 0

#define ON    1
#define OFF   0



#endif /* _HIM_UTILITIES_H_ */
