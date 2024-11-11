#!/bin/zsh
echo "Enter your ID: "
read id
echo "Enter author name: "
read author
echo "Choice: Assignment(A) or Lab(L): "
read option
if [[ "$option" == "L" ]]; then
    folder="Lab"
    prefix="L"
elif [[ "$option" == "A" ]]; then
    folder="Assignment"
    prefix="A"
else
    echo "Invalid choice"
    exit 1
fi

for file in $folder/${prefix}*T*.c; do
    if [[ -f $file ]]; then
        base_name=$(basename "$file" .c)
        new_name="${base_name}ID${id}.c"
        cp "$file" "$folder/$new_name"
        header_text="/*
=============================================
 Name: ${new_name}
 Author: ${author}
 Version: 1
 Copyright: Copyright (c) ${author}, ${id}
 Description: Work for ${folder}
 ============================================= */"
        tmp_file=$(mktemp)
        echo "$header_text" > "$tmp_file"
        cat "$folder/$new_name" >> "$tmp_file"
        mv "$tmp_file" "$folder/$new_name"
    fi
done