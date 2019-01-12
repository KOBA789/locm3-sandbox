PROJECT = sandbox
BUILD_DIR = bin

CFILES       := $(wildcard *.c)
LDSCRIPT      = stm32f103x8_dfu.ld
OPENCM3_LIB   = opencm3_stm32f1
OPENCM3_DEFS  = -DSTM32F1
FP_FLAGS     ?= -msoft-float
ARCH_FLAGS    = -mthumb -mcpu=cortex-m3 $(FP_FLAGS) -mfix-cortex-m3-ldrd

OOCD_FILE = board/stm32f4discovery.cfg

OPENCM3_DIR=../libopencm3

include ../rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk

hoge:
	echo $(TGT_LDFLAGS)

.PHONY += hoge
