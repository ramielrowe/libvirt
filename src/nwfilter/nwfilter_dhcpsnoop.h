/*
 * nwfilter_dhcpsnoop.h: support DHCP snooping for a VM on an interface
 *
 * Copyright (C) 2013 Red Hat, Inc.
 * Copyright (C) 2010-2012 IBM Corp.
 * Copyright (C) 2010-2012 David L Stevens
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Author: David L Stevens <dlstevens@us.ibm.com>
 */

#ifndef __NWFILTER_DHCPSNOOP_H
# define __NWFILTER_DHCPSNOOP_H

int virNWFilterDHCPSnoopInit(void);
void virNWFilterDHCPSnoopShutdown(void);
int virNWFilterDHCPSnoopReq(virNWFilterTechDriverPtr techdriver,
                            const char *ifname,
                            const char *linkdev,
                            enum virDomainNetType nettype,
                            const unsigned char *vmuuid,
                            const virMacAddr *macaddr,
                            const char *filtername,
                            virNWFilterHashTablePtr filterparams,
                            virNWFilterDriverStatePtr driver);
void virNWFilterDHCPSnoopEnd(const char *ifname);
#endif /* __NWFILTER_DHCPSNOOP_H */
