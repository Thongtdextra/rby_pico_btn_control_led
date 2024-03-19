![image](https://github.com/Thongtdextra/rby_pico_btn_control_led/assets/163829013/d1d6d85d-1763-4094-be9f-6a4cbab34f09)
connect GP10-14 Pinout to button and control ledonboard
# rby_pico_testingled
my first time with MCU rby pico, so many problem need all guy solve

# clone sdk pico and example first
git clone https://github.com/raspberrypi/pico-sdk.git

git clone https://github.com/raspberrypi/pico-examples.git


# clone code testing led

git clone https://github.com/Thongtdextra/rby_pico_btn_control_led.git

# mkdir build and make file executed
mkdir build

cd build

export PICO_SDK_PATH=/home/thongtd/pico/pico-sdk

cmake ..

When make done, the result will be:

-- Configuring done

-- Generating done

-- Build files have been written to: /home/User/pico/rby_pico_testingled/build

# Build file elf 
In path build
$ make -j4
or jusst
$ make

When make done, the result will be:

[ 0%] Creating directories for 'ELF2UF2Build'

  .
  .
  .
  
[100%] Linking CXX executable blink.elf

[100%] Built target blink

