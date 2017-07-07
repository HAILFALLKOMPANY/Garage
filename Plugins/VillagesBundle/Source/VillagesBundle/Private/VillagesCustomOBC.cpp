// Fill out your copyright notice in the Description page of Project Settings.

#include "VillagesCustomOBC.h"

FString AVillagesCustomOBC::GetBeaconType()
{
	return Super::GetBeaconType();
}

bool AVillagesCustomOBC::tryToConnectURL(FString URL, int32 port)
{
	FURL tempURL(NULL, *URL, TRAVEL_Absolute);
	if (port != 0)
	{
		tempURL.Port = port;
	}
	return InitClient(tempURL);
}
