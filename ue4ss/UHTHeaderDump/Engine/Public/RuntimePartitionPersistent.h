#pragma once
#include "CoreMinimal.h"
#include "RuntimePartition.h"
#include "RuntimePartitionPersistent.generated.h"

UCLASS(Blueprintable, CollapseCategories, HideDropdown)
class URuntimePartitionPersistent : public URuntimePartition {
    GENERATED_BODY()
public:
    URuntimePartitionPersistent();

};

