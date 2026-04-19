#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid3DCollection.h"
#include "NiagaraDataInterfaceGrid3DCollectionReader.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DIName;
    
    UNiagaraDataInterfaceGrid3DCollectionReader();

};

