# Garage
My Plugins
Note:

-Need to spawn OBH in game level(exist in UWorld), spawn it in game instance will not work because Beacon NetDriver will shutdown.

-Need to DESTROY OBC instance(DestroyBeacon function) that connected to host(OBH) BEFORE travelling to that host's map,
 otherwise you will encounter SERVER CRASH(access violation) because OBH  read ClientActor(in ClientActor array) 
that has modified by another events(That my guess from my Debug build) 
