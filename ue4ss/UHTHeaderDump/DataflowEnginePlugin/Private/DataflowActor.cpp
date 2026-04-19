#include "DataflowActor.h"
#include "DataflowComponent.h"

ADataflowActor::ADataflowActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDataflowComponent>(TEXT("DataflowComponent0"));
    this->DataflowComponent = (UDataflowComponent*)RootComponent;
}


