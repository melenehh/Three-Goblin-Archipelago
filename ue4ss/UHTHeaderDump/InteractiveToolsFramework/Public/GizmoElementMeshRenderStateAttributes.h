#pragma once
#include "CoreMinimal.h"
#include "GizmoElementColorAttribute.h"
#include "GizmoElementMaterialAttribute.h"
#include "GizmoElementMeshRenderStateAttributes.generated.h"

USTRUCT(BlueprintType)
struct FGizmoElementMeshRenderStateAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementMaterialAttribute Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementMaterialAttribute HoverMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementMaterialAttribute InteractMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementColorAttribute VertexColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementColorAttribute HoverVertexColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoElementColorAttribute InteractVertexColor;
    
    INTERACTIVETOOLSFRAMEWORK_API FGizmoElementMeshRenderStateAttributes();
};

