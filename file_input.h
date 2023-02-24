

#ifndef INC_3307_FILE_INPUT_H
#define INC_3307_FILE_INPUT_H

#include <fstream>
#include <string>
#include "input_source.h"

class FileInput : public InputSource {
public:
    FileInput(const std::string& filename);
    ~FileInput();

    std::string get_next() override;

private:
    std::ifstream file_;
};

#endif  // FILE_INPUT_H
