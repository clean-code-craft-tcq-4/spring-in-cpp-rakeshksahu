#include "alerts.h"

using namespace Alerts;

void EmailAlert::setParam()
{
    emailSent = true;
}

void LEDAlert::setParam()
{
    ledGlows = true;
}
