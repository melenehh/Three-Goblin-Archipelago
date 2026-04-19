#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshCommandChangeTarget.h"
#include "MeshReplacementCommandChangeTarget.h"
#include "MeshVertexCommandChangeTarget.h"
#include "OnDynamicMeshModifiedBPDelegate.h"
#include "DynamicMesh.generated.h"

class UDynamicMesh;
class UDynamicMeshGenerator;

UCLASS(Blueprintable, MinimalAPI)
class UDynamicMesh : public UObject, public IMeshVertexCommandChangeTarget, public IMeshCommandChangeTarget, public IMeshReplacementCommandChangeTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDynamicMeshModifiedBP MeshModifiedBPEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshGenerator* MeshGenerator;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMeshGenerator;
    
    UDynamicMesh();

    UFUNCTION(BlueprintCallable)
    UDynamicMesh* ResetToCube();
    
    UFUNCTION(BlueprintCallable)
    UDynamicMesh* Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTriangleCount() const;
    

    // Fix for true pure virtual functions not being implemented
};

