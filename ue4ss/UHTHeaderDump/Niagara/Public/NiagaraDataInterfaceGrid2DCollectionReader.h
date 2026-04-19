#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid2DCollection.h"
#include "NiagaraDataInterfaceGrid2DCollectionReader.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DIName;
    
    UNiagaraDataInterfaceGrid2DCollectionReader();

};

