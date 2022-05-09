#ifndef STATS_H
#define STATS_H

#include <vector>
#include <math.h>

namespace Statistics {

    struct Stats {
	float average {NAN};
	float max {NAN};
	float min {NAN};
    };

    Stats ComputeStatistics(const std::vector<float>& input);
}

#endif // STATS_H
