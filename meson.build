project('algo', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])

doctest_project = subproject('doctest')
doctest_dependency = doctest_project.get_variable('doctest_dep')

headers = include_directories('include')

algo = executable('algo', 'algo.cpp',
  dependencies: [doctest_dependency],
  include_directories: headers,
  install : true)

subdir('tests')
test('binary_tree_tests', binary_tree_tests)
