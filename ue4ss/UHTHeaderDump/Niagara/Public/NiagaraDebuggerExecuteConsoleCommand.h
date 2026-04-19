#pragma once
#include "CoreMinimal.h"
#include "NiagaraDebuggerExecuteConsoleCommand.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDebuggerExecuteConsoleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresWorld;
    
    NIAGARA_API FNiagaraDebuggerExecuteConsoleCommand();
};

