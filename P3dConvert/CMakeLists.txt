# ------------------------------------------------------------------------------
# This file is part of the P3d .blend converter.
#
# Copyright (c) Nathan Letwory ( nathan@p3d.in / http://p3d.in )
#
# The converter uses FBT (File Binary Tools) from gamekit.
# http://gamekit.googlecode.com/
#
# ------------------------------------------------------------------------------

include_directories(${P3dConverter_SOURCE_DIR}/File ${P3dConverter_SOURCE_DIR}/FileFormats/Blend)

set(File_SRC
    p3dConvert.cpp
)

set(File_HDR
    p3dConvert.h
)

add_library(p3dConvert SHARED ${File_SRC} ${File_HDR})
