#include "Mass.h"

void Mass::setMassAvoirdupoisPounds(const double a_pounds)
{
	_mass_drams = a_pounds / avoirdupois_pounds_per_dram;
}

void Mass::setMassTroyPounds(const double troy_pounds)
{
	_mass_drams = troy_pounds / troy_pounds_per_dram;
}

void Mass::setMassMetricGrams(const double grams)
{
	_mass_drams = grams / grams_per_dram;
}

double Mass::getMassAvoirdupoisPounds() const
{
	return _mass_drams * avoirdupois_pounds_per_dram;
}

double Mass::getMassTroyPounds() const
{
	return _mass_drams * troy_pounds_per_dram;
}

double Mass::getMassMetricGrams() const
{
	return _mass_drams * grams_per_dram;
}
