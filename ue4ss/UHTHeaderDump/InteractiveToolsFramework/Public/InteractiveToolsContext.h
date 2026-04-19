#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolsContext.generated.h"

class UContextObjectStore;
class UInputRouter;
class UInteractiveGizmoManager;
class UInteractiveToolManager;
class UToolTargetManager;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInteractiveToolsContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputRouter* InputRouter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UToolTargetManager* TargetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveToolManager* ToolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveGizmoManager* GizmoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UContextObjectStore* ContextObjectStore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;
    
public:
    UInteractiveToolsContext();

};

