#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Member {
  string Name = "";
  double mill_bzr = 0, mill_mill = 0, mill_his = 0;
  double utility = 0;
  double total = 0;
  Member() = default;
};

void input_data(vector<Member> &members) {
  int count;
  cout << "Enter the number of members: ";
  cin >> count;
  for (int i = 0; i < count; ++i) {
    Member member;
    cout << "Enter the name of member " << i + 1 << ": ";
    cin >> member.Name;
    cout << "Enter the mill bzr of member " << i + 1 << ": ";
    cin >> member.mill_bzr;
    cout << "Enter the mill mill of member " << i + 1 << ": ";
    cin >> member.mill_mill;
    cout << "Enter the utility of member " << i + 1 << ": ";
    cin >> member.utility;
    members.push_back(member);
  }
}

void calculate(vector<Member> &members) {
  double tmb = 0, tmm = 0;
  for (auto &member : members) {
    tmb += member.mill_bzr;
    tmm += member.mill_mill;
  }
  double mill_rate = tmb / tmm;
  for (auto &member : members) {
    member.mill_his = member.mill_bzr - (mill_rate * member.mill_mill);
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
  vector<Member> members;
  input_data(members);
  calculate(members);
  for (const auto &member : members)
    printf("%s:\tMILL: %.2lf\tTOTAL: %.2lf\tAlTot: %.2lf\n", member.Name.c_str(),
           member.mill_his, member.total, member.total );

  return 0;
}