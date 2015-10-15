#include <beam.h>

Beam::Beam(int n, int m) :
    nx(n), ny(m ? m : n), data(nx * ny), param()