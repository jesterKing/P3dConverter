/*
 ------------------------------------------------------------------------------
 This file is part of the P3d .blend converter.

 Copyright (c) Nathan Letwory ( nathan@p3d.in / http://p3d.in )

 The converter uses FBT (File Binary Tools) from gamekit.
 http://gamekit.googlecode.com/

 ------------------------------------------------------------------------------
*/
#include <stdint.h>
#include "Blender.h"

using namespace Blender;

struct Chunk {
    uint32_t totvert;
    uint32_t totface;
	float *v; /* verts, stride 3 */
    uint32_t *f; /* face indices, stride 3 */
};

struct P3dMesh{
	uint16_t totchunk;
	Chunk *chunks;
};

extern int parse_blend(const char *path);
extern void free_p3d_mesh_data(P3dMesh *pme);
extern int extract_geometry(Object *ob, P3dMesh *pme);
extern void cleanup();
extern int count_mesh_objects();
extern P3dMesh *extract_all_geometry(size_t *count);
