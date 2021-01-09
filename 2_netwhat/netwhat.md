### Netwhat

- [DHCP](https://ddooooki.tistory.com/57): A mechanism that automates IP configuration, including IP address, subnet mask, default gateway and DNS information.
- Class C: the default IP address class available
- Which IP address class has more host addresses available by default? FIRST
- What type of address is supported by DHCP: IPV4 and IPV6
- Domain name system: translates Internet domain names and host names into IP addresses
- the size of an IPV4 address: 32 bits
- the size of an IPV6 address? 128 bits
- the different layers of the [OSI model](https://ko.wikipedia.org/wiki/OSI_%EB%AA%A8%ED%98%95)? Application - Presentation - Session - Transport - Network - Data Link - Physical
- Which protocol does Ping use? [ICMP](https://m.blog.naver.com/PostView.nhn?blogId=rbdi3222&logNo=220602423771&proxyReferer=https:%2F%2Fwww.google.com%2F)
- What DHCP protocol does it use at the transport layer level? [UDP](http://www.ktword.co.kr/abbr_view.php?m_temp1=1607)

[TCP](https://ko.wikipedia.org/wiki/%EC%A0%84%EC%86%A1_%EC%A0%9C%EC%96%B4_%ED%94%84%EB%A1%9C%ED%86%A0%EC%BD%9C)

- connection-oriented protocol
- not support broadcasting
- extended error checking mechanisms(it provides flow control and data acknowledgement)
- reliable(it guarantees the delivery of data to the router of the destination)
- [Data sequencing](https://packetlife.net/blog/2010/jun/7/understanding-tcp-sequence-acknowledgment-numbers/)(packets arrive in order in the recipient)

[UDP](https://ko.wikipedia.org/wiki/%EC%82%AC%EC%9A%A9%EC%9E%90_%EB%8D%B0%EC%9D%B4%ED%84%B0%EA%B7%B8%EB%9E%A8_%ED%94%84%EB%A1%9C%ED%86%A0%EC%BD%9C)

- datagram oriented protocol
- supports [broadcasting](https://m.blog.naver.com/PostView.nhn?blogId=kbm0996&logNo=221045822230&proxyReferer=https:%2F%2Fwww.google.com%2F)
- the basic error control mechanism only
- The delivery of data to the destination cannot be guaranteed
- faster, simpler and more efficient than TCP

ip address

- IP 클래스의 종류는 A~E
- IP주소 계산기 활용법

private IP address
- 10.0.0.0 – 10.255.255.255
- 172.16.0.0 - 172.31.255.255
- 192.168.0.0 – 192.168.255.255

To test the IP stack on your local host, which IP address would you ping?
- 127.0.0.1