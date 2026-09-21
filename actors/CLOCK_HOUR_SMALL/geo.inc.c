#include "src/game/envfx_snow.h"

const GeoLayout CLOCK_HOUR_SMALL_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, CLOCK_HOUR_SMALL_Mesh_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
