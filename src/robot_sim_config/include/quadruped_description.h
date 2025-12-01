#ifndef QUADRUPED_DESCRIPTION_H
#define QUADRUPED_DESCRIPTION_H

#include <quadruped_base/quadruped_base.h>

namespace champ
{
    namespace URDF
    {
        void loadFromHeader(champ::QuadrupedBase &base)
        {
      base.lf.hip.setOrigin(0.044687, 0.047373, 0.017674, 0.0, 0.0, 0.0);
base.lf.upper_leg.setOrigin(0.020674, 0.027269, -0.002284, 0.0, 0.0, 0.0);
base.lf.lower_leg.setOrigin(-0.039805, 0.007248, -0.051915, 0.0, 0.0, 0.0);
     base.lf.foot.setOrigin(0.039642, 0.002056, -0.030639, 0.0, 0.0, 0.0);

      base.rf.hip.setOrigin(0.044687, -0.051374, 0.017678, 0.0, 0.0, 0.0);
base.rf.upper_leg.setOrigin(0.020674, -0.026, -0.001888, 0.0, 0.0, 0.0);
base.rf.lower_leg.setOrigin(-0.03982, -0.008, -0.051793, 0.0, 0.0, 0.0);
     base.rf.foot.setOrigin(0.039197, -0.0025, -0.03028, 0.0, 0.0, 0.0);

      base.lh.hip.setOrigin(-0.046404, 0.047373, 0.017674, 0.0, 0.0, 0.0);
base.lh.upper_leg.setOrigin(-0.040326, 0.027299, -0.001888, 0.0, 0.0, 0.0);
base.lh.lower_leg.setOrigin(-0.040143, 0.008, -0.051543, 0.0, 0.0, 0.0);
     base.lh.foot.setOrigin(0.039163, 0.0025, -0.030302, 0.0, 0.0, 0.0);

      base.rh.hip.setOrigin(-0.046404, -0.051374, 0.017678, 0.0, 0.0, 0.0);
base.rh.upper_leg.setOrigin(-0.040326, -0.026001, -0.001871, 0.0, 0.0, 0.0);
base.rh.lower_leg.setOrigin(-0.040473, -0.008035, -0.051279, 0.0, 0.0, 0.0);
     base.rh.foot.setOrigin(0.038784, -0.002521, -0.030751, 0.0, 0.0, 0.0);
        }
    }
}
#endif