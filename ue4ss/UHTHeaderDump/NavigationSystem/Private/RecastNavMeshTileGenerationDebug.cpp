#include "RecastNavMeshTileGenerationDebug.h"

FRecastNavMeshTileGenerationDebug::FRecastNavMeshTileGenerationDebug() {
    this->bEnabled = false;
    this->bGenerateDebugTileOnly = false;
    this->bCollisionGeometry = false;
    this->HeightFieldRenderMode = EHeightFieldRenderMode::Solid;
    this->bHeightfieldFromRasterization = false;
    this->bHeightfieldPostInclusionBoundsFiltering = false;
    this->bHeightfieldPostHeightFiltering = false;
    this->bHeightfieldBounds = false;
    this->bCompactHeightfield = false;
    this->bCompactHeightfieldEroded = false;
    this->bCompactHeightfieldRegions = false;
    this->bCompactHeightfieldDistances = false;
    this->bTileCacheLayerAreas = false;
    this->bTileCacheLayerRegions = false;
    this->bTileCacheContours = false;
    this->bTileCachePolyMesh = false;
    this->bTileCacheDetailMesh = false;
}

