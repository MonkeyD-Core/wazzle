// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2019-2020 The Wazzle Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WAZZLE_SHUTDOWN_H
#define WAZZLE_SHUTDOWN_H

void StartShutdown();
void AbortShutdown();
bool ShutdownRequested();

#endif
