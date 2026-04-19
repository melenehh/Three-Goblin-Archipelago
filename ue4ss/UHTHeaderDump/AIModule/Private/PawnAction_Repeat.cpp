#include "PawnAction_Repeat.h"

UDEPRECATED_PawnAction_Repeat::UDEPRECATED_PawnAction_Repeat() {
    this->ActionToRepeat = NULL;
    this->RecentActionCopy = NULL;
    this->ChildFailureHandlingMode = EPawnActionFailHandling::IgnoreFailure;
}


