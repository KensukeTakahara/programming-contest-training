#include <cstdio>
#include <unordered_map>
#include <vector>

using namespace std;

struct Node {
  long val;
  vector<int> children;
};

typedef unordered_map<int, Node> Tree;

void add(int p, int x, Tree& tree) {
  tree[p].val += x;
  for (int c : tree[p].children) {
    add(c, tree[p].val, tree);
  }
}

int main() {
  int n, q;
  Tree tree;
  scanf("%d %d", &n, &q);

  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (tree.find(a) == tree.end()) {
      Node init;
      init.val = 0;
      tree.insert(make_pair(a, init));
    }
    tree[a].children.push_back(b);
  }

  for (int i = 0; i < q; ++i) {
    int p, x;
    scanf("%d %d", &p, &x);
    tree[p].val += x;
  }

  add(1, 0, tree);

  for (int i = 1; i <= n; ++i) {
    printf("%ld ", tree[i].val);
  }
  printf("\n");
  return 0;
}
