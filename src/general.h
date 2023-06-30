/** @file
 *
 * iPXE General configuration
 *
 */


/*
 * Banner timeout configuration
 *
 * This controls the timeout for the "Press Ctrl-B for the iPXE
 * command line" banner displayed when iPXE starts up.  The value is
 * specified in tenths of a second for which the banner should appear.
 * A value of 0 disables the banner.
 *
 */

#undef BANNER_TIMEOUT
#define BANNER_TIMEOUT 0

/*
 * Network protocols
 *
 */

#define NET_PROTO_IPV6 /* IPv6 protocol */

/*
 * Download protocols
 *
 */

#define DOWNLOAD_PROTO_HTTP /* Hypertext Transfer Protocol */
#define DOWNLOAD_PROTO_HTTPS /* Secure Hypertext Transfer Protocol */

/*
 * Command-line commands to include
 *
 */
#define AUTOBOOT_CMD /* Automatic booting */
#define NVO_CMD /* Non-volatile option storage commands */
#define CONFIG_CMD /* Option configuration console */
#define IFMGMT_CMD /* Interface management commands */
#define IWMGMT_CMD /* Wireless interface management commands */
#define IBMGMT_CMD /* Infiniband management commands */
#define FCMGMT_CMD /* Fibre Channel management commands */
#define ROUTE_CMD /* Routing table management commands */
#define IMAGE_CMD /* Image management commands */
#define DHCP_CMD /* DHCP management commands */
#define SANBOOT_CMD /* SAN boot commands */
#define MENU_CMD /* Menu commands */
#define LOGIN_CMD /* Login command */
#define SYNC_CMD /* Sync command */
#undef  SHELL_CMD /* Shell command */
#define NSLOOKUP_CMD /* DNS resolving command */
#define TIME_CMD /* Time commands */
#define DIGEST_CMD /* Image crypto digest commands */
#define LOTEST_CMD /* Loopback testing commands */
#define VLAN_CMD /* VLAN commands */
#define REBOOT_CMD /* Reboot command */
#define POWEROFF_CMD /* Power off command */
#define IMAGE_TRUST_CMD /* Image trust management commands */
#define PCI_CMD /* PCI commands */
#define PARAM_CMD /* Request parameter commands */
#define NEIGHBOUR_CMD /* Neighbour management commands */
#define PING_CMD /* Ping command */
#define CONSOLE_CMD /* Console command */
#define IPSTAT_CMD /* IP statistics commands */
#define PROFSTAT_CMD /* Profiling commands */
#define NTP_CMD /* NTP commands */
#define CERT_CMD /* Certificate management commands */
#define IMAGE_ARCHIVE_CMD /* Archive image management commands */
