#!/bin/zsh
if [ "$#" -ne 1 ]; then
    echo -e "\033[0;33mUsage: \033[1;32m./encrypt.sh \033[1;36m[option]\033[0m"
    exit 1
fi
option=$1

if [ "$option" = "e" ]; then
    echo ""
    echo -e "\033[1;36mCompressing and encrypting...\033[0m"
    echo ""
    tar czvpf - Assignment | gpg --symmetric --cipher-algo AES256 -o Assignment.tar.gz
    echo ""
    echo -e "\033[1;36mEncryption complete!\033[0m"
fi

if [ "$option" = "d" ]; then
    echo ""
    echo -e "\033[1;36mDecrypting and decompressing...\033[0m"
    echo ""
    gpg -d Assignment.tar.gz | tar xzvf -
    echo ""
    echo -e "\033[1;36mDecryption complete!\033[0m"
fi