#ifndef BAYESIANFILTER_HPP
#define BAYESIANFILTER_HPP
#include <vector>
#include <string>
#include <fstream>

#include "measurement_package.hpp"
#include "map.hpp"
#include "help_functions.hpp"

class bayesianFilter {
public:
	//constructor:
	bayesianFilter();
	//deconstructor:
	virtual ~bayesianFilter();


	//main public member function, which estimate the beliefs:
	void process_measurement(const MeasurementPackage &measurements,
											 const map &map_1d,
											 help_functions &helpers);

	//member public: belief of state x:
	std::vector<float> bel_x ;

private:

/////private members:

	//flag, if filter is initialized:
	bool is_initialized_;

	//precision of control information:
	float control_std ;

	//precision of observations as standard deviation:
	float observation_std ;

	//initial belief of state x:
	std::vector<float> bel_x_init ;

};
#endif // BAYESIANFILTER_HPP
