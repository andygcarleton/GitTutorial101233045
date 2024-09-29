#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
private:
    std::string name;
    std::string content;
    Date date2;

public:
    File(const std::string& name,const std::string& content,const Date& date);

    bool lessThan(const File& date22) const;

    void print() const;
    void printContents() const;
};

#endif
