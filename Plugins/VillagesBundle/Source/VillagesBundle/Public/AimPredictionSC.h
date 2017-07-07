// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AimPredictionSC.generated.h"


enum EAimCommand
{
	verticalAim,
	horizontalAim
};
struct aimData
{
	EAimCommand command;
	float value;
	float timeStamp;
};

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VILLAGESBUNDLE_API UAimPredictionSC : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAimPredictionSC();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Villages")
	float upperPitchAngleLimit=70;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Villages")
	float lowerPitchAngleLimit= -70;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
