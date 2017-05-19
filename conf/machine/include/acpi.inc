# Include additional ACPI tables with the initrd
EXTRA_IMAGEDEPENDS_append = " acpi-tables"
INITRD_LIVE_prepend = "${DEPLOY_DIR_IMAGE}/acpi-tables.cpio "

IMAGE_INSTALL_append = " acpidump"
