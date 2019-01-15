# 요구 CMake 최소 버전
CMAKE_MINIMUM_REQUIRED( VERSION 2.8)

# 프로젝트 이름 및 버전
PROJECT ( MODERNC++ )

# 빌드 형상(Configuration) 및 주절주절 Makefile 생성 여부
SET ( CMAKE_BUILD_TYPE Debug )
SET ( CMAKE_VERBOSE_MAKEFILE true )

# 빌드 대상 바이너리 파일명 및 소스 파일 목록
SET ( OUTPUT_ELF
        "${CMAKE_PROJECT_NAME}"
        )
SET ( SRC_FILES
        main.cpp
        Contact.cpp
        Controller.cpp
        Menu.cpp
        Owner.cpp
        PersonalContact.cpp
        )

# 공통 컴파일러
SET(CMAKE_CXX_COMPILER g++)
ADD_DEFINITIONS("-Wall -std=c++14")

# 출력 디렉토리
SET ( CMAKE_RUNTIME_OUTPUT_DIRECTORY Build/${CMAKE_BUILD_TYPE} )

# 빌드 대상 바이너리 추가
ADD_EXECUTABLE( ${OUTPUT_ELF} ${SRC_FILES} )