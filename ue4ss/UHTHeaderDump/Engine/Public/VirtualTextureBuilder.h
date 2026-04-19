#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VirtualTextureBuilder.generated.h"

class UVirtualTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UVirtualTextureBuilder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVirtualTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVirtualTexture2D* TextureMobile;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 BuildHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeparateTextureForMobile;
    
    UVirtualTextureBuilder();

};

