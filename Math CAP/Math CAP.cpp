#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <conio.h>

#include <limits>

#include <iomanip>

constexpr auto c = 3000000000000000;
constexpr auto h = 0.000000000000004136;

int main()
{
    std::cout << "starting\n";
    double a{  }, b{  }, phi, phiphi, phiphiphi, PI, pip, pix;
    long long n, f, o;
    std::string ff;

    pix = 0;
    pip = 3;
    o = 0;
    phi = sqrt(1);
    {
        do {
            pix = (pix + 2);
            pip = (pip + (4 / (pix * (pix + 1) * (pix + 2))));
            pix = (pix + 2);
            pip = (pip - (4 / (pix * (pix + 1) * (pix + 2))));
        } while (pix < 1000000001);

        PI = pip;
    }
    //PI
    {
        do {
            phi = sqrt(1 + phi);
            o = o + 1;
        } while (o < 10000000);

        phiphi = 2 * (sin((3 * PI) / 10));
        
        phiphiphi = ((1 + sqrt(5)) / 2);

    }
    //phi
    
    std::cout << "phi found with sqrt(1 + sqrt(1 + ... = ) = " << std::setprecision(100) << phi << "\n";
    std::cout << "phi found with ((1 + sqrt(5)) / 2) =       " << std::setprecision(100) << phiphiphi << "\n";
    std::cout << "PI found with 4 / 1 - 4 / 3 + 4 / 5 ... =  " << std::setprecision(100) << PI << "\n";
    std::cout << "phi found with 2 * (sin((3 * PI) / 10) =   " << std::setprecision(100) << phiphi << "\n";

    std::cout << "\nto find the nth number in the fibinacci secuence enter number for n\n" << 
        "if n is greater than 35 number will be negative, simply remove the negative\n\n";
    std::cin >> n;

    f = ((pow(phi, n) - pow((-1 / phi), n)) / sqrt(5));
    
    std::stringstream ss;
    ss << f;
    ss >> ff;
    std::cout << "the " << n << "th number in the fibinacci sequence is = " << ff;

}