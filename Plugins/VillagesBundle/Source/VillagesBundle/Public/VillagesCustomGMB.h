// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VillagesCustomGMB.generated.h"

/**
 * 
 */
UCLASS()
class VILLAGESBUNDLE_API AVillagesCustomGMB : public AGameModeBase
{
	GENERATED_BODY()
		
public:

		UFUNCTION(BlueprintImplementableEvent)
		void PreLogin
		(
			const FString & Options,
			const FString & Address,
			const FUniqueNetIdRepl & UniqueId,
			FString & ErrorMessage
			);

		UFUNCTION(BlueprintImplementableEvent)
			 void GameWelcomePlayer
			(
				UNetConnection * Connection,
				FString & RedirectURL
				);

};
