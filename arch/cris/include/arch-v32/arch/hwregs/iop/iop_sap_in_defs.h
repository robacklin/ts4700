#ifndef __iop_sap_in_defs_h
#define __iop_sap_in_defs_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/io_proc/rtl/iop_sap_in.r
 *     id:           <not found>
 *     last modfied: Mon Apr 11 16:08:45 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c --outfile iop_sap_in_defs.h ../../inst/io_proc/rtl/iop_sap_in.r
 *      id: $Id: iop_sap_in_defs.h,v 1.1 2011/07/05 20:23:04 ian Exp $
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */
/* Main access macros */
#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
  ( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
#define reg_page_size 8192
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg + \
    (index) * STRIDE_##scope##_##reg )
#endif

/* C-code for register scope iop_sap_in */

/* Register rw_bus0_sync, scope iop_sap_in, type rw */
typedef struct {
  unsigned int byte0_sel     : 2;
  unsigned int byte0_ext_src : 3;
  unsigned int byte0_edge    : 2;
  unsigned int byte0_delay   : 1;
  unsigned int byte1_sel     : 2;
  unsigned int byte1_ext_src : 3;
  unsigned int byte1_edge    : 2;
  unsigned int byte1_delay   : 1;
  unsigned int byte2_sel     : 2;
  unsigned int byte2_ext_src : 3;
  unsigned int byte2_edge    : 2;
  unsigned int byte2_delay   : 1;
  unsigned int byte3_sel     : 2;
  unsigned int byte3_ext_src : 3;
  unsigned int byte3_edge    : 2;
  unsigned int byte3_delay   : 1;
} reg_iop_sap_in_rw_bus0_sync;
#define REG_RD_ADDR_iop_sap_in_rw_bus0_sync 0
#define REG_WR_ADDR_iop_sap_in_rw_bus0_sync 0

/* Register rw_bus1_sync, scope iop_sap_in, type rw */
typedef struct {
  unsigned int byte0_sel     : 2;
  unsigned int byte0_ext_src : 3;
  unsigned int byte0_edge    : 2;
  unsigned int byte0_delay   : 1;
  unsigned int byte1_sel     : 2;
  unsigned int byte1_ext_src : 3;
  unsigned int byte1_edge    : 2;
  unsigned int byte1_delay   : 1;
  unsigned int byte2_sel     : 2;
  unsigned int byte2_ext_src : 3;
  unsigned int byte2_edge    : 2;
  unsigned int byte2_delay   : 1;
  unsigned int byte3_sel     : 2;
  unsigned int byte3_ext_src : 3;
  unsigned int byte3_edge    : 2;
  unsigned int byte3_delay   : 1;
} reg_iop_sap_in_rw_bus1_sync;
#define REG_RD_ADDR_iop_sap_in_rw_bus1_sync 4
#define REG_WR_ADDR_iop_sap_in_rw_bus1_sync 4

#define STRIDE_iop_sap_in_rw_gio 4
/* Register rw_gio, scope iop_sap_in, type rw */
typedef struct {
  unsigned int sync_sel     : 2;
  unsigned int sync_ext_src : 3;
  unsigned int sync_edge    : 2;
  unsigned int delay        : 1;
  unsigned int logic        : 2;
  unsigned int dummy1       : 22;
} reg_iop_sap_in_rw_gio;
#define REG_RD_ADDR_iop_sap_in_rw_gio 8
#define REG_WR_ADDR_iop_sap_in_rw_gio 8


/* Constants */
enum {
  regk_iop_sap_in_and                      = 0x00000002,
  regk_iop_sap_in_ext_clk200               = 0x00000003,
  regk_iop_sap_in_gio1                     = 0x00000000,
  regk_iop_sap_in_gio13                    = 0x00000005,
  regk_iop_sap_in_gio18                    = 0x00000003,
  regk_iop_sap_in_gio19                    = 0x00000004,
  regk_iop_sap_in_gio21                    = 0x00000006,
  regk_iop_sap_in_gio23                    = 0x00000005,
  regk_iop_sap_in_gio29                    = 0x00000007,
  regk_iop_sap_in_gio5                     = 0x00000004,
  regk_iop_sap_in_gio6                     = 0x00000001,
  regk_iop_sap_in_gio7                     = 0x00000002,
  regk_iop_sap_in_inv                      = 0x00000001,
  regk_iop_sap_in_neg                      = 0x00000002,
  regk_iop_sap_in_no                       = 0x00000000,
  regk_iop_sap_in_no_del_ext_clk200        = 0x00000001,
  regk_iop_sap_in_none                     = 0x00000000,
  regk_iop_sap_in_or                       = 0x00000003,
  regk_iop_sap_in_pos                      = 0x00000001,
  regk_iop_sap_in_pos_neg                  = 0x00000003,
  regk_iop_sap_in_rw_bus0_sync_default     = 0x02020202,
  regk_iop_sap_in_rw_bus1_sync_default     = 0x02020202,
  regk_iop_sap_in_rw_gio_default           = 0x00000002,
  regk_iop_sap_in_rw_gio_size              = 0x00000020,
  regk_iop_sap_in_timer_grp0_tmr3          = 0x00000006,
  regk_iop_sap_in_timer_grp1_tmr3          = 0x00000004,
  regk_iop_sap_in_timer_grp2_tmr3          = 0x00000005,
  regk_iop_sap_in_timer_grp3_tmr3          = 0x00000007,
  regk_iop_sap_in_tmr_clk200               = 0x00000000,
  regk_iop_sap_in_two_clk200               = 0x00000002,
  regk_iop_sap_in_yes                      = 0x00000001
};
#endif /* __iop_sap_in_defs_h */
