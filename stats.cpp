#include "stats.h"
#include <algorithm>
#include <numeric>

using namespace std;
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& input) {
    Stats result;
    if (input.size() > 0)
    {
        result.max = *max_element(input.begin(), input.end());
        result.min = *min_element(input.begin(), input.end());
        result.average = accumulate(input.begin(), input.end(), 0.0) / input.size();
    }
    return result;
}
