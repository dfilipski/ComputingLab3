#ifndef MASS
#define MASS

constexpr double grams_per_dram = 1.7718451953125;
constexpr double avoirdupois_pounds_per_dram = 1.0/256.0;
constexpr double troy_pounds_per_dram = 1.0 / 96.0;

class Mass
{
public:
	Mass(): _mass_drams(0) {}
	void setMassAvoirdupoisPounds(const double a_pounds);
	void setMassTroyPounds(const double troy_pounds);
	void setMassMetricGrams(const double grams);

	double getMassAvoirdupoisPounds();
	double getMassTroyPounds();
	double getMassMetricGrams();
private:
	double _mass_drams;
};

#endif