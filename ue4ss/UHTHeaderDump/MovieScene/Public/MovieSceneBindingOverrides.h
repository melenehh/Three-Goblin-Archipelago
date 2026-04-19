#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneBindingOverrideData.h"
#include "MovieSceneBindingOverrides.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UMovieSceneBindingOverrides : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneBindingOverrideData> BindingData;
    
public:
    UMovieSceneBindingOverrides();

};

