#!/bin/bash

script_dir=$(dirname "$(readlink -f "$0")")
echo "The directory of this script is: $script_dir"

# Function to create and sign a file
create_sign_file() {
  local key_name="$1"
  local file_to_sign="$2"
  local signed_file="$3"

  key_output="$(gpg --list-keys --keyid-format LONG)"
  if echo "$key_output" | grep -q "$key_name"; then
    echo "Key $key_name exists"
  else
    echo "Key $key_name does not exist"
    gpg --batch --passphrase "" --quick-generate-key "$key_name" rsa4096 sign
    gpg --batch --passphrase "" --export-secret-keys --armor "$key_name" > private.key
    gpg --batch --import private.key
    rm private.key
  fi
   gpg --detach-sign --armor --local-user "$key_name" --output "$signed_file" "$file_to_sign"
   gpg --verify "$signed_file" "$file_to_sign"
}

mkdir -p $script_dir/output
$script_dir/nvbuild.sh
mv $script_dir/kernel/kernel-5.10/arch/arm64/boot/Image $script_dir/output/Image_hkust
create_sign_file "hkust" "$script_dir/output/Image_hkust" "$script_dir/output/Image_hkust.sig"