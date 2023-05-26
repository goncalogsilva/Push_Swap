# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-src"
  "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-build"
  "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-subbuild/imgui-populate-prefix"
  "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-subbuild/imgui-populate-prefix/tmp"
  "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-subbuild/imgui-populate-prefix/src/imgui-populate-stamp"
  "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-subbuild/imgui-populate-prefix/src"
  "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-subbuild/imgui-populate-prefix/src/imgui-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-subbuild/imgui-populate-prefix/src/imgui-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/nfs/homes/gode-jes/Desktop/push_swap/push_swap_visualizer/build/_deps/imgui-subbuild/imgui-populate-prefix/src/imgui-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
