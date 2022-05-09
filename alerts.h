#ifndef ALERTS_H
#define ALERTS_H

#include <vector>

namespace Alerts {
    struct IAlerter {
        virtual void setParam() = 0;
    };
    struct EmailAlert : public IAlerter {
    	void setParam() override;
        bool emailSent {false};
    };
    
    struct LEDAlert : public IAlerter {
        void setParam() override;
        bool ledGlows {false};
    };
}

#endif // ALERTS_H
