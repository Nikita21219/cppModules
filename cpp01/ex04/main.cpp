#include <string>
#include <string.h>
#include <iostream>
#include <fstream>

void replace(std::string *str, std::string sub, std::string sub_replace) {
    for (size_t i = 0; i < strlen(str->c_str()); i++)
    {
        size_t pos = str->find(sub, i);
        if (pos == std::string::npos)
            break;
        str->erase(pos, strlen(sub.c_str()));
        str->insert(pos, sub_replace);
    }
}

int main(int argc, char **argv)
{
    (void) argv;
    if (argc != 4) {
        std::cout << "I need 3 args" << std::endl;
        return 1;
    }
    std::ifstream fin (argv[1]);
    if (!fin) {
        std::cout << "I can't open file" << std::endl;
        return 1;
    }
    std::string file_content;
    file_content.assign(std::istreambuf_iterator<char>(fin), std::istreambuf_iterator<char>());
    replace(&file_content, "open", "close");
    std::string old_name (argv[1]);
    std::ofstream fout (old_name + ".replace");
    if (!fout) {
        std::cout << "I can't open file" << std::endl;
        return 1;
    }
    fout << file_content;
    return 0;
}
