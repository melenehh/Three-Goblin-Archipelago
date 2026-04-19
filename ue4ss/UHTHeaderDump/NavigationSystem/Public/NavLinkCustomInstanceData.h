#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponentInstanceData -FallbackName=ActorComponentInstanceData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkAuxiliaryId -FallbackName=NavLinkAuxiliaryId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkId -FallbackName=NavLinkId
#include "NavLinkCustomInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavLinkId CustomLinkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavLinkAuxiliaryId AuxiliaryCustomLinkId;
    
    NAVIGATIONSYSTEM_API FNavLinkCustomInstanceData();
};

