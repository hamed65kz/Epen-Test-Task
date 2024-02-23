#ifndef GETTYPE_H
#define GETTYPE_H
#include <string>


//demangling a name in the compiler refers to converting a symbol name that was encoded by the compiler for internal use back to its original human-readable form.
//more detail on : https://stackoverflow.com/questions/281818/unmangling-the-result-of-stdtype-infoname

#if defined( _MSC_VER )
std::string demangle(const char* name) {
    std::string namestr(name);
    std::size_t found = namestr.find_first_of("class ");
    if (found >= 0)
    {
        namestr.replace(0, 6, "");
    }
    return namestr;
}
#else
#include <cxxabi.h>
std::string demangle(const char* name) {
    int status = -4; // some arbitrary value to eliminate the compiler warning

    std::unique_ptr<char, void (*)(void*)> res{
        abi::__cxa_demangle(name, NULL, NULL, &status), std::free };

    return (status == 0) ? res.get() : name;
}
#endif


#endif