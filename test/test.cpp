#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../tree/tree.cpp"

TEST(Tree, preoder)
{
  /*
  картинка с графическим представлением дерева
  */

  Node f1(601, {});
  std::vector<Node> tr1;
  tr1.push_back(f1);
  Node f2(15, tr1);
  Node f3(16, {});
  Node f4(7, {});
  Node f5(8, {});
  Node f6(100, {});
  Node f7(805, {});
  std::vector<Node> tr2;
  tr2.push_back(f2);
  tr2.push_back(f3);
  Node f8(12, tr2);
  std::vector<Node> tr3;
  tr3.push_back(f4);
  Node f9(44, tr3);
  std::vector<Node> tr4;
  tr4.push_back(f5);
  tr4.push_back(f6);
  tr4.push_back(f7);
  Node f10(13, tr4);
  std::vector<Node> tr5;
  tr5.push_back(f8);
  tr5.push_back(f9);
  tr5.push_back(f10);
  Node f11(1, tr5);
  std::vector<int> res;
  best_wishes(f11, rez);

  ASSERT_EQ(rez[0], 1);
  ASSERT_EQ(rez[1], 12);
  ASSERT_EQ(rez[2], 44);
  ASSERT_EQ(rez[3], 13);
  ASSERT_EQ(rez[4], 15);
  ASSERT_EQ(rez[5], 16);
  ASSERT_EQ(rez[6], 7);
  ASSERT_EQ(rez[7], 8);
  ASSERT_EQ(rez[8], 100);
  ASSERT_EQ(rez[9], 805);
  ASSERT_EQ(rez[10], 601);
}