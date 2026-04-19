#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicMeshPool.generated.h"

class UDynamicMesh;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UDynamicMeshPool : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicMesh*> CachedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicMesh*> AllCreatedMeshes;
    
public:
    UDynamicMeshPool();

    UFUNCTION(BlueprintCallable)
    void ReturnMesh(UDynamicMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void ReturnAllMeshes();
    
    UFUNCTION(BlueprintCallable)
    UDynamicMesh* RequestMesh();
    
    UFUNCTION(BlueprintCallable)
    void FreeAllMeshes();
    
};

