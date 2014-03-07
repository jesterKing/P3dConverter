#------------------------------------------------------------------------------
#   This file is part of FBT (File Binary Tables).
#   http://gamekit.googlecode.com/
#
#   Copyright (c) 2010 Charlie C & Erwin Coumans.
#
#------------------------------------------------------------------------------
# This software is provided 'as-is', without any express or implied
# warranty. In no event will the authors be held liable for any damages
# arising from the use of this software.
#
# Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented; you must not
#	claim that you wrote the original software. If you use this software
#	in a product, an acknowledgment in the product documentation would be
#	appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
#	misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.
#------------------------------------------------------------------------------

# This file is from original FBT, but heavily modified to do what is
# necessary for P3dConverter.
# Changes by Nathan Letwory ( nathan@p3d.in / http://p3d.in )

cmake_minimum_required(VERSION 2.4)
if(COMMAND cmake_policy)
	cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

project(P3dConverter)

set(P3dConverter_ZLIB_INCLUDE ${P3dConverter_SOURCE_DIR}/zlib)
set(P3dConverter_ZLIB_LIBRARY ${OGREKIT_ZLIB_TARGET})
set(P3dConverter_USE_ZLIB 1)

message(STATUS "zlib target:" ${P3dConverter_ZLIB_LIBRARY})

if (P3dConverter_USE_ZLIB)
	add_definitions(-DFBT_USE_GZ_FILE=1)
endif()

#add_definitions(-DFFBT_USE_COMPILER_CHECKS=0)
#add_definitions(-DFBT_USE_DEBUG_ASSERTS=0)

subdirs(zlib)
subdirs(File)
subdirs(FileFormats/Blend)
subdirs(P3dConvert)
subdirs(P3dTester)
