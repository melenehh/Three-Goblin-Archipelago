#include "SphereNetObjectPrioritizerConfig.h"

USphereNetObjectPrioritizerConfig::USphereNetObjectPrioritizerConfig() {
    this->InnerRadius = 2000.00f;
    this->OuterRadius = 10000.00f;
    this->InnerPriority = 1.00f;
    this->OuterPriority = 0.20f;
    this->OutsidePriority = 0.10f;
}


