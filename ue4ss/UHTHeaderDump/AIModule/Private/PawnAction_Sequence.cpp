#include "PawnAction_Sequence.h"

UDEPRECATED_PawnAction_Sequence::UDEPRECATED_PawnAction_Sequence() {
    this->ChildFailureHandlingMode = EPawnActionFailHandling::RequireSuccess;
    this->RecentActionCopy = NULL;
}


