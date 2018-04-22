RIchCoin [XRI] Source Code
================================

```
 |_   _| |__   ___   / ___|___ (_)_ __     ___  / _|   __ _  | __ )  ___| |_| |_ ___ _ __     / \   __ _  ___ 
   | | | '_ \ / _ \ | |   / _ \| | '_ \   / _ \| |_   / _` | |  _ \ / _ \ __| __/ _ \ '__|   / _ \ / _` |/ _ \
   | | | | | |  __/ | |__| (_) | | | | | | (_) |  _| | (_| | | |_) |  __/ |_| ||  __/ |     / ___ \ (_| |  __/
   |_| |_| |_|\___|  \____\___/|_|_| |_|  \___/|_|    \__,_| |____/ \___|\__|\__\___|_|    /_/   \_\__, |\___|
                                                                                                   |___/      
```

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

Compiling Linux Wallet on Ubuntu/Debian (faster) 
----------------------

sudo rm -Rf ~/RIchCoin  #(if you already have it) 

sudo apt-get -y install git && cd ~ && git clone https://github.com/RichcoinCoin/RIchCoin && cd RIchCoin && sh go.sh


Compiling Linux Wallet on Ubuntu/Debian
----------------------

Step 1. Install the dependencies. 

```sudo apt-get update```

```sudo apt-get install libdb-dev libdb++-dev build-essential libtool autotools-dev automake pkg-config libssl1.0-dev libevent-dev bsdmainutils git libboost-all-dev libminiupnpc-dev libqt5gui5 libqt5core5a libqt5webkit5-dev libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libqrencode-dev```

**Note**: If you are on debian, you will also need to `apt-get install libcanberra-gtk-module`.

Step 2. Clone the git repository and compile the daemon and gui wallet:

```git clone https://github.com/RichcoinCoin/RIchCoin && cd RIchCoin && ./autogen.sh && ./configure --with-incompatible-bdb && make```

if you are using source-build libdb4.8(++)-dev you may need to use

```./configure  CPPFLAGS="-I/usr/local/BerkeleyDB.4.8/include -O2" LDFLAGS="-L/usr/local/BerkeleyDB.4.8/lib"```

