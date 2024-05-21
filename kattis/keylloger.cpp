#include <deque>
#include <iostream>

using namespace std;

int main() {
  string code;
  int N;
  bool caps = 0;
  deque<char> keyword;
  char key;

  // TODO fazer key para caps e shift separados

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> code;
    if (code == "clank")
      key = 97;
    else if (code == "bong")
      key = 98;
    else if (code == "click")
      key = 99;
    else if (code == "tap")
      key = 100;
    else if (code == "poing")
      key = 101;
    else if (code == "clonk")
      key = 102;
    else if (code == "clack")
      key = 103;
    else if (code == "ping")
      key = 104;
    else if (code == "tip")
      key = 105;
    else if (code == "cloing")
      key = 106;
    else if (code == "tic")
      key = 107;
    else if (code == "cling")
      key = 108;
    else if (code == "bing")
      key = 109;
    else if (code == "pong")
      key = 110;
    else if (code == "clang")
      key = 111;
    else if (code == "pang")
      key = 112;
    else if (code == "clong")
      key = 113;
    else if (code == "tac")
      key = 114;
    else if (code == "boing")
      key = 115;
    else if (code == "boink")
      key = 116;
    else if (code == "cloink")
      key = 117;
    else if (code == "rattle")
      key = 118;
    else if (code == "clock")
      key = 119;
    else if (code == "toc")
      key = 120;
    else if (code == "clink")
      key = 121;
    else if (code == "tuc")
      key = 122;
    else if (code == "whack") {
      key = 32;
      keyword.push_back(key);
      continue;
    } else if (code == "bump") {
      caps = !caps;
      continue;
    } else if (code == "pop")
      keyword.pop_back();
    else if (code == "dink") {
      caps = !caps;
      continue;
    } else if (code == "thumb") {
      caps = !caps;
      continue;
    }

    if (caps == 1) {
      keyword.push_back(key - 32);
    } else {
      keyword.push_back(key);
    }
  }

  while (!keyword.empty()) {
    cout << keyword.front();
    keyword.pop_front();
  }

  return 0;
}
