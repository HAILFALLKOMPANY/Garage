# Garage

Note:

OnlineBeacon<br />
-Need to spawn OBH in game level(exist in UWorld), spawn it in game instance will not work because Beacon NetDriver will shutdown.

Beacon Blueprint Usage  :<br /> 
You can make Blueprint Class of these three classes(Subclassing).<br />
VillagesCustomOBH<br />
VillagesCustomOBHO<br />
VillagesCustomOBC<br />

In Host(Beacon Server-side) level<br />
1.Spawn VillagesCustomOBH in the level ,this will be a host for all incoming client beacon connections.<br />
2.Spawn VillagesCustomOBHO in the same level.<br />
3.Use RegisterHost function from VillagesCustomOBH by have VillagesCustomOBHO as an argument.<br />
This will let Host know which type of client beacon class it must accept connection.<br />
You can set ClientBeacon class in default value of OBHO.<br />
![Alt text](/TutorialPictures/beacon4.PNG?raw=true "default class")
4.Set default port of Host for listening Beacon connection, default is 7787, you can set to other unused port number.<br />
5.Init Host to start to listening for Beacon connections.<br />
![Alt text](/TutorialPictures/beacon1.PNG?raw=true "in level Blueprint")

In Client Side<br />
6.Spawn VillagesCustomOBC.<br />
7.Use TryToConnect function from VillagesCustomOBC, enter IP of Beacon Host, port is optional(default is 7787).<br />
![Alt text](/TutorialPictures/beacon2.PNG?raw=true "client side")

8.You can implement event "When New Client Spawned" for do something with connected BeaconClient.
![Alt text](/TutorialPictures/beacon3.PNG?raw=true)

VillagesCustomOBC and its subclass when connected to server, it act like normal actor, it can call RPC and have variable replicated.<br />
But from client side BeaconClient have NO knowledges of other actors.<br />
So, this way you can communicate to server without having to travel to server.<br />

