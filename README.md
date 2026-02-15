# This is an empty project for my class where I cannot use HAL drivers
1. After cloning if the compile commands are not there for some reason do:
`bear -- make -j`
2. To set up a gdb server do:
`st-util -p 4242`
3. To run gdb do:
`arm-none-eabi-gdb -tui`

I absolutely will forget what all the compile flags mean, it just makes my editor happy.

## Replace Target

1. Make sure to change the target name **def** to whatever you want to name the project [here](https://github.com/marwanthestudent/STM32_Empty/blob/76c92765409b9111e405b199458796e2232a7b98/Makefile#L16), and the 2 consecutive lines [here](https://github.com/marwanthestudent/STM32_Empty/blob/76c92765409b9111e405b199458796e2232a7b98/def.ioc#L61). You should also change the name in the [.gdbinit](https://github.com/marwanthestudent/STM32_Empty/blob/09d892a9a9acf7fbdcc34d83ff3b9d329abfbaef/.gdbinit#L1) to whatever is your project name in addition to changing the file name `def.ioc` to your project name.

