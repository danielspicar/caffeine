/* -*- mode: c; c-default-style: "k&r"; indent-tabs-mode: nil; -*- */
/* vim:set ft=c ff=unix ts=4 sw=4 enc=latin1 expandtab: */
/* kate: space-indent on; indent-width 4; mixedindent off; indent-mode none; */
/*
    Caffeine - C Application Framework
    Copyright (C) 2006 Daniel Molina Wegener

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
    MA 02110-1301 USA

    $Id$
 */
#ifndef CAF_DATA_BITS_H
#define CAF_DATA_BITS_H 1
/**
 * @defgroup      caf_data_bits             Bit Management
 * @ingroup       caf_data
 * @addtogroup    caf_data_bits
 * @{
 *
 * @brief     Bit Management
 * @date      $Date$
 * @version   $Revision$
 * @author    Daniel Molina Wegener <dmw@unete.cl>
 *
 * Bit Management
 *
 */

#include "caf/caf.h"

#ifdef __cplusplus
extern "C" {
#endif /* !__cplusplus */

u_int16_t caf_word_oswap (u_int16_t w);
u_int32_t caf_dword_oswap (u_int32_t w);
u_int64_t caf_qword_oswap (u_int64_t w);

#ifdef __cplusplus
};
#endif /* !__cplusplus */

/** }@ */
#endif /* !CAF_DATA_BITS_H */
/* caf_data_bits.h ends here */