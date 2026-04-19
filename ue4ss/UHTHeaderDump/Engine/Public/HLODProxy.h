#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HLODProxyMesh.h"
#include "HLODProxy.generated.h"

class UHLODProxyDesc;

UCLASS(Blueprintable, MinimalAPI)
class UHLODProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHLODProxyMesh> ProxyMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors;
    
public:
    UHLODProxy();

};

