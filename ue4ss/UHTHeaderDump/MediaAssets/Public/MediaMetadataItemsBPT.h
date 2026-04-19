#pragma once
#include "CoreMinimal.h"
#include "MediaMetadataItemBPT.h"
#include "MediaMetadataItemsBPT.generated.h"

USTRUCT(BlueprintType)
struct FMediaMetadataItemsBPT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMediaMetadataItemBPT> Items;
    
    MEDIAASSETS_API FMediaMetadataItemsBPT();
};

