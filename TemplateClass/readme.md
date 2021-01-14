- The declaration and definition for functions in template class must all in the .h file.
- Mind the ```<T>``` after the ```operator==```:
  ```friend bool operator==<T>(const Blob<T>&, const Blob<T>&);```