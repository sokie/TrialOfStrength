/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_BRD_TOS_H
#define DEF_BRD_TOS_H

#include "CreatureAIImpl.h"
#include "ToSMapMgr.h"

#define DataHeader "BRD"
#define BRDScriptName "instance_blackrock_depths"

enum FactionIds
{
    FACTION_NEUTRAL            = 674,
    FACTION_HOSTILE            = 754,
    FACTION_FRIEND             = 35
};

enum BRDBosses
{
    BOSS_AMBASSADOR_FLAMELASH = 0,
};



enum Creatures
{
    NPC_EMPEROR   = 9019,
    NPC_PHALANX   = 9502,
    NPC_ANGERREL  = 9035,
    NPC_DOPEREL   = 9040,
    NPC_HATEREL   = 9034,
    NPC_VILEREL   = 9036,
    NPC_SEETHREL  = 9038,
    NPC_GLOOMREL  = 9037,
    NPC_DOOMREL   = 9039,
    NPC_MOIRA     = 8929,
    NPC_PRIESTESS = 10076,

    NPC_WATCHMAN_DOOMGRIP = 9476,

    NPC_WEAPON_TECHNICIAN      = 8920,
    NPC_DOOMFORGE_ARCANASMITH  = 8900,
    NPC_RAGEREAVER_GOLEM       = 8906,
    NPC_WRATH_HAMMER_CONSTRUCT = 8907,
    NPC_GOLEM_LORD_ARGELMACH   = 8983,

    NPC_COREN_DIREBREW = 23872,

    NPC_IRONHAND_GUARDIAN = 8982,

    NPC_ARENA_SPECTATOR     = 8916,
    NPC_SHADOWFORGE_PEASANT = 8896,
    NPC_SHADOWFORCE_CITIZEN = 8902,

    NPC_SHADOWFORGE_SENATOR = 8904,

    NPC_MAGMUS = 9938,

    NPC_DREDGE_WORM     = 8925,
    NPC_DEEP_STINGER    = 8926,
    NPC_DARK_SCREECHER  = 8927,
    NPC_THUNDERSNOUT    = 8928,
    NPC_BORER_BEETLE    = 8932,
    NPC_CAVE_CREEPER    = 8933,
    NPC_GOROSH          = 9027,
    NPC_GRIZZLE         = 9028,
    NPC_EVISCERATOR     = 9029,
    NPC_OKTHOR          = 9030,
    NPC_ANUBSHIAH       = 9031,
    NPC_HEDRUM          = 9032
};

enum ToSInstanceConstants
{
    TOS_SOUND_HORN = 6140,
    TOS_SOUND_CHEER = 13904,
    TOS_SOUND_FAIL = 847,

    TOS_GOB_REWARD_CHEST = 441250,
    TOS_GOB_REWARD_BEAM = 441251,
    TOS_GOB_CURSE = 441252,

    TOS_SPELL_EXHAUSTION = 57723
};

enum eChallenge
{
    QUEST_THE_CHALLENGE      = 9015,
    GO_BANNER_OF_PROVOCATION = 181058,
    GO_ARENA_SPOILS          = 181074,

    NPC_GRIMSTONE = 10096,
    NPC_THELDREN  = 16059,
};

const uint32 theldrenTeam[] = {16053, 16055, 16050, 16051, 16049, 16052, 16054, 16058};

template <class AI, class T>
inline AI* GetBlackrockDepthsAI(T* obj)
{
    return GetInstanceAI<AI>(obj, BRDScriptName);
}

#endif
