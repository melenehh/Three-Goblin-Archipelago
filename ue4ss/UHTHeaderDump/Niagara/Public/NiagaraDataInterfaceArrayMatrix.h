#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix44f -FallbackName=Matrix44f
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayMatrix.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatrix44f> InternalMatrixData;
    
    UNiagaraDataInterfaceArrayMatrix();

};

