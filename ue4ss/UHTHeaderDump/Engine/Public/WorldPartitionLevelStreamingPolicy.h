#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=TopLevelAssetPath -FallbackName=TopLevelAssetPath
#include "WorldPartitionStreamingPolicy.h"
#include "WorldPartitionLevelStreamingPolicy.generated.h"

class URuntimeHashExternalStreamingObjectBase;

UCLASS(Blueprintable)
class UWorldPartitionLevelStreamingPolicy : public UWorldPartitionStreamingPolicy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTopLevelAssetPath SourceWorldAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SubObjectsToCellRemapping;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase>> ExternalStreamingObjects;
    
public:
    UWorldPartitionLevelStreamingPolicy();

};

