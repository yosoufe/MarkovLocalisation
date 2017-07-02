#ifndef MEASUREMENT_PACKAGE_HPP
#define MEASUREMENT_PACKAGE_HPP

class MeasurementPackage {
public:

	struct control_s{
		float delta_x_f;     // move to successor in x position
	};

	struct observation_s{
		std::vector <float> distance_f;  // distance to observed landmark
	};

	control_s control_s_;
	observation_s observation_s_ ;
};

#endif // MEASUREMENT_PACKAGE_HPP
