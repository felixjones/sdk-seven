example_vsync = executable('example-vsync', 'src/main.c',
  dependencies: [libseven, minrt],
  link_args: [mapfile.format('example-vsync')],
  name_suffix: 'elf')

custom_target('example-vsync-rom',
  input: example_vsync,
  output: '@BASENAME@.gba',
  command: [makerom, '@INPUT@', '@OUTPUT@'],
  build_by_default: true)

example_multiboot = executable('example-multiboot', 'src/main.c',
  dependencies: [libseven, minrt_mb],
  link_args: [mapfile.format('example-multiboot')],
  name_suffix: 'elf')

custom_target('example-multiboot-rom',
  input: example_multiboot,
  output: '@BASENAME@.gba',
  command: [makerom, '@INPUT@', '@OUTPUT@'],
  build_by_default: true)
