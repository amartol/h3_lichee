EXTRA_LDFLAGS += --strip-debug
ifneq ($(strip $(CONFIG_ARCH_SUN8IW8)),)

obj-$(CONFIG_OV2710_MIPI)	+= ov2710_mipi.o
obj-$(CONFIG_OV4689)		+= ov4689.o
obj-$(CONFIG_OV4689_60FPS)	+= ov4689_60fps.o
obj-$(CONFIG_AR0330_MIPI)	+= ar0330_mipi.o
obj-$(CONFIG_OV4689_SDV)	+= ov4689_sdv.o
obj-$(CONFIG_GC1004_MIPI)	+= gc1004_mipi.o
obj-$(CONFIG_H22_MIPI)		+= h22_mipi.o

else
#obj-m			+= ov5640.o
obj-y   	  	+= tw8834.o

endif

