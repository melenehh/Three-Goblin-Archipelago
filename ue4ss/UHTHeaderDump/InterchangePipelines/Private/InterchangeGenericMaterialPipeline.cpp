#include "InterchangeGenericMaterialPipeline.h"
#include "InterchangeGenericTexturePipeline.h"

UInterchangeGenericMaterialPipeline::UInterchangeGenericMaterialPipeline() {
    this->bImportMaterials = true;
    this->MaterialImport = EInterchangeMaterialImportOption::ImportAsMaterials;
    this->TexturePipeline = CreateDefaultSubobject<UInterchangeGenericTexturePipeline>(TEXT("TexturePipeline"));
    this->BaseNodeContainer = NULL;
}


