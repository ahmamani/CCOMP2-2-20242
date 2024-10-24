#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h"

using namespace std;

void Time::setTime(int h, int m, int s) {
    if( (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    } else {
        throw invalid_argument("hour, minute and/or second was out of range");
    }
}

string Time::toUniversalString() const {
    ostringstream output;
    output << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second;
    return output.str();
}

string Time::toStandardString() const {
    ostringstream output;
    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
    return output.str();
}