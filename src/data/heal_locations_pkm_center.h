#define DEFAULT_POKEMON_CENTER_COORDS .x = 7, .y = 4

static const struct HealLocation sHealLocationsPokemonCenter[HEAL_LOCATION_COUNT - 1] =
{
    [HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F - 1] =
    {
        .group = MAP_GROUP(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
        .map = MAP_NUM(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
        .x = 2,
        .y = 7,
    },
    [HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F - 1] =
    {
        .group = MAP_GROUP(LITTLEROOT_TOWN_MAYS_HOUSE_1F),
        .map = MAP_NUM(LITTLEROOT_TOWN_MAYS_HOUSE_1F),
        .x = 8,
        .y = 7,
    },
    [HEAL_LOCATION_PETALBURG_CITY - 1] =
    {
        .group = MAP_GROUP(ASTRALIS_ACADEMY_POKEMON_CENTER_1F),
        .map = MAP_NUM(ASTRALIS_ACADEMY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_SLATEPORT_CITY - 1] =
    {
        .group = MAP_GROUP(SLATEPORT_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(SLATEPORT_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_MAUVILLE_CITY - 1] =
    {
        .group = MAP_GROUP(MAUVILLE_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(MAUVILLE_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_RUSTBORO_CITY - 1] =
    {
        .group = MAP_GROUP(RUSTBORO_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(RUSTBORO_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_FORTREE_CITY - 1] =
    {
        .group = MAP_GROUP(FORTREE_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(FORTREE_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_LILYCOVE_CITY - 1] =
    {
        .group = MAP_GROUP(LILYCOVE_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(LILYCOVE_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_MOSSDEEP_CITY - 1] =
    {
        .group = MAP_GROUP(MOSSDEEP_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(MOSSDEEP_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_SOOTOPOLIS_CITY - 1] =
    {
        .group = MAP_GROUP(SOOTOPOLIS_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(SOOTOPOLIS_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_EVER_GRANDE_CITY - 1] =
    {
        .group = MAP_GROUP(EVER_GRANDE_CITY_POKEMON_CENTER_1F),
        .map = MAP_NUM(EVER_GRANDE_CITY_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE - 1] =
    {
        .group = MAP_GROUP(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
        .map = MAP_NUM(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
        .x = 2,
        .y = 7,
    },
    [HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE - 1] =
    {
        .group = MAP_GROUP(LITTLEROOT_TOWN_MAYS_HOUSE_1F),
        .map = MAP_NUM(LITTLEROOT_TOWN_MAYS_HOUSE_1F),
        .x = 8,
        .y = 7,
    },
    [HEAL_LOCATION_OLDALE_TOWN - 1] =
    {
        .group = MAP_GROUP(OLDALE_TOWN_POKEMON_CENTER_1F),
        .map = MAP_NUM(OLDALE_TOWN_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_DEWFORD_TOWN - 1] =
    {
        .group = MAP_GROUP(DEWFORD_TOWN_POKEMON_CENTER_1F),
        .map = MAP_NUM(DEWFORD_TOWN_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_LAVARIDGE_TOWN - 1] =
    {
        .group = MAP_GROUP(LAVARIDGE_TOWN_POKEMON_CENTER_1F),
        .map = MAP_NUM(LAVARIDGE_TOWN_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_FALLARBOR_TOWN - 1] =
    {
        .group = MAP_GROUP(FALLARBOR_TOWN_POKEMON_CENTER_1F),
        .map = MAP_NUM(FALLARBOR_TOWN_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_VERDANTURF_TOWN - 1] =
    {
        .group = MAP_GROUP(VERDANTURF_TOWN_POKEMON_CENTER_1F),
        .map = MAP_NUM(VERDANTURF_TOWN_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_PACIFIDLOG_TOWN - 1] =
    {
        .group = MAP_GROUP(PACIFIDLOG_TOWN_POKEMON_CENTER_1F),
        .map = MAP_NUM(PACIFIDLOG_TOWN_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE - 1] =
    {
        .group = MAP_GROUP(EVER_GRANDE_CITY_POKEMON_LEAGUE_1F),
        .map = MAP_NUM(EVER_GRANDE_CITY_POKEMON_LEAGUE_1F),
        .x = 3,
        .y = 4,
    },
    [HEAL_LOCATION_SOUTHERN_ISLAND_EXTERIOR - 1] =
    {
        .group = MAP_GROUP(SOUTHERN_ISLAND_EXTERIOR),
        .map = MAP_NUM(SOUTHERN_ISLAND_EXTERIOR),
        .x = 15,
        .y = 20,
    },
    [HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST - 1] =
    {
        .group = MAP_GROUP(BATTLE_FRONTIER_POKEMON_CENTER_1F),
        .map = MAP_NUM(BATTLE_FRONTIER_POKEMON_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
};

#undef DEFAULT_POKEMON_CENTER_COORDS

// localIds can be found in the generated events.inc file for the specific heal location map
// e.g. for OldaleTown_PokemonCenter1F/events.inc the following entry gets generated:
// object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_PokemonCenter_1F_EventScript_Nurse, 0
// In this case the localId is 1.
static const u8 sHealNpcLocalId[HEAL_LOCATION_COUNT - 1] =
{
    [HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F - 1] = 1,
    [HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F - 1] = 1,
    [HEAL_LOCATION_PETALBURG_CITY - 1] = 1,
    [HEAL_LOCATION_SLATEPORT_CITY - 1] = 1,
    [HEAL_LOCATION_MAUVILLE_CITY - 1] = 1,
    [HEAL_LOCATION_RUSTBORO_CITY - 1] = 1,
    [HEAL_LOCATION_FORTREE_CITY - 1] = 1,
    [HEAL_LOCATION_LILYCOVE_CITY - 1] = 1,
    [HEAL_LOCATION_MOSSDEEP_CITY - 1] = 1,
    [HEAL_LOCATION_SOOTOPOLIS_CITY - 1] = 1,
    [HEAL_LOCATION_EVER_GRANDE_CITY - 1] = 1,
    [HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE - 1] = 1,
    [HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE - 1] = 1,
    [HEAL_LOCATION_OLDALE_TOWN - 1] = 1,
    [HEAL_LOCATION_DEWFORD_TOWN - 1] = 1,
    [HEAL_LOCATION_LAVARIDGE_TOWN - 1] = 1,
    [HEAL_LOCATION_FALLARBOR_TOWN - 1] = 1,
    [HEAL_LOCATION_VERDANTURF_TOWN - 1] = 1,
    [HEAL_LOCATION_PACIFIDLOG_TOWN - 1] = 1,
    [HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE - 1] = 1,
    [HEAL_LOCATION_SOUTHERN_ISLAND_EXTERIOR - 1] = 0, // no heal npc
    [HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST - 1] = 1,
};
