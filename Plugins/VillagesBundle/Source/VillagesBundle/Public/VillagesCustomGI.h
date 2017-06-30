// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VillagesCustomGI.generated.h"

/**
 * 
 */
UCLASS()
class VILLAGESBUNDLE_API UVillagesCustomGI : public UGameInstance
{
	GENERATED_BODY()

public:

		UFUNCTION(BlueprintImplementableEvent)
		void HandleGameNetControlMessage
		(
			class UNetConnection * Connection,
			uint8 MessageByte,
			const FString & MessageStr
		);
	
	
};
