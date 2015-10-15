#ifndef MISC_H_INCLUDED
#define MISC_H_INCLUDED

#include <fstream>

template <typename T>
inline T sqr(T x)
{
	return x*x;
}

template <typename T>
int OutBinary(const char *file_name, const T *source, size_t length, size_t step)
{
    std::ofstream out(file_name);
    if (!out)
        return 1;
    if (step == 0)
        out.write(source, length * sizeof(*source));
    else
        for (int i = 0; i < length; i += step)
            out.write(source + i, sizeof(*source));
    return 0;
}

template <typename T>
int OutText(const char * file_name, const T *source, size_t length, size_t step)
{
    std::ofstream out(file_name);
    if (!out)
        return 1;
    for (int i = 0; i < length; i += step)
        out << source[i] << '\n';
    return 0;
}

#endif  // MISC_H_INCLUDED