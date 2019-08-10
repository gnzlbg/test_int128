int gcc_size() {
  return sizeof(__int128);
}

int gcc_align() {
  return _Alignof(__int128);
}

__int128 add_one(__int128 x) {
  return x + 1;
}
