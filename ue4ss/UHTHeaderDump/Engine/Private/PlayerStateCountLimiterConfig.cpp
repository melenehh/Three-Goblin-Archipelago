#include "PlayerStateCountLimiterConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=ENetObjectCountLimiterMode -FallbackName=ENetObjectCountLimiterMode

UPlayerStateCountLimiterConfig::UPlayerStateCountLimiterConfig() {
    this->Mode = ENetObjectCountLimiterMode::Fill;
}


