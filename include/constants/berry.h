#ifndef GUARD_CONSTANTS_BERRY_H
#define GUARD_CONSTANTS_BERRY_H

#define BERRY_NONE 0

enum BerryFirmness
{
    BERRY_FIRMNESS_UNKNOWN,
    BERRY_FIRMNESS_VERY_SOFT,
    BERRY_FIRMNESS_SOFT,
    BERRY_FIRMNESS_HARD,
    BERRY_FIRMNESS_VERY_HARD,
    BERRY_FIRMNESS_SUPER_HARD,
};

enum BerryColor
{
    BERRY_COLOR_RED,
    BERRY_COLOR_BLUE,
    BERRY_COLOR_PURPLE,
    BERRY_COLOR_GREEN,
    BERRY_COLOR_YELLOW,
    BERRY_COLOR_PINK,
};

enum __attribute__((__packed__)) Flavor
{
    FLAVOR_SPICY,
    FLAVOR_DRY,
    FLAVOR_SWEET,
    FLAVOR_BITTER,
    FLAVOR_SOUR,
    FLAVOR_COUNT,
};

#define BERRY_STAGE_NO_BERRY    0  // there is no tree planted and the soil is completely flat.
#define BERRY_STAGE_PLANTED     1
#define BERRY_STAGE_SPROUTED    2
#define BERRY_STAGE_TALLER      3
#define BERRY_STAGE_FLOWERING   4
#define BERRY_STAGE_BERRIES     5
#define BERRY_STAGE_TRUNK       6 // These follow BERRY_STAGE_BERRIES to preserve save compatibility
#define BERRY_STAGE_BUDDING     7
#define BERRY_STAGE_SPARKLING   255

// Berries can be watered in the following stages:
// - BERRY_STAGE_PLANTED
// - BERRY_STAGE_SPROUTED
// - BERRY_STAGE_TALLER
// - BERRY_STAGE_FLOWERING
#define NUM_WATER_STAGES 4

// IDs for berry tree objects, indexes into berryTrees in SaveBlock1
// Named for whatever berry is initially planted there on a new game
// Those with no initial berry are named "soil"
#define BERRY_TREE_UNUSED       1
#define BERRY_TREE_UNUSED       2
#define BERRY_TREE_UNUSED       3
#define BERRY_TREE_UNUSED       4
#define BERRY_TREE_UNUSED       5
#define BERRY_TREE_UNUSED       6
#define BERRY_TREE_UNUSED       7
#define BERRY_TREE_UNUSED       8
#define BERRY_TREE_UNUSED       9
#define BERRY_TREE_UNUSED       10
#define BERRY_TREE_UNUSED       11
#define BERRY_TREE_UNUSED       12
#define BERRY_TREE_UNUSED       13
#define BERRY_TREE_UNUSED       14
#define BERRY_TREE_UNUSED       15
#define BERRY_TREE_UNUSED       16
#define BERRY_TREE_UNUSED       17
#define BERRY_TREE_UNUSED       18
#define BERRY_TREE_UNUSED       19
#define BERRY_TREE_UNUSED       20
#define BERRY_TREE_UNUSED       21
#define BERRY_TREE_UNUSED       22
#define BERRY_TREE_UNUSED       23
#define BERRY_TREE_UNUSED       24
#define BERRY_TREE_UNUSED       25
#define BERRY_TREE_UNUSED       26
#define BERRY_TREE_UNUSED       27
#define BERRY_TREE_UNUSED       28
#define BERRY_TREE_UNUSED       29
#define BERRY_TREE_UNUSED       30
#define BERRY_TREE_UNUSED       31
#define BERRY_TREE_UNUSED       32
#define BERRY_TREE_UNUSED       33
#define BERRY_TREE_UNUSED       34
#define BERRY_TREE_UNUSED       35
#define BERRY_TREE_UNUSED       36
#define BERRY_TREE_UNUSED       37
#define BERRY_TREE_UNUSED       38
#define BERRY_TREE_UNUSED       39
#define BERRY_TREE_UNUSED       40
#define BERRY_TREE_UNUSED       41
#define BERRY_TREE_UNUSED       42
#define BERRY_TREE_UNUSED       43
#define BERRY_TREE_UNUSED       44
#define BERRY_TREE_UNUSED       45
#define BERRY_TREE_UNUSED       46
#define BERRY_TREE_UNUSED       47
#define BERRY_TREE_UNUSED       48
#define BERRY_TREE_UNUSED       49
#define BERRY_TREE_UNUSED       50
#define BERRY_TREE_UNUSED       51
#define BERRY_TREE_UNUSED       52
#define BERRY_TREE_UNUSED       53
#define BERRY_TREE_UNUSED       54
#define BERRY_TREE_UNUSED       55
#define BERRY_TREE_UNUSED       56
#define BERRY_TREE_UNUSED       57
#define BERRY_TREE_UNUSED       58
#define BERRY_TREE_UNUSED       59
#define BERRY_TREE_UNUSED       60
#define BERRY_TREE_UNUSED       61
#define BERRY_TREE_UNUSED       62
#define BERRY_TREE_UNUSED       63
#define BERRY_TREE_UNUSED       64
#define BERRY_TREE_UNUSED       65
#define BERRY_TREE_UNUSED       66
#define BERRY_TREE_UNUSED       67
#define BERRY_TREE_UNUSED       68
#define BERRY_TREE_UNUSED       69
#define BERRY_TREE_UNUSED       70
#define BERRY_TREE_UNUSED       71
#define BERRY_TREE_UNUSED       72
#define BERRY_TREE_UNUSED       73
#define BERRY_TREE_UNUSED       74
#define BERRY_TREE_UNUSED       75
#define BERRY_TREE_UNUSED       76
#define BERRY_TREE_UNUSED       77
#define BERRY_TREE_UNUSED       78
#define BERRY_TREE_UNUSED       79
#define BERRY_TREE_UNUSED       80
#define BERRY_TREE_UNUSED       81
#define BERRY_TREE_ROUTE_130_LIECHI   82 // MIRAGE ISLAND
#define BERRY_TREE_UNUSED       83
#define BERRY_TREE_UNUSED       84
#define BERRY_TREE_UNUSED       85
#define BERRY_TREE_UNUSED       86
#define BERRY_TREE_UNUSED       87
#define BERRY_TREE_UNUSED       88
#define BERRY_TREE_UNUSED       89

// Remainder are unused

#define BERRY_TREES_COUNT 128

#endif // GUARD_CONSTANTS_BERRY_H
