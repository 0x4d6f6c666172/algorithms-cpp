project('algorithms', 
        'cpp',
        default_options: ['cpp_std=c++14', 
                          'warning_level=3'],
        version: '0.0.1',
        license: 'MIT')

doctest_proj = subproject('doctest')
doctest_dep = doctest_proj.get_variable('doctest_dep')

include = include_directories('include')

subdir('src')
subdir('tests')
