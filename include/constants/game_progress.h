#ifndef GUARD_CONSTANTS_GAME_PROGRESS_H
#define GUARD_CONSTANTS_GAME_PROGRESS_H

/*

? Game Progress var is a tracker for the 'main story'. 
I could use a bunch of flags, but its easier to use a linear progression since the events are expected to be 
shown / seen in order. Skipping over one will also make disabling previous events easier (if var > value), instead
of having to try and check relevant flags. 
Flags will still be used for simplicity in some places, or for one offs (side quests).
tl;dr

*If it's a one time event that ties into the player progression or main characters, it's a game progress enum.

*/

enum GameProgress {
    GP_NOT_STARTED,
    GP_BOAT_ROOM,
    GP_BEFORE_PICK_STARTER,
    GP_PICKING_STARTER,
    GP_LEFT_BOAT,
    GP_HORIZON_PORT_RIVAL_ENCOUNTERED,
    GP_REST_AREA_1_ENCOUNTERED,
    GP_DIGGERS_HUT_ENCOUNTERED,
    GP_FOREST_JOSIE_ENCOUNTERED
};

#endif