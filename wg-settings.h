#include <WireGuard-ESP32.h>
static WireGuard wg;

char private_key[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX="; // private key of the client (ESP)
char public_key[]  = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX="; // public key of the server (remote linux VPN server)
IPAddress local_ip(192,168,69,404);           // VPN IP for this VPN client
char endpoint_address[] = "XXXXXX.go.ro"; // VPN/Wireguard server hostname
int endpoint_port = 88888;                   // VPN/Wireguard server port
