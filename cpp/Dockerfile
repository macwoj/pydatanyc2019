FROM ubuntu

RUN apt-get update
RUN apt-get install -y software-properties-common wget

RUN wget -qO - https://apt.llvm.org/llvm-snapshot.gpg.key | apt-key add -
RUN apt-add-repository "deb http://apt.llvm.org/cosmic/ llvm-toolchain-cosmic-8 main"
RUN apt update

# LLVM
RUN apt install -y libllvm-7-ocaml-dev libllvm7 llvm-7 llvm-7-dev llvm-7-doc llvm-7-examples llvm-7-runtime
# Clang and co
RUN apt install -y clang-7 clang-tools-7 clang-7-doc libclang-common-7-dev libclang-7-dev libclang1-7 clang-format-7 python-clang-7

RUN apt install -y python3-pip

RUN python3 -m pip install jupyterlab pandas pyarrow

RUN apt install -y -V apt-transport-https curl gnupg lsb-release
RUN curl --output /usr/share/keyrings/apache-arrow-keyring.gpg https://dl.bintray.com/apache/arrow/$(lsb_release --id --short | tr 'A-Z' 'a-z')/apache-arrow-keyring.gpg
RUN echo "deb [arch=amd64 signed-by=/usr/share/keyrings/apache-arrow-keyring.gpg] https://dl.bintray.com/apache/arrow/$(lsb_release --id --short | tr 'A-Z' 'a-z')/ $(lsb_release --codename --short) main\n\
deb-src [signed-by=/usr/share/keyrings/apache-arrow-keyring.gpg] https://dl.bintray.com/apache/arrow/$(lsb_release --id --short | tr 'A-Z' 'a-z')/ $(lsb_release --codename --short) main\n" >> /etc/apt/sources.list.d/apache-arrow.list
RUN apt update
RUN apt install -y -V libarrow-dev # For C++
RUN apt install -y -V libparquet-dev # For Apache Parquet C++