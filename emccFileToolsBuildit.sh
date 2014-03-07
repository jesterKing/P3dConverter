# ------------------------------------------------------------------------------
# This file is part of the P3d .blend converter.
#
# Copyright (c) Nathan Letwory ( nathan@p3d.in / http://p3d.in )
#
# The converter uses FBT (File Binary Tools) from gamekit.
# http://gamekit.googlecode.com/
#
# ------------------------------------------------------------------------------

# clean up old files
rm -rf *

# link in assets
ln -sf ../P3dConverter/assets

# configure
emconfigure cmake -DCMAKE_TOOLCHAIN_FILE=/home/nathan/tools/emscripten/cmake/Platform/Emscripten.cmake -DCMAKE_BUILD_TYPE=Release -G "Unix Makefiles" ../P3dConverter/

# make and link
emmake make && emcc -O2 -s TOTAL_MEMORY=67108864 ./P3dConvert/libp3dConvert.so ./File/libfbtFile.so ./FileFormats/Blend/libbfBlend.so ./P3dTester/CMakeFiles/p3dtester.dir/main.o -o test.html --preload-file assets
