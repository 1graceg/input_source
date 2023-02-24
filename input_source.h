#ifndef INC_3307_INPUT_SOURCE_H
#define INC_3307_INPUT_SOURCE_H

#include <string>

class InputSource {
public:
    InputSource() {}
    virtual ~InputSource() {}

    virtual std::string get_next() = 0;
};

#endif  // INPUT_SOURCE_H
