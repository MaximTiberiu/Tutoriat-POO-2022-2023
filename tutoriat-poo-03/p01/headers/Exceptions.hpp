//
// Created by Tiberiu on 11/23/2022.
//

#ifndef P01_EXCEPTIONS_HPP
#define P01_EXCEPTIONS_HPP

#include <exception>

class InvalidOptionException : public std::exception {
public:
    const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT override;
};


#endif //P01_EXCEPTIONS_HPP
