/* generated by userspace-header-gen.py */
#include <rtems/linkersets.h>
#include "rtems-bsd-openssl-data.h"
/* rehash.c */
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static BUCKET *hash_table[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static BUCKET nilbucket);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static EVP_MD const *evpmd);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static HENTRY nilhentry);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static char const *extensions[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static char const *suffixes[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static int evpmdsize);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static int remove_links);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_openssl, static int verbose);
