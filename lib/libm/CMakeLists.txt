set(LIBM_SOURCES
	math.cpp
)

set(LIBM_HEADER
	math.h
)

set(CMAKE_CXX_FLAGS "-ffreestanding -Wno-builtin-declaration-mismatch")
add_library(M SHARED ${LIBM_SOURCES})

SET_TARGET_PROPERTIES (M PROPERTIES PUBLIC_HEADER "${LIBM_HEADER}")

set(LIBRARY_VERSION_MAJOR 0)
set(LIBRARY_VERSION_STRING 0.1)

install (
	TARGETS M
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
