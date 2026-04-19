#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFMaterialExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class GLTFEXPORTER_API UGLTFMaterialExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
    UGLTFMaterialExporter();

};

