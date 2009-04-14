// File.h -- Apr 12, 2009
//    by geohot

#ifndef EDA_FILE_H_
#define EDA_FILE_H_

#include "../include/macros.h"
#include <map>
#include <string>

namespace eda {

class File
{
public:
  Data& operator[](int changelistNumber);
  void set(int changelistNumber, Data data);
private:
  std::map<int, Data> mStore;
  std::string mName;         //add accessors and mutators for this
};

}

#endif /* EDA_FILE_H_ */
