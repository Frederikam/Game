#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MapLib.generated.h"
#include "EngineMinimal.h"
#include "Wizard.generated.h"


UCLASS(minimalapi)
class UMapLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	static void NewMap();
	
};

DECLARE_LOG_CATEGORY_EXTERN(Map, Log, All);