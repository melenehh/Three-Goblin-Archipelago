#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EdGraphNode -FallbackName=EdGraphNode
#include "DataflowEdNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDataflowEdNode : public UEdGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderInAssetEditor;
    
    UDataflowEdNode();

};

