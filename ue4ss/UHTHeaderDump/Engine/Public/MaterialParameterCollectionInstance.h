#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialParameterCollectionInstance.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, MinimalAPI)
class UMaterialParameterCollectionInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialParameterCollection> Collection;
    
public:
    UMaterialParameterCollectionInstance();

};

