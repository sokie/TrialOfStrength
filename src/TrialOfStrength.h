#ifndef MODULE_TRIAL_OF_STRENGTH_H
#define MODULE_TRIAL_OF_STRENGTH_H

#include "Player.h"
#include "ScriptMgr.h"
#include "CombatAI.h"
#include "Config.h"
#include "ScriptedGossip.h"

#include <vector>
#include <unordered_map>

enum ToSConstants {
    TOS_MAP_ID = 44,
    TOS_NPC_HANDLER = 441250,

    TOS_GOSSIP_TELEPORT_TO = 1,
    TOS_GOSSIP_TELEPORT_FROM = 2,
    TOS_GOSSIP_ENCOUNTER_START = 3,
    TOS_GOSSIP_ENCOUNTER_NEXT_WAVE = 4,
    TOS_GOSSIP_ENCOUNTER_RESET = 5,

    TOS_DATA_ENCOUNTER_START = 1,
    TOS_DATA_ENCOUNTER_CURRENT_WAVE = 2,
    TOS_DATA_ENCOUNTER_CURRENT_WAVE_CLEARED = 3,
    TOS_DATA_ENCOUNTER_HAS_MORE_WAVES = 4,
    TOS_DATA_ENCOUNTER_RESET = 5,
    TOS_DATA_ENCOUNTER_CURRENT_WAVE_REMAINING = 6,
    TOS_DATA_ENCOUNTER_COMBATANTS_HOSTILE = 7,
    TOS_DATA_ENCOUNTER_CHECK_WAVE_COMPLETE = 8,
};

struct ToSWaveTemplate {
    uint32 wave;
    uint32 enemyGroup;
    bool hasReward;
    uint32 rewardTemplate;
};

struct ToSEnemyGroup {
    uint32 id;
    uint32 group;
    uint32 subGroup;
    uint32 creatureEntry;
};

struct ToSRewardTemplate {
    uint32 itemEntry;
    uint32 countMin;
    uint32 countMax;
    uint32 chance;
};

std::unordered_map<uint32, ToSWaveTemplate> waveTemplates;
std::unordered_map<uint32, ToSEnemyGroup> enemyGroups;
std::unordered_map<uint32, ToSRewardTemplate> rewardTemplates;

ToSWaveTemplate* GetWaveTemplateForWave(uint32 wave);
std::vector<ToSEnemyGroup*> GetEnemiesFromGroup(uint32 groupId, uint32 subGroup);
ToSRewardTemplate* GetRewardTemplate(uint32 rewardId);
std::vector<uint32> GetSubGroups(uint32 groupId);

class ToSWorldScript : public WorldScript
{
public:
    ToSWorldScript() : WorldScript("ToSWorldScript") { }

    void OnAfterConfigLoad(bool /*reload*/) override;
};

#endif // MODULE_TRIAL_OF_STRENGTH_H
