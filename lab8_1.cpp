#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;

  while(rank == 'S' || rank == 'A' || rank == 'B' || rank == 'C' || rank == 'D'){
  if(rank == 'S'){
      cout << "You have received Super Ultra Rare Unit!!!\n";
      rank = 'A';
  } else if (rank == 'A'){
      cout << "You have received 5 gems.\n";
      rank = 'B';
  } else if (rank == 'B'){
      cout << "You have received 1 gems.\n";
      rank = 'C';
  } else if (rank == 'C'){
      cout << "You have received 2000 coins.\n";
      rank = 'D';
  } else if (rank == 'D'){
      cout << "You have received very KAK items.\n";
      rank = 'X';
  }
  }
  return 0;
}
