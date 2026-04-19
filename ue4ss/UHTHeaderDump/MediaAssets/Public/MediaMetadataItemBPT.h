#pragma once
#include "CoreMinimal.h"
#include "MediaMetadataItemBPT.generated.h"

USTRUCT(BlueprintType)
struct FMediaMetadataItemBPT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MimeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> BinaryData;
    
    MEDIAASSETS_API FMediaMetadataItemBPT();
};

