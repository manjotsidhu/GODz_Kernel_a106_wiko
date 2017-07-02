Stock Kitkat Kernel Source For Wiko Bloom , Micromax Unite 2 and other clones
------
Version :- 3.4.67 (kitkat)

Status :- Stable

Bugs :- N/A

Contributors
------
>GOD , U , Manjot Sidhu , Monty Kumar(helping) , Ranjan(my all time mentor) , Divyrajsinh Jadeja(Testing) , Anurag D'Cruz(encouraged me) and each and every person of unite 2 who inspired me to do this ... Thank You Every Much 

Introduction
------
Stock Kernel Source based on stock kitkat for Wiko Bloom , Micromax Unite 2 , Explay Vega and MyPhone Rio Lite.
Here are some codenames to be used for these clones

| Vendor (Manufacturer)| Device Name   | CodeName  |
|:-------------:|:-------------:|:---------:|
| Wiko          | Bloom         |   wiko    |
| Micromax      | A106          |   a106    |
| Explay        | Vega          |   vega    |
| MyPhone       | Rio Lite      |   rio     |

Requirements
------
Ubuntu 10.0 + 

Essential kernel Packages

Android Device To Test

Common Sense (which is not so common)

Setting Up The Build Environment
------
>NOTE :- Do first ```sudo apt get-update``` before installing any packages 

1. Essential Kernel Packages
 ```
 sudo apt-get install git gnupg flex bison gperf build-essential zip curl libc6-dev libncurses5-dev:i386 x11proto-core-dev libx11-dev:i386 libreadline6-dev:i386 libgl1-mesa-glx:i386 libgl1-mesa-dev g++-multilib mingw32 tofrodos python-markdown libxml2-utils xsltproc zlib1g-dev:i386 git-core lzop ccache gnupg flex bison gperf build-essential zip curl zlib1g-dev zlib1g-dev:i386 libc6-dev lib32ncurses5 lib32z1 lib32bz2-1.0 lib32ncurses5-dev x11proto-core-dev libx11-dev:i386 libreadline6-dev:i386 lib32z-dev libgl1-mesa-glx:i386 libgl1-mesa-dev g++-multilib mingw32 tofrodos python-markdown libxml2-utils xsltproc readline-common libreadline6-dev libreadline6 lib32readline-gplv2-dev libncurses5-dev lib32readline5 lib32readline6 libreadline-dev libreadline6-dev:i386 libreadline6:i386 bzip2 libbz2-dev libbz2-1.0 libghc-bzlib-dev lib32bz2-dev libsdl1.2-dev libesd0-dev squashfs-tools pngcrush schedtool libwxgtk2.8-dev python gcc g++ cpp gcc-4.8 g++-4.8 && sudo ln -s /usr/lib/i386-linux-gnu/mesa/libGL.so.1 /usr/lib/i386-linux-gnu/libGL.so
 ```
 >NOTE :- Some Packages will not be available depending on which ubuntu version u are , so the packages u will get error just remove them from commands
 
 
 2. Go to etc/udev/rules.d/51-android.rules  and add these codes at the end
 >NOTE :- if u get permission eror then remember , ```sudo chmod 777 -R 51-android.rules```
 ```
 # adb protocol on passion (Nexus One)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4e12", MODE="0600", OWNER="<username>"
# fastboot protocol on passion (Nexus One)
SUBSYSTEM=="usb", ATTR{idVendor}=="0bb4", ATTR{idProduct}=="0fff", MODE="0600", OWNER="<username>"
# adb protocol on crespo/crespo4g (Nexus S)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4e22", MODE="0600", OWNER="<username>"
# fastboot protocol on crespo/crespo4g (Nexus S)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4e20", MODE="0600", OWNER="<username>"
# adb protocol on stingray/wingray (Xoom)
SUBSYSTEM=="usb", ATTR{idVendor}=="22b8", ATTR{idProduct}=="70a9", MODE="0600", OWNER="<username>"
# fastboot protocol on stingray/wingray (Xoom)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="708c", MODE="0600", OWNER="<username>"
# adb protocol on maguro/toro (Galaxy Nexus)
SUBSYSTEM=="usb", ATTR{idVendor}=="04e8", ATTR{idProduct}=="6860", MODE="0600", OWNER="<username>"
# fastboot protocol on maguro/toro (Galaxy Nexus)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4e30", MODE="0600", OWNER="<username>"
# adb protocol on panda (PandaBoard)
SUBSYSTEM=="usb", ATTR{idVendor}=="0451", ATTR{idProduct}=="d101", MODE="0600", OWNER="<username>"
# adb protocol on panda (PandaBoard ES)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="d002", MODE="0600", OWNER="<username>"
# fastboot protocol on panda (PandaBoard)
SUBSYSTEM=="usb", ATTR{idVendor}=="0451", ATTR{idProduct}=="d022", MODE="0600", OWNER="<username>"
# usbboot protocol on panda (PandaBoard)
SUBSYSTEM=="usb", ATTR{idVendor}=="0451", ATTR{idProduct}=="d00f", MODE="0600", OWNER="<username>"
# usbboot protocol on panda (PandaBoard ES)
SUBSYSTEM=="usb", ATTR{idVendor}=="0451", ATTR{idProduct}=="d010", MODE="0600", OWNER="<username>"
# adb protocol on grouper/tilapia (Nexus 7)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4e42", MODE="0600", OWNER="<username>"
# fastboot protocol on grouper/tilapia (Nexus 7)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4e40", MODE="0600", OWNER="<username>"
# adb protocol on manta (Nexus 10)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4ee2", MODE="0600", OWNER="<username>"
# fastboot protocol on manta (Nexus 10)
SUBSYSTEM=="usb", ATTR{idVendor}=="18d1", ATTR{idProduct}=="4ee0", MODE="0600", OWNER="<username>"
```
3. Add The below code at the end of bash.rc
```
export USE_CCACHE=1
```
4. JDK 1.6 (6u45)

