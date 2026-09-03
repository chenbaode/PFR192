cmake_minimum_required(VERSION 3.20)
project(Slot13_contiguous C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# ---------------------------------------------------------------------------
# Moi file .c la mot chuong trinh rieng (moi file co ham main cua no).
# Chi can them file .c moi vao thu muc nay -> CMake tu tao them 1 target.
# (Trong CLion: neu chua thay target moi, bam Reload CMake Project.)
# ---------------------------------------------------------------------------

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*.c")

foreach (SOURCE_FILE ${SOURCES})
    # Bo qua cac file nam trong thu muc build cua CLion
    if (SOURCE_FILE MATCHES "/cmake-build-")
        continue()
    endif ()

    # Ten target = duong dan tuong doi, thay "/" va "." bang "_"
    file(RELATIVE_PATH REL_PATH "${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILE}")
    string(REGEX REPLACE "\\.c$" "" TARGET_NAME "${REL_PATH}")
    string(REGEX REPLACE "[/\\.]" "_" TARGET_NAME "${TARGET_NAME}")

    add_executable(${TARGET_NAME} "${SOURCE_FILE}")

    # Chay duoc tu thu muc goc cua project (tien khi doc file du lieu .txt)
    set_target_properties(${TARGET_NAME} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
endforeach ()
