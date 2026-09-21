#include "src/game/envfx_snow.h"

const GeoLayout PM_DOUBLE_DOOR_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, PM_DOUBLE_DOOR_PM_STAR_DOOR_DOUBLE_geo_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
