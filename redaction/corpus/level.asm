push   %rbp
mov    %rsp,%rbp
movl   $0xa,-0xc(%rbp)
movl   $0x2,-0x8(%rbp)
mov    -0xc(%rbp),%eax
sub    -0x8(%rbp),%eax
mov    %eax,-0x4(%rbp)
mov    $0x0,%eax
pop    %rbp
ret