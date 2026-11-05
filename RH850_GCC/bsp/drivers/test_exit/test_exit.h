/*
 * Copyright (c) 2026 Linumiz
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef RH850_TEST_EXIT_H
#define RH850_TEST_EXIT_H

#include <stdint.h>

/* QEMU rh850-u2c test-exit device, not a U2C peripheral */
void test_exit_pass( uintptr_t base ) __attribute__( ( noreturn ) );
void test_exit_fail( uintptr_t base,
                     uint16_t code ) __attribute__( ( noreturn ) );

#endif /* RH850_TEST_EXIT_H */
