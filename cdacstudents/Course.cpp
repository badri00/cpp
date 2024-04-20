#include "Course.h"

Course::Course(const string& courseName,double fees)
: courseName(courseName),fees(fees){}

string Course::getCourseName() const {

    return courseName;

    
}