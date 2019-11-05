# pydatanyc2019

* support material from my talk that I gave at PyData NYC 2019

# Project links

* https://pandas.pydata.org/
* https://arrow.apache.org/ 
* https://arrow.apache.org/docs/python/
* https://parquet.apache.org/
* https://github.com/llvm-mirror/clang/tree/master/bindings/python
* https://jinja.palletsprojects.com/en/2.10.x/

# Setting up

```
pipenv install
```

# Examples

* [Pandas Examples](pandas_example.ipynb)
* [Arrow Examples](arrow_example.ipynb)
* [C++ Examples](cpp/cpp_example.ipynb)

# C++ Example

* to run the C++ example in the cpp folder run the commands below
* cppexample_sha needs to be provided

```
docker build .
bash -c 'docker run -it --rm -p 8889:8888/tcp --hostname arrow -v $(pwd):/dockershare -w /dockershare cppexample_sha jupyter lab --no-browser --ip 0.0.0.0 --allow-root'
```

Access at localhost:8889 in browser