#pragma once
#include "CoreMinimal.h"
#include "FieldObjectCommands.generated.h"

class UFieldNodeBase;
class UFieldSystemMetaData;

USTRUCT(BlueprintType)
struct FFieldObjectCommands {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFieldNodeBase*> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFieldSystemMetaData*> MetaDatas;
    
    FIELDSYSTEMENGINE_API FFieldObjectCommands();
};

