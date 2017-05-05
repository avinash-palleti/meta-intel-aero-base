# meta-intel-aero-base
Yocto layer with BSP for Intel Aero platform and some utilties

For details on getting setup to build see the [Intel Aero wiki](https://github.com/intel-aero/meta-intel-aero/wiki).

Build basic test image as follows

    mkdir intel_aero
    cd intel_aero
    repo init -u https://github.com/intel-aero/intel-aero-manifest.git -b pyro -m base.xml
    repo sync -j4
    export TEMPLATECONF=../meta-intel-aero-base/conf
    source poky/oe-init-build-env
    bitbake aero-base-image


License
=======
http://www.gnu.org/licenses/gpl-2.0.html
