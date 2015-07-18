export PACKAGE_VERSION = $(THEOS_PACKAGE_BASE_VERSION)
include theos/makefiles/common.mk

TWEAK_NAME = QuickManualSub
QuickManualSub_FILES = Tweak.xm
QuickManualSub_FRAMEWORKS = Foundation UIKit CoreGraphics

export ARCHS = armv7 armv7s arm64
export SDKVERSION = 8.4
export TARGET = iphone:clang:8.4:7.0
export TARGET_IPHONEOS_DEPLOYMENT_VERSION = 7.0

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard; killall -9 backboardd"
