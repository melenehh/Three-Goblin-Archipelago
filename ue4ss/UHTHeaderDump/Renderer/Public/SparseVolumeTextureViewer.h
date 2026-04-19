#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "SparseVolumeTextureViewer.generated.h"

class USparseVolumeTextureViewerComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASparseVolumeTextureViewer : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USparseVolumeTextureViewerComponent* SparseVolumeTextureViewerComponent;
    
public:
    ASparseVolumeTextureViewer(const FObjectInitializer& ObjectInitializer);

};