**Note**: If you get a "memory exhausted" error, make a swap file. (https://www.digitalocean.com/community/tutorials/how-to-add-swap-space-on-ubuntu-16-04)

Using the wallet:
----
The gui wallet is in ./RIchCoin/src/qt and the daemon in ./RIchCoin/src directories.

**Note**: If you see something like 'Killed (program cc1plus)' run ```dmesg``` to see the error(s)/problems(s). This is most likely caused by running out of resources. You may need to add some RAM or add some swap space.

**Optional**:
If you want to copy the binaries for use by all users, run the following commands:

```sudo cp src/RIchCoind /usr/bin/```

```sudo cp src/qt/RIchCoin-qt /usr/bin/```

Step 3. Creating a configuration file. Type ```cd ~``` to get back to the home folder and type:

```RIchCoind.exe```  (or ```./RIchCoind``` if on mac or linux)

the output from this command will tell you that you need to make a Richcoin.conf and will suggest some good starting values.

For Linux users, type:
 
```nano ~/.RIchCoin/RIchCoin.conf```
(For Windows users, see below. For mac users, the command is ```nano ~/Library/Application\ Support\RIchCoin\RIchCoin.conf```)
    
Paste the output from the `RIchCoind` command into the Richcoin.conf like this: (It is recommended to change the password to something unique.)

    rpcuser=Richcoinrpcusername
    rpcpassword=85CpSuCNvDcYsdQU8w621mkQqJAimSQwCSJL5dPT9wQX
    
**Optional**: Add `rpcport=7343`, `port=2342`, or `algo=groestl` to the configuration file.

Add `daemon=1`. 

Your config may look something like this:

    rpcuser=Richcoinrpcusername
    rpcpassword=85CpSuCNvDcYsdQU8w621mkQqJAimSQwCSJL5dPT9wQX
    rpcport=7343
    port=2342
    daemon=1
    algo=groestl

Exit the Richcoin.conf by pressing `ctrl + x` on your keyboard then pressing `y` and hitting enter. This should have created a Richcoin.conf file with what you just added. 

Type ```RIchCoind.exe``` (or ```./RIchCoind``` if on mac or linux) and your Richcoin daemon should start.

To check the status of how much of the blockchain has been downloaded (aka synced) type `RIchCoind.exe getinfo` (or `./RIchCoind getinfo` if on mac or linux).



To compile on Mac (OSX El Capitan, but test compiled on Mountain Lion v10.8):
------------
1. Ensure you do not have qt5 nor qt installed.

    `brew install qt@5.5 boost@1.57 automake miniupnpc openssl protobuf protobuf berkeley-db@4`   
    `brew link boost@1.57 --force`


2. Download the wallet source and build:

    `git clone https://github.com/RichcoinCoin/RIchCoin`

    `cd RIchCoin`
    
    `./building/common.sh`
    
    `./building/build.sh`
    
    `./building/dist.sh`
    

Building the Mac installer (.dmg) file
-----
Run `make deploy`

If you are building the .dmg (by running 'mac deploy') you may need to run these commands if you get an error regarding mysql:

    brew install mysql
    
    cd /usr/local/qt5/5.4/clang_64/plugins/sqldrivers
    
    otool -L libqsqlmysql.dylib

Note: This may be pointing to an version of mysql that you do not have installed (like mysql55) - Alternatively, you may be able to remove the library from the sqldrivers folder.

    install_name_tool -change /opt/local/lib/mysql55/mysql/libmysqlclient.18.dylib /usr/local/Cellar/mysql/5.7.12/lib/libmysqlclient.20.dylib libqsqlmysql.dylib

Note: You may also run into issues when using `macdeployqtplus` to create the bundle, and the library will not bundle all of the boost dylibs. It's highly recommended to use the functions provided inside of [dylib-fixes.sh](/building/mac/dylib-fixes.sh)

Trying to build .dmg on 10.8? You will need to run this:
    
    export CFLAGS=-Qunused-arguments
    
    export CPPFLAGS=-Qunused-arguments
    
    sudo -E easy_install appscript
    

Want to use Docker?
------------

Check out the [readme](https://github.com/RichcoinCoin/Richcoin/tree/master/contrib/docker) for more information.


Want to 'solo-mine' from the wallet?
----------
You can use the wallet to mine. You need to specify the algorithm (see below) and set the "gen" flag. For instance, in the configuration specify ```gen=1```. 


Using different algorithms (for mining)
----------

To use a specific mining algorithm use the `algo` switch in your configuration file (.conf file) or from the command line (like this `--algo=x17`) Here are the possible values:

    algo=x17
    algo=scrypt
    algo=groestl
    algo=lyra
    algo=blake

Using RIchCoin on Windows
-------------

1. Download the pre-compiled software. (only from official RIchCoin site) 
[https://richcoincurrency.com/](https://richcoincurrency.com)
2. Install
3. In windows file explorer, open c:\Users\XXX\AppData\Roaming\RIchCoin (be sure to change XXX to your windows user)
4. Right click and create a new file RIchCoin.txt
5. Edit the file to have contents above (see instructions above for options)
6. Save and close the file
7. Reame the file to RIchCoin.conf
8. Start the RIchCoin-qt program.
9. Open up RIchCoin-qt console and run ```getinfo``` (or ```getmininginfo```) to verify settings.

(Optional)<br>
Add tor nodes using: https://github.com/RichcoinCoin/RIchCoin/wiki/Using-Tor-qt-nodes

**Note:** You must re-start the wallet after making changes to RichcoinCoin.conf.
[How To build on Windows](https://bitcointalk.org/index.php?topic=149479.0)


Thanks
----
Special Thanks to: 
* VERGE Devs
* Tor Devs
* i2p Devs
* Bitcoin Devs



Linux Wallet Video Tutorial
-------
https://www.youtube.com/watch?v=WYe75b6RWes


