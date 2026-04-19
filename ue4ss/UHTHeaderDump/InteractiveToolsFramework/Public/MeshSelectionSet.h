#pragma once
#include "CoreMinimal.h"
#include "SelectionSet.h"
#include "MeshSelectionSet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSelectionSet : public USelectionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Edges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Faces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Groups;
    
    UMeshSelectionSet();

};

