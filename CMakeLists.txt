cmake_minimum_required(VERSION 3.16)

project(Pachvara VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_PREFIX_PATH 
    "C:/Qt/6.8.2/msvc2022_64"
    "C:/Qt/6.5.0/msvc2019_64"
    "$ENV{QTDIR}"
    ${CMAKE_PREFIX_PATH}
)

find_package(Qt6 QUIET COMPONENTS Core Widgets Network)

if(NOT Qt6_FOUND)
   
    find_package(Qt5 QUIET COMPONENTS Core Widgets)
    
    if(NOT Qt5_FOUND)
        message(FATAL_ERROR "
        Qt not found!
        
        Установите переменную окружения QTDIR:
        set QTDIR=C:\\Qt\\6.8.2\\msvc2022_64
        
        Или укажите путь при запуске CMake:
        cmake .. -DCMAKE_PREFIX_PATH=\"C:/Qt/6.8.2/msvc2022_64\"
        ")
    else()
        message(STATUS "Found Qt5")
        set(QT_LIBRARIES Qt5::Core Qt5::Widgets)
        set(CMAKE_AUTOMOC ON)
        set(CMAKE_AUTOUIC ON)
        set(CMAKE_AUTORCC ON)
    endif()
else()
    message(STATUS "Found Qt6")
    set(QT_LIBRARIES Qt6::Core Qt6::Widgets Qt6::Network)
    set(CMAKE_AUTOMOC ON)
    set(CMAKE_AUTOUIC ON)
    set(CMAKE_AUTORCC ON)
endif()

set(HEADERS
    dialog1.h
    dialog2.h
    mainwindow.h
    players.h
)

set(SOURCES
    dialog1.cpp
    dialog2.cpp
    main.cpp
    mainwindow.cpp
    players.cpp
)

set(FORMS
    dialog1.ui
    dialog2.ui
    mainwindow.ui
    players.ui
)

set(RESOURCES
    icon.qrc
)

set(OTHER_FILES
    back1.jpg
    back2.jpg
    Demidovich.png
    integral1.png
    Result1.png
)

add_executable(Pachvara
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
    ${RESOURCES}
    ${OTHER_FILES}  
)

target_link_libraries(Pachvara
    ${QT_LIBRARIES}
)

target_compile_definitions(Pachvara PRIVATE
    $<$<CONFIG:Debug>:QT_QML_DEBUG>
)

foreach(file ${OTHER_FILES})
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${file})
        configure_file(${CMAKE_CURRENT_SOURCE_DIR}/${file} 
                      ${CMAKE_CURRENT_BINARY_DIR}/${file} 
                      COPYONLY)
    endif()
endforeach()


install(TARGETS Pachvara
    RUNTIME DESTINATION bin
    BUNDLE DESTINATION .
)

install(FILES ${OTHER_FILES}
    DESTINATION ${CMAKE_INSTALL_PREFIX}
)