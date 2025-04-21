/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID ACID_LOOP = 1339187379U;
        static const AkUniqueID AMB_HOSPITAL_LOOP = 3217822573U;
        static const AkUniqueID MUSIC_START = 3725903807U;
        static const AkUniqueID ROOM_AMB = 3789107537U;
        static const AkUniqueID SFX_DOORANDKEY_KEY_COLLECT = 4161317462U;
        static const AkUniqueID SFX_ENEMIES_BLOODCELL_DEATH = 1012708473U;
        static const AkUniqueID SFX_ENEMIES_BLOODCELL_HIT = 3902373752U;
        static const AkUniqueID SFX_ENEMIES_BLOODCELL_IDLE = 1098573287U;
        static const AkUniqueID SFX_ENEMIES_FATBLOB_DISSOLVE = 3801009704U;
        static const AkUniqueID SFX_ENEMIES_FATBLOB_IDLE = 3292684059U;
        static const AkUniqueID SFX_ENEMIES_GERMSLIME_DEATH = 102550024U;
        static const AkUniqueID SFX_ENEMIES_GERMSLIME_HIT = 3369942825U;
        static const AkUniqueID SFX_ENEMIES_GERMSLIME_IDLE = 3055844788U;
        static const AkUniqueID SFX_ENEMIES_GERMSPIKE_DEATH = 1948922918U;
        static const AkUniqueID SFX_ENEMIES_GERMSPIKE_HIT = 3347914759U;
        static const AkUniqueID SFX_ENEMIES_GERMSPIKE_IDLE = 2334927414U;
        static const AkUniqueID SFX_PLAYER_FS = 960125980U;
        static const AkUniqueID SFX_PLAYER_FS_MATERIAL_FLESH = 3000572683U;
        static const AkUniqueID SFX_PLAYER_FS_MATERIAL_WATER = 2418061404U;
        static const AkUniqueID SFX_PLAYER_JUMP = 648313621U;
        static const AkUniqueID SFX_PLAYER_LAND = 2972376730U;
        static const AkUniqueID SFX_WEAPON_ALL_SWAP = 3791724757U;
        static const AkUniqueID SFX_WEAPON_GERMOBLASTER_FIRE = 1631753596U;
        static const AkUniqueID SFX_WEAPON_GERMOBLASTER_RELOAD = 228935287U;
        static const AkUniqueID SFX_WEAPON_HEALMATIC500_FIRE = 1355404468U;
        static const AkUniqueID SFX_WEAPON_HEALMATIC500_RELOAD = 3358445023U;
        static const AkUniqueID SFX_WEAPON_PILL_EXPLODE = 2968060059U;
        static const AkUniqueID SFX_WEAPON_PILL_RELOAD = 1796022955U;
        static const AkUniqueID SFX_WEAPON_PILL_THROW = 1104292844U;
        static const AkUniqueID TAKEOUT = 3201467664U;
        static const AkUniqueID TEST_HUM = 3394514118U;
        static const AkUniqueID TEST_POP = 3024126497U;
        static const AkUniqueID UI_HOVER = 2118900976U;
        static const AkUniqueID UI_PAUSE = 2792155208U;
        static const AkUniqueID UI_SELECT = 2774129122U;
        static const AkUniqueID UI_UNPAUSE = 183167143U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace FS_MATERIAL
        {
            static const AkUniqueID GROUP = 20433824U;

            namespace STATE
            {
                static const AkUniqueID FLESH = 1153642577U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID WATER = 2654748154U;
            } // namespace STATE
        } // namespace FS_MATERIAL

        namespace MUSIC_ROOM
        {
            static const AkUniqueID GROUP = 212799888U;

            namespace STATE
            {
                static const AkUniqueID BRAIN = 136808247U;
                static const AkUniqueID HEART = 2665378999U;
                static const AkUniqueID HOME = 3181406844U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID STOMACH = 1434060888U;
            } // namespace STATE
        } // namespace MUSIC_ROOM

        namespace PAUSE
        {
            static const AkUniqueID GROUP = 3092587493U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID PAUSED = 319258907U;
                static const AkUniqueID UNPAUSED = 1365518790U;
            } // namespace STATE
        } // namespace PAUSE

        namespace ROOM_AMB
        {
            static const AkUniqueID GROUP = 3789107537U;

            namespace STATE
            {
                static const AkUniqueID LARGE = 4284352190U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID SMALL = 1846755610U;
                static const AkUniqueID STOMACH = 1434060888U;
            } // namespace STATE
        } // namespace ROOM_AMB

    } // namespace STATES

    namespace SWITCHES
    {
        namespace MATERIALS
        {
            static const AkUniqueID GROUP = 4050929301U;

            namespace SWITCH
            {
                static const AkUniqueID FLESH = 1153642577U;
                static const AkUniqueID WATER = 2654748154U;
            } // namespace SWITCH
        } // namespace MATERIALS

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID AMBVOLUME = 4209755525U;
        static const AkUniqueID MUSICVOLUME = 2346531308U;
        static const AkUniqueID SFXVOLUME = 988953028U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MAIN = 3161908922U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID AMB_BUS = 1313057045U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MUSIC_BUS = 3127962312U;
        static const AkUniqueID SFX_BUS = 1502772432U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
