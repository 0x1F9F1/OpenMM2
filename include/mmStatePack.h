#pragma once

enum dgGameMode : uint32_t
{
    Cruise,
    Checkpoint,
    CnR,
    Circuit,
    Blitz,
    CRoam, // unused
    CrashCourse,
};

enum dgSkillLevel : uint32_t
{
    Amateur,
    Professional,
};

class dgStatePack
{
public:
    dgGameMode GameMode;

    int RaceId;

    float TrafficDensity;
    float PedestrianDensity;
    float CopDensity;
    float OpponentDensity;

    /* ---- MC1 leftovers ---- */
    float unk_18; // unused (default: 0.5)
    float unk_1C; // unused (default: 0.5)
    float unk_20; // unused (default: 0.5)
    bool unk_24;  // unused (default: 1)

    int NumberOfCTFRacers; // default: 0
                           /* ----------------------- */

    BOOL DisableAI;

    int unk_30; // unused
    int MaxAmbientVehicles;
    int MaxAmbientPedestrians; // unused -- assumed name (default: 100)
    int unk_3C; // unused

    BOOL EnableCableCars;
    BOOL EnableSubways;

    int NumLaps;

    int TextureQuality;
    int unk_50; // unused (default: 99)

    int TimeOfDay;
    int WeatherType;
    dgSkillLevel SkillLevel;

    // 0x1 | Sound Enabled
    // 0x4 | CD Player Enabled
    int AudioFlags;

    BOOL EnablePedestrians;
    void *unk_68; // related to hookmen

    dgStatePack();
    ~dgStatePack();

    declstatic(dgStatePack*, Instance);
};

check_size(dgStatePack, 0x6C);

class NetStartArray
{
public:
    uint32_t Slots[10];

    NetStartArray();
    ~NetStartArray();

    void Clear();
};

check_size(NetStartArray, 0x28);

class mmStatePack
    : public dgStatePack
{
public:
    char CityName[40];
    char CityLocale[40]; // same as city name, referred to as 'locale'?
    char ReplayName[40];

    int VehicleId;

    int InputDevice;
    int unk_EC; // seems heavily tied into multiplayer, but also has singleplayer uses?

    BOOL CopsChaseAI; // cops will chase after opponents
    int unk_F4; // unused

    BOOL Shutdown; // stop the process

                   /*
                   Player settings
                   */

    float Difficulty; // based on the SkillLevel
    int TransmissionType;
    float PhysicsRealism; // unused :(
    BOOL UseForceFeedback;
    BOOL DisableProfile;

    char VehicleName[80];
    int VehiclePaintjob;

    char NetName[80];

    /*
    Race settings?
    */

    float TimeLimit;

    int GameState; // -1 = ???, 0 = main menu, 1 = race
    BOOL DisableRegen; // educated guess based on a skipped call to mmPlayer::UpdateRegen if true

                       /*
                       Audio settings
                       */

    float SoundFXVolume;
    float AudioBalance;
    float MusicVolume;
    short NumAudioChannels;
    short unk_1CE[10]; // unused -- not sure what this might've been
    char AudioDeviceName[200];
    bool HasMusicCD; // allow use of music player if true

                     /*
                     Cops 'n Robbers settings
                     */

    int CnRMode;
    int CnRLimitType;
    int CnRTeam;
    float CnRTimeLimit;
    int CnRPointLimit;
    int CnRGoldMass;

    /*
    Unknown settings (unused)
    */

    int unk_2C4; // default: 0
    int unk_2C8; // default: 0
    char unk_2CC[160];

    /*
    View settings (NAMES NEED CONFIRMATION!)
    */

    bool unk_36C;
    char MapMode;
    bool UseWideFOV;
    bool ShowDash;

    bool ShowMirror;
    bool unk_371;
    bool unk_372;
    bool ShowIcons;

    bool unk_374;
    bool unk_375;
    bool HudOrient;
    bool HudZoomIn;

    /*
    Graphics settings
    */

    BOOL BestTextureFilter; // MM1 - unused
    BOOL InterlacedRendering; // MM1 - unused
    float FarClip;
    BOOL EnableSky;
    float LightingQuality;
    BOOL UsePortals;
    int ObjectDetail;
    BOOL EnableReflections; // vehicle reflections
    int CloudShadowQuality;

    /*
    Cheat settings?
    */

    BOOL IsCheating; // true if player entered a cheatcode
    float TimeLimitOverride; // overrides TimeLimit when > 0
    BOOL UnlockRewards; // only works on startup

                        /*
                        Multiplayer settings
                        */

    bool AllowCheaters; // don't check tuning CRC
    bool ShowMultiplayerResults; // display results at end of multiplayer
    bool IsHost; // unconfirmed
    bool UseDialup;

    /*
    Global settings?
    */

    BOOL UseIME;
    HIMC IMEContext;

    bool InCrashCourse;

    NetStartArray NetStartArray;

    mmStatePack();
    ~mmStatePack();

    void SetDefaults(const char* level, const char* car);
    bool ParseStateArgs(void);
};

extern const char* dgGameModeNames[7];

// Guess
check_size(mmStatePack, 0x3E0);

declvar(mmStatePack, MMSTATE);