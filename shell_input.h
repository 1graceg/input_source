
#ifndef INC_3307_SHELL_INPUT_H
#define INC_3307_SHELL_INPUT_H

#include <iostream>
#include <string>
#include "input_source.h"

class ShellInput : public InputSource {
public:
    ShellInput(const std::string& prompt);
    ~ShellInput();

    std::string get_next() override;

private:
    std::string prompt_;
};

#endif  // SHELL_INPUT_H

