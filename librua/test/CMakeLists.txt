SET(RUATEST rua-test)
SET(RUATEST_SRCS rua-test.c)
SET(RUATEST_VENDOR samsung)
SET(RUATEST_DIR /usr/bin)
SET(RUATEST_LOCALEDIR /usr/share/locale)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
PKG_CHECK_MODULES(RUATEST_PKGS REQUIRED
	)

FOREACH(flag ${RUATEST_PKGS_CFLAGS})
	SET(RUATEST_CFLAGS "${RUATEST_CFLAGS} ${flag}")
ENDFOREACH(flag)

SET(RUATEST_CFLAGS, "${RUATEST_CFLAGS} -DPREFIX=\"${CMAKE_INSTALL_PREFIX}\"")

ADD_EXECUTABLE(${RUATEST} ${RUATEST_SRCS})
SET_TARGET_PROPERTIES(${RUATEST} PROPERTIES COMPILE_FLAGS "${RUATEST_CFLAGS}")
TARGET_LINK_LIBRARIES(${RUATEST} ${PROJECT_NAME} ${RUATEST_PKGS_LDFLAGS})

INSTALL(TARGETS ${RUATEST} DESTINATION bin)

