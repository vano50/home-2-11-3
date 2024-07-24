#pragma once
#include <iostream>
#include <string>

#ifdef LIBRARY_API_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif

class Leaver {
public:
    LIBRARY_API std::string leave(std::string name);

};