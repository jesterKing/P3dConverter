# ------------------------------------------------------------------------------
# This file is part of the P3d .blend converter.
#
# Copyright (c) Nathan Letwory ( nathan@p3d.in / http://p3d.in )
#
# The converter uses FBT (File Binary Tools) from gamekit.
# http://gamekit.googlecode.com/
#
# ------------------------------------------------------------------------------
include_directories(${P3dConverter_SOURCE_DIR}/File ${P3dConverter_SOURCE_DIR}/FileFormats/Blend ${P3dConverter_SOURCE_DIR}/P3dConvert)
link_libraries(fbtFile bfBlend p3dConvert zlibstatic)

add_executable(p3dtester main.cpp)
