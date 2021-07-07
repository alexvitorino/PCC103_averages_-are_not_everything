# include <iostream>
# include <vector>
# include <math.h>
# include <iomanip>

# define PI 3.14159265358979323


double normal_distribution_pdf1(double p, double avr, double std_dev) {
    return (1 / (std_dev*(std::sqrt(2 * PI)))) * (exp(-((pow((p - avr), 2)) / (2 * pow(std_dev, 2)))));
}
double normal_distribution_pdf2(double p) {
    return 1 / exp(pow(p, 2));
}