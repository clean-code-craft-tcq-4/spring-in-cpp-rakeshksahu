#include "alerter.h"

using namespace Alerter;
using namespace Alerts;

StatsAlerter::StatsAlerter(const float maxThreshold, const std::vector<IAlerter*>& alerters) :
    m_maxThreshold (maxThreshold),
    m_alerters (alerters)
{}

void StatsAlerter::checkAndAlert(const std::vector<float>& input)
{
    for (const auto &alerter : m_alerters)
    {
        for (const auto value : input)
        {
    	    if (m_maxThreshold < value)
    	    {
    	    	alerter->setParam();    
            }
        }
    }
}
