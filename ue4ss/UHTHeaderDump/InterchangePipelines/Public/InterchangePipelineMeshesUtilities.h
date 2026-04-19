#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeMeshGeometry.h"
#include "InterchangeMeshInstance.h"
#include "InterchangePipelineMeshesUtilitiesContext.h"
#include "InterchangePipelineMeshesUtilities.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangePipelineMeshesUtilities;

UCLASS(Blueprintable)
class INTERCHANGEPIPELINES_API UInterchangePipelineMeshesUtilities : public UObject {
    GENERATED_BODY()
public:
    UInterchangePipelineMeshesUtilities();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetContext(const FInterchangePipelineMeshesUtilitiesContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidMeshInstanceUid(const FString& MeshInstanceUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidMeshGeometryUid(const FString& MeshGeometryUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMeshInstanceSkeletonRootUid(const FString& MeshInstanceUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInterchangeMeshInstance GetMeshInstanceByUid(const FString& MeshInstanceUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMeshGeometrySkeletonRootUid(const FString& MeshGeometryUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInterchangeMeshGeometry GetMeshGeometryByUid(const FString& MeshGeometryUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllStaticMeshInstance(TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllStaticMeshGeometry(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllSkinnedMeshInstance(TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllSkinnedMeshGeometry(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMeshInstanceUidsUsingMeshGeometryUid(const FString& MeshGeometryUid, TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMeshInstanceUids(TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMeshGeometryNotInstanced(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMeshGeometry(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintCallable)
    static UInterchangePipelineMeshesUtilities* CreateInterchangePipelineMeshesUtilities(UInterchangeBaseNodeContainer* BaseNodeContainer);
    
};

