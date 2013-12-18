FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/hoverTracker/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/hoverTracker/msg/__init__.py"
  "../src/hoverTracker/msg/_Tag.py"
  "../src/hoverTracker/msg/_TagArray.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
