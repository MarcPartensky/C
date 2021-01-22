struct addrinfo {
	int ai_flags;
	int ai_family;
	int ai_socktype;
	int ai protocol;
	size_t ai_addrlen;
	struct sockaddr *ai_addr;
	char *ai_canonname;

	struct addrinfo *ai_next;
}

struct sockaddr {
	unsinged short sa_family;
	char sa_data[14];
}

struct sockaddr_in {
	short int sin_family;
	unsigned short int sin_port;
	struct in_addr sin_addr;
	unsigned char sin_zer[8];
}

struct in_addr {
	uint32_t s_addr;
}

struct sockaddr_in6 {
	u_int16_t sin6_family;
	u_int16_t sin6_port;
	u_int32_t sin6_flowinfo;
	struct in6_addr sin6_addr;
	u_int32_t sin6_scope_id;
}

struct in6_addr {
	unsigned char s6_addr[16];
}

struct sockaddr_storage {
	sa_family_t ss_family;
	char __ss_pad1[_SS_PAD1SIZE];
	int64_t __ss_align;
	char __s_pad2[_SS_PAD2SIZE];
}

struct sockaddr_in sa;
struct sockaddr_in6 sa6;


inet_pton(AF_INET, "10.12.110.57", &(sa.sin_addr));
inet_pton(AF_INET6, "2001:db8:63b3:1::3490", &(sa6.sin6_addr)); // IPv6


char ip4[INET_ADDRSTRLEN];
struct sockaddr_in sa;
inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);

printf("The IPv4 address is: %s\n", ip4);

 #include <sys/types.h>
    #include <sys/socket.h>
    #include <netdb.h>

	int getaddrinfo(const char *node,     // e.g. "www.example.com" or IP
									const char *service,  // e.g. "http" or port number
									const struct addrinfo *hints,
									struct addrinfo **res);
