RIchCoin [XRI] Source Code
================================
**The Coin of a Better Age**

Specifications:
--------------

* Symbol: `XRI`
* PoW (proof of work)
* Algorithms: scrypt, x17, Lyra2rev2, myr-groestl, & blake2s
* Blocktime: 60 seconds
* RPC port: `7343`
* P2P port: `2342`

* Block Reward & Circulating Supply(CR) and Time Period (TP) in months after release: 
  * Block 0 to 44,000 : 1440 coins (CR 63,360,000 TP 0-1)
  * 44,000 to 132,000 : 720 coins (CR 158,400,000 TP 1-4)
  * 132,000 to 440,000: 360 coins (CR 253,440,000 TP 4-10)
  * 440,000 to 968,000: 180 coins (CR 348,480,000 TP 10-22)
  * 968,000 to 1,760,000: 90 coins (CR 419,760,000 TP 22-40)
  * 1,760,000 to 2,816,000: 45 coins (CR 467,280,000 TP 40-64)
  * 2,816,000 to 4,224,000: 24 coins (CR 499,664,000 TP 64-96)
  
* After 8 years, Block Rewards will be dictated by network hashrates(HR) as such:
  * HR 16x: Block Reward 0.6x (CR 500,000,000+ TP 96 -)
  * HR 32/: Block Reward 1.4x (CR 500,000,000+ TP 96 -)
  
Total Supply
------------
After 8 years, by mid-2026, circulating supply will be 499664000 coins, approx. 500 million XRI, before automation of the block reward begins. Current maximum set is 1 billion, but this can be changed anytime.

Development and Testing on Linux/Ubuntu
----------------------------------------
To develop and test RIchCoin, download the following dependencies:

```sudo apt-get update```

```sudo apt-get install libdb-dev libdb++-dev build-essential libtool autotools-dev automake pkg-config libssl1.0-dev libevent-dev bsdmainutils git libboost-all-dev libminiupnpc-dev libqt5gui5 libqt5core5a libqt5webkit5-dev libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libqrencode-dev```

**Note**: If you are on debian, you will also need to `apt-get install libcanberra-gtk-module`.

Then, clone the git repository and compile the daemon and gui wallet:

```git clone https://github.com/ShieldCoin/Shield && cd ShieldCoin && ./autogen.sh && ./configure --with-incompatible-bdb && make```

if you are using source-build libdb4.8(++)-dev you may need to use

```./configure  CPPFLAGS="-I/usr/local/BerkeleyDB.4.8/include -O2" LDFLAGS="-L/usr/local/BerkeleyDB.4.8/lib"```

**Note**: If you get a "memory exhausted" error, make a swap file on your drive.

Unit tests can be run with `make check` to test your changes.
