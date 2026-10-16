#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x0A, _space_skybox_yay0SegmentRomStart, _space_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(31, LEVEL_CASTLE_GROUNDS, 4, 31, WARP_NO_CHECKPOINT),
		WARP_NODE(32, LEVEL_CASTLE_GROUNDS, 4, 32, WARP_NO_CHECKPOINT),
		WARP_NODE(33, LEVEL_CASTLE, 0x02, 35, WARP_NO_CHECKPOINT),
		WARP_NODE(34, LEVEL_CASTLE, 0x02, 36, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_PM_DOUBLE_DOOR, -73, 3, 2054, 0, 0, 0, (31 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_DOUBLE_DOOR, 84, 3, 2054, 0, 180, 0, (32 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_DOUBLE_DOOR, -73, 515, -1154, 0, 0, 0, (33 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_DOUBLE_DOOR, 85, 515, -1154, 0, 180, 0, (34 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_SINGLE_DOOR, -2050, 209, -893, 0, 90, 0, (31 << 16), bhvDoor),
		OBJECT(MODEL_PM_SINGLE_DOOR, 1289, 3, -1126, 0, 0, 0, (31 << 16), bhvDoor),
		OBJECT(MODEL_PM_SINGLE_DOOR, 2060, 209, -330, 0, -90, 0, (31 << 16), bhvDoor),
		OBJECT(MODEL_TOAD, 2700, 209, -812, 0, -45, 0, (4 << 24), bhvToadMessage),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_INSIDE_THE_PRINCESS_CASTLE),
		SHOW_DIALOG(0x00, DIALOG_003),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, castle_inside_area_2),
		WARP_NODE(35, LEVEL_CASTLE, 0x01, 33, WARP_NO_CHECKPOINT),
		WARP_NODE(36, LEVEL_CASTLE, 0x01, 34, WARP_NO_CHECKPOINT),
		WARP_NODE(37, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(38, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(39, LEVEL_CASTLE_COURTYARD, 0x01, 31, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x02, 0x01, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CLOCK_HOUR_SMALL, 2527, 577, 745, 0, -45, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOCK_MINUTE_SMALL, 2527, 577, 745, 0, -45, 0, 0x00000000, bhvClockMinuteHand),
		OBJECT(MODEL_CLOCK_PENDULUM_SMALL, 2489, 232, 787, 0, 135, 0, 0x00000000, bhvDecorativePendulum),
		OBJECT(MODEL_PM_DOUBLE_DOOR, 74, 12, 1568, 0, 180, 0, (36 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_DOUBLE_DOOR, -84, 12, 1568, 0, 0, 0, (35 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_DOUBLE_DOOR, 74, 525, -1618, 0, 180, 0, (38 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_DOUBLE_DOOR, -84, 525, -1619, 0, 0, 0, (37 << 16), bhvDoorWarp),
		OBJECT(MODEL_PM_SINGLE_DOOR, -2063, 219, -822, 0, 90, 0, (31 << 16), bhvDoor),
		OBJECT(MODEL_PM_SINGLE_DOOR, -1230, 13, 242, 0, 135, 0, (31 << 16), bhvDoor),
		OBJECT(MODEL_PM_SINGLE_DOOR, 1203, 13, 253, 0, -135, 0, (31 << 16), bhvDoor),
		OBJECT(MODEL_PM_SINGLE_DOOR, 2048, 219, -823, 0, -90, 0, (31 << 16), bhvDoor),
		OBJECT(MODEL_PM_SINGLE_DOOR, -4, 13, -1002, 0, 0, 0, (39 << 16), bhvDoorWarp),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -4028, 12, 3906, 0, -136, 0, (6 << 24), bhvKoopaMessage),
		OBJECT(MODEL_TOAD, -2028, 12, 48, 0, -46, 0, (7 << 24), bhvToadMessage),
		OBJECT(MODEL_TOAD, 1179, 12, 893, 0, 134, 0, (8 << 24), bhvToadMessage),
		OBJECT(MODEL_NONE, -1353, 13, 80, 0, 135, 0, (5 << 16), bhvMessagePanel),
		OBJECT(MODEL_STAR, -1357, 1419, 365, 0, 135, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -310, 673, 0, 0, 0, 0, (0xF0 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 0, 1371, 700, 0, 180, 0, (0x01 << 16), bhvWarp),
		TERRAIN(castle_inside_area_2_collision),
		MACRO_OBJECTS(castle_inside_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_INSIDE_THE_PRINCESS_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};