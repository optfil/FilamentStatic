#ifndef BEAMPARAMETERS_H_INCLUDED
#define BEAMPARAMETERS_H_INCLUDED

#include <iosfwd>

class BeamParameters
{
    public:
        BeamParameters(double p, double rx, double ry);
      
        double get_rx() const;
        double get_ry() const;
        double gte_power() const;
        
        static BeamParameters* loadParameters(const char * file_name);
        int printParameters(const char * file_name) const;
        
        std::ostream& operator<<(std::ostream& os, const BeamParameters& param);
        std::istream& operator>>(std::istream& is, BeamParameters& param);
    private:
        double rx, ry;
        double power;
};

#endif  // BEAMPARAMETERS_H_INCLUDED