project(pymwm_diff)

set(
  SRC
  bindings.cpp
)

include_directories(${CMAKE_BINARY_DIR})

omim_add_library(${PROJECT_NAME} MODULE ${SRC})

omim_link_libraries(
  ${PROJECT_NAME}
  mwm_diff
  bsdiff
  platform
  oauthcpp
  coding
  base
  stats_client
  ${PYTHON_LIBRARIES}
  ${Boost_LIBRARIES}
  ${LIBZ}
)

set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")
