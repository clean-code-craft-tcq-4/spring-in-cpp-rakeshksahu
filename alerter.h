#ifndef ALERTER_H
#define ALERTER_H

#include "alerts.h"

namespace Alerter
{
    class StatsAlerter {
    public:
    StatsAlerter(const float maxThreshold, const std::vector<Alerts::IAlerter*>& alerters);
    void checkAndAlert(const std::vector<float>& input);
    private:
    	float m_maxThreshold;
    	std::vector<Alerts::IAlerter*> m_alerters;
    };
}

#endif //ALERTER_H
