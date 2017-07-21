// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AimPredictionSC.generated.h"

UENUM()
enum EAimCommand
{
	verticalAim,
	horizontalAim
};

USTRUCT()
struct FAimData
{
	GENERATED_BODY()
	EAimCommand command;
	float value;
	float timeStamp;
};

UCLASS(Blueprintable, ClassGroup=(Villages), meta=(BlueprintSpawnableComponent) )
class VILLAGESBUNDLE_API UAimPredictionSC : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAimPredictionSC();
	//Must call from client only!
	UFUNCTION(BlueprintCallable)
		void addPitch(float value);

		void addRotation(EAimCommand command, float value);
		

	UFUNCTION(Server, Reliable, WithValidation)
		void makeServerRotation(EAimCommand command, float value, FAimData data);

	//Must call from client only!
	UFUNCTION(BlueprintCallable)
		void addYaw(float value);
	
	UPROPERTY(EditDefaultsOnly, Category = "Villages")
		int32 frameStackLimit = 600;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
