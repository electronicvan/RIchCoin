FROM binhex/arch-base

MAINTAINER Mike Kinney <mike.kinney@gmail.com>

RUN pacman -S --noconfirm --needed base-devel boost boost-libs openssl db base-devel qrencode qt5 automoc4 git protobuf

RUN git clone https://github.com/RichcoinCoin/richcoin.git /coin/git

WORKDIR /coin/git

RUN ./autogen.sh && ./configure --with-gui=qt5 --with-incompatible-bdb --enable-hardening && make && mv src/RIchCoind /coin/RIchCoind

WORKDIR /coin
VOLUME ["/coin/home"]

ENV HOME /coin/home

CMD ["/coin/RIchCoind"]

# P2P, RPC
<<<<<<< HEAD
EXPOSE 2342 7343
=======
EXPOSE 21103 20103
>>>>>>> 9e838dcb5d959712eba2265497e273c660893440
