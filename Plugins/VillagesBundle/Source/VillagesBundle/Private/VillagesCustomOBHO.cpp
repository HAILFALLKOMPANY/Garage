// Fill out your copyright notice in the Description page of Project Settings.

#include "VillagesCustomOBHO.h"
#include "VillagesCustomOBC.h"

AVillagesCustomOBHO::AVillagesCustomOBHO(const FObjectInitializer & ObjectInitializer) :
	Super(ObjectInitializer)
{
	configClientBeaconActorClass = AVillagesCustomOBC::StaticClass();
	applyBeaconCurrentActorClass();
}

void AVillagesCustomOBHO::applyBeaconCurrentActorClass() 
{
	ClientBeaconActorClass = configClientBeaconActorClass;
	BeaconTypeName = ClientBeaconActorClass->GetName();
}

