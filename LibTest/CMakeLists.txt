INCLUDE_DIRECTORIES (../MyLib)

AUX_SOURCE_DIRECTORY (./src SRC_DIR)

ADD_EXECUTABLE (LibTest ${SRC_DIR})

TARGET_LINK_LIBRARIES (LibTest Time Data)
