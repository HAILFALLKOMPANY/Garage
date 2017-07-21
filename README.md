# Garage

Note:

OnlineBeacon
-Need to spawn OBH in game level(exist in UWorld), spawn it in game instance will not work because Beacon NetDriver will shutdown.

Beacon Blueprint Usage  : 
You can make Blueprint Class of these three classes.
VillagesCustomOBH
VillagesCustomOBHO
VillagesCustomOBC

In Host(Beacon Server-side) level
1.Spawn VillagesCustomOBH in the level ,this will be a host for all incoming client beacon connections.
2.Spawn VillagesCustomOBHO in the same level.
3.Use RegisterHost function from VillagesCustomOBH by have VillagesCustomOBHO as an argument.
This will let Host know which type of client beacon class it must accept connection.
You can set ClientBeacon class in default value of OBHO.
4.Set default port of Host for listening Beacon connection, default is 7787, you can set to other unused port number.
![Alt text](/TutorialPictures/beacon4.PNG?raw=true "default class")
![Alt text](/TutorialPictures/beacon1.PNG?raw=true "in level Blueprint")
![Alt text](/TutorialPictures/beacon2.PNG?raw=true)
![Alt text](/TutorialPictures/beacon3.PNG?raw=true)
