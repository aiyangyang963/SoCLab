cmd_net/ipv6/built-in.o :=  arm-xilinx-linux-gnueabi-ld -EL    -r -o net/ipv6/built-in.o net/ipv6/ipv6.o net/ipv6/xfrm6_mode_transport.o net/ipv6/xfrm6_mode_tunnel.o net/ipv6/xfrm6_mode_beet.o net/ipv6/sit.o net/ipv6/addrconf_core.o net/ipv6/exthdrs_core.o net/ipv6/ip6_checksum.o net/ipv6/ip6_icmp.o net/ipv6/output_core.o net/ipv6/protocol.o net/ipv6/ip6_offload.o net/ipv6/tcpv6_offload.o net/ipv6/udp_offload.o net/ipv6/exthdrs_offload.o net/ipv6/inet6_hashtables.o net/ipv6/mcast_snoop.o 