Download jdk1.6 6u45 from here :- http://www.oracle.com/technetwork/java/javase/downloads/java-archive-downloads-javase6-419409.html
>Download Linux x64 and .bin one

Then go to our downloaded directory and do ``` chmod a+x jdk-6u45-linux-x64.bin```  

Now Extract it by using ```./jdk-6u45-linux-x64.bin  ```

Follow the commands below
```
sudo mkdir /usr/lib/jvm
sudo mv jdk1.6.0_45 /usr/lib/jvm/  
sudo update-alternatives --install /usr/bin/javac javac /usr/lib/jvm/jdk1.6.0_45/bin/javac 1  
sudo update-alternatives --install /usr/bin/java java /usr/lib/jvm/jdk1.6.0_45/bin/java 1  
sudo update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/jdk1.6.0_45/bin/javaws 1 
sudo update-alternatives --config javac  
sudo update-alternatives --config java  
sudo update-alternatives --config javaws
ls -la /etc/alternatives/java*
```
Now To Verify java is installed do ```java -version```

5. Git :-
```
sudo apt-get install git
```
6. Python and Make are preinstalled from ubuntu 10.0+

Compiling Kernel
------

1. Open Terminal in desktop and First Clone This Repository By 
```
git clone https://github.com/manjotsidhu/android_kernel_a106_wiko.git
```
2. Rename cloned folder to kernel_source By
```
mv android_kernel_a106_wiko ~/kernel_source
```

3. Now Lets get the toolchain (arm-linux-androideabi-4.6)
```
cd kernel_source
git clone https://android.googlesource.com/platform/prebuilts/gcc/linux-x86/arm/arm-linux-androideabi-4.6
```

4. Some Commands to make kernel source know that we are compiling for a device :p
> NOTE:- MAKE SURE TO REPLACE CODENAME 
```
export TARGET_BUILD_VARIANT=user TARGET_PRODUCT=(codename) MTK_ROOT_CUSTOM=../mediatek/custom/ TARGET_KERNEL_VERSION=(codename) &&export PATH=~/arm-linux-androideabi-4.6/bin:$PATH&&export CROSS_COMPILE=arm-linux-androideabi-&&export ARCH=arm
````

5. The Main Step 
> NOTE:- MAKE SURE TO REPLACE CODENAME
```
./mk (codename) n k
```
It may time 5-10 mins max 

6. The compiled Kernel Sourced is generated in out folder ... If u get error then the error log is in ```out/target/product/(codename)_kernel_err.log ```
>Check error log carefully , your mistakes will be highlighted

7. If the kernel compiled successfully ... kernel will be in the folder ```out/target/product/(codename)/obj/kernel_obj/arm/arch/boot/zImage ```

8. Now We Need To Add Mediatek Header to it ... Make a new folder in your desktop/source and copy zImage in it ... 

Now copy ```mkimage``` file from ```kernel_source/mediatek/build/tools/ ``` to your new folder (with zImage)
U can also do this
```
cp ~/kernel_source/meditatek/build/tools/mkimage ~/(new folder name)/
```

Now Your Folder should be containing zImage and mkimage

9. Now Last Step
```
cd ~/(your folder name)/
chmod a+x mkimage
./mkimage zImage KERNEL > zImage_with_header
```

10. Now in order to test it replace ```zImage_with_header ``` with ```kernel``` in your stock boot of stock rom ...

Thank You Very Much ...
Powered By Manjot Sidhu
