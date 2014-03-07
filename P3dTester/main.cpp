/*
 ------------------------------------------------------------------------------
 This file is part of the P3d .blend converter.

 Copyright (c) Nathan Letwory ( nathan@p3d.in / http://p3d.in )

 The converter uses FBT (File Binary Tools) from gamekit.
 http://gamekit.googlecode.com/

 ------------------------------------------------------------------------------
*/
#include "p3dConvert.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    size_t totmesh = 0;
	P3dMesh *pme = 0;

	parse_blend("assets/kuoren_alla.blend");
	parse_blend("assets/yhdistetytkuutiot.blend");
	parse_blend("assets/tri_p3d_viewer_test_old.blend");
	parse_blend("assets/tri_p3d_viewer_test.blend");

	pme = extract_all_geometry(&totmesh);

	P3dMesh *curpme = pme;
    for(uint32_t i = 0; i < totmesh; i++, curpme++) {
		free_p3d_mesh_data(curpme);
	}

	free(pme);

	printf("P3dTester: %d mesh objects found\n", totmesh);
	return 0;
}
