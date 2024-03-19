cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake)
project(rby_pico_gpio_control VERSION 1.0.0)
 
# Select files to compile
add_executable(rby_pico_gpio_control)

#Xác định các thư mục chứa mã nguồn folder.
target_include_directories(rby_pico_gpio_control PRIVATE 
        src
)

#Xác định các file mã nguồn (main.c và picostepper.c)
target_sources(rby_pico_gpio_control PRIVATE 
        src/btn_control_led.c 
)

#Xác định các thư viện được liên kết với dự án
target_link_libraries(rby_pico_gpio_control PRIVATE 
        pico_stdlib
        hardware_pio
        hardware_dma
)
 
# Initalise the SDK
pico_sdk_init()
 
# Enable USB, UART output
pico_enable_stdio_usb(rby_pico_gpio_control 1)
pico_enable_stdio_uart(rby_pico_gpio_control 1)
 
# Compile the PIO-programs and include it into the project
pico_add_extra_outputs(rby_pico_gpio_control)

