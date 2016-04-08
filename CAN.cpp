/*
 * Copyright (C) 2016 by Stuart W Baker
 * CAN library for arduino.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 */

#include "CAN.h"

/// Constructor.
/// @param module CAN module instance on device (0 or 1)
/// @param baud CAN module baud rate
CAN::CAN(uint8_t module, uint32_t baud)
{
    TXBuffer.Count = 0;
    TXBuffer.RDIndex = 0;
    TXBuffer.WRIndex = 0;
    RXBuffer.Count = 0;
    RXBuffer.RDIndex = 0;
    RXBuffer.WRIndex = 0;
}

/// Initiailize and enable CAN module.
void CAN::begin()
{
}

/// Deinit and disable CAN module
void CAN::end()
{
}

/// @returns number of available CAN messages in the receive queue
int CAN::available()
{
    return 0;
}

/// Write one or more CAN messages to the transmit queue.
/// @param msg reference to one or more CAN messages
/// @param count number of CAN messages to write
/// @return number of CAN messages written
int CAN::write(const CAN_message_t msg[], size_t count)
{
    while (count)
    {
        if (TXBuffer.Count < TXBuffer.SIZE)
        {
        }
    }
    return 0;
}

/// Read one or more CAN messages from the receive queue.
/// @param msg reference to one or more CAN messages
/// @param count number of CAN messages to read
/// @return number of CAN messages read
int CAN::read(CAN_message_t msg[], size_t count)
{
    return 0;
}

