// Fill out your copyright notice in the Description page of Project Settings.

#include "AimPredictionSC.h"


// Sets default values for this component's properties


UAimPredictionSC::UAimPredictionSC()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


void UAimPredictionSC::addPitch(float value)
{
}

void UAimPredictionSC::addRotation(EAimCommand command, float value)
{
}



bool UAimPredictionSC::makeServerRotation_Validate(EAimCommand command, float value, FAimData data)
{
	return true;
}
void UAimPredictionSC::makeServerRotation_Implementation(EAimCommand command, float value, FAimData data)
{
	switch (command)
	{
	case EAimCommand::verticalAim :
		{
			FRotator tempRot(0,value,0);
			FQuat deltaQuat(tempRot);
			this->AddRelativeRotation(deltaQuat);
		}
		break;
	case EAimCommand::horizontalAim :
	{
		FRotator tempRot(0, 0, value);
		FQuat deltaQuat(tempRot);
		this->AddRelativeRotation(deltaQuat);
	}
	break;

	default:
		break;
	}
	
}



void UAimPredictionSC::addYaw(float value)
{
}

// Called when the game starts
void UAimPredictionSC::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAimPredictionSC::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

