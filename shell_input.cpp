#include "shell_input.h"

ShellInput::ShellInput(const std::string& prompt) : prompt_(prompt) {}

ShellInput::~ShellInput() {}

std::string ShellInput::get_next() {
    std::string line;
    std::cout << prompt_;
    std::getline(std::cin, line);
    return line;
}
