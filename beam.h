#ifndef BEAM_H_INCLUDED
#define BEAM_H_INCLUDED

#include <complex>
#include <vector>

class Beam
{
    public:
        Beam(int n, int m = 0);
        
    private:
        size_t nx, ny;
        std::vector<std::complex<double>> data;
        BeamParameters param;
};

#endif  // BEAM_H_INCLUDED