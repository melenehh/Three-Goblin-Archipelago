#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelInstanceInterface.generated.h"

class UWorld;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class ULevelInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class ILevelInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnloadLevelInstance() PURE_VIRTUAL(UnloadLevelInstance,);
    
    UFUNCTION(BlueprintCallable)
    virtual void LoadLevelInstance() PURE_VIRTUAL(LoadLevelInstance,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsLoaded() const PURE_VIRTUAL(IsLoaded, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSoftObjectPtr<UWorld> GetWorldAsset() const PURE_VIRTUAL(GetWorldAsset, return NULL;);
    
};

