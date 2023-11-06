#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Member {
  string Name = "";
  double mill_bzr = 0, member_mill = 0, mill_his = 0;
  double utility = 0;
  double total = 0;
  Member() = default;
};

vector<Member> input_from_user(void) {
  int count;
  cout << "Enter the number of members: ";
  cin >> count;
  vector<Member> members;
  for (int i = 0; i < count; ++i) {
    Member member;
    cout << "Enter Name: ";
    cin >> member.Name;
    cout << "Enter mill_bzr, member_mill, utility: ";
    cin >> member.mill_bzr >> member.member_mill >> member.utility;
    members.push_back(member);
  }
  return members;
}

void calculate(vector<Member> &members) {
  double tmb = 0, tmm = 0;
  for (auto &member : members) {
    tmb += member.mill_bzr;
    tmm += member.member_mill;
  }
  double mill_rate = tmb / tmm;
  for (auto &member : members) {
    member.mill_his = member.mill_bzr - (mill_rate * member.member_mill);
    member.total += member.mill_his;
  }
  double total_util = 0;
  for (auto &member : members) {
    total_util += member.utility;
  }
  double utility_rate = total_util / double(members.size());
  for (auto &member : members) {
    double his = member.utility - utility_rate;
    member.total += his;
  }
}

int main(void) {
  vector<Member> members = input_from_user();
  calculate(members);
  for (const auto &member : members)
    printf("%s:\tMILL: %.2lf\tTOTAL: %.2lf\tAlTot: %.2lf\n", member.Name.c_str(),
           member.mill_his, member.total, member.total );

  return 0;
}
