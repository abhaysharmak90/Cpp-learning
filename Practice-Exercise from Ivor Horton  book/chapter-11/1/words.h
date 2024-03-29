#ifndef WORDS_H
#define WORDS_H

#include <vector>
#include <memory>

namespace words
{
    void enter_string(std::shared_ptr<std::string> str1);

    void show_string(std::shared_ptr<std::string> str2);

    void create_vector(std::shared_ptr<std::string> str3,std::shared_ptr<std::vector<std::string>> sep_words1);

    void show_vector(std::shared_ptr<std::vector<std::string>> sep_words2);

    void sort_vector(std::shared_ptr<std::vector<std::string>> sep_words3);
}

#endif