// edaMacros.h -- Apr 13, 2009
//    by geohot

#ifndef EDA_EDAMACROS_H_
#define EDA_EDAMACROS_H_

#include <iostream>

#define Data unsigned int

//define a debug print macro here

#define THIS_FILE ((strrchr(__FILE__, 0x5C) ?: __FILE__ - 1) + 1)
#define debug if (0) ; else std::cerr << THIS_FILE << "--" << __PRETTY_FUNCTION__ << ": "


#endif /* EDA_EDAMACROS_H_ */