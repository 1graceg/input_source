#include <iostream>
#include "input_source.h"
#include "file_input.h"
#include "shell_input.h"

int main() {
    FileInput file_input("input.txt");
    ShellInput shell_input("> ");

    std::string line;
    while ((line = file_input.get_next()) != "") {
        std::cout << "Read from file: " << line << std::endl;
    }

    while ((line = shell_input.get_next()) != "") {
        std::cout << "Read from shell: " << line << std::endl;
    }

    return 0;
}

