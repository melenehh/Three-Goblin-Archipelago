#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneDecomposerTestObject.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneDecomposerTestObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatProperty;
    
    UMovieSceneDecomposerTestObject();

};

