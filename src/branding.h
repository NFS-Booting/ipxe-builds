/** @file
 *
 * iPXE Branding configuration
 *
 */

/*
 * Branding
 *
 * Vendors may use these strings to add their own branding to iPXE.
 * PRODUCT_NAME is displayed prior to any iPXE branding in startup
 * messages, and PRODUCT_SHORT_NAME is used where a brief product
 * label is required (e.g. in BIOS boot selection menus).
 *
 * To minimise end-user confusion, it's probably a good idea to either
 * make PRODUCT_SHORT_NAME a substring of PRODUCT_NAME or leave it as
 * "iPXE".
 *
 */
#undef PRODUCT_NAME
#define PRODUCT_NAME "iPXE Network Boot"
#undef PRODUCT_SHORT_NAME
#define PRODUCT_SHORT_NAME "iPXE"
#undef PRODUCT_URI
#define PRODUCT_URI "https://github.com/NFS-Booting/ipxe-builds"

/*
 * Tag line
 *
 * If your PRODUCT_SHORT_NAME is longer than the four characters used
 * by "iPXE", then the standard tag line "Open Source Network Boot
 * Firmware" is unlikely to fit neatly onto the screen.
 */
#undef PRODUCT_TAG_LINE
#define PRODUCT_TAG_LINE "Securily boot with iPXE"

/*
 * Product security name suffix
 *
 * Vendors creating signed iPXE binaries must set this to a non-empty
 * value (e.g. "2pint").
 */
#undef PRODUCT_SBAT_NAME
// TODO: revise sbat name
#define PRODUCT_SBAT_NAME "nfs-booting-ipxe"

/*
 * Product security generation
 *
 * Vendors creating signed iPXE binaries must set this to a non-zero
 * value, and must increment the value whenever a Secure Boot exploit
 * is fixed (unless the upstream IPXE_SBAT_GENERATION has already been
 * incremented as part of that fix).
 */
#undef PRODUCT_SBAT_GENERATION
#define PRODUCT_SBAT_GENERATION 0
