#include "Proposal.h"
#include<iostream>
#include<string>
using namespace std;

Proposal::Proposal()
{
	Proposal_id = "";
	Member_id = "";
	requirement = "";
}
Proposal::Proposal(string Pro_id, string member_id, string requrement)
{
	Proposal_id = Pro_id;
	Member_id = member_id;
	requirement = requrement;
}
void Proposal::displayProposal()
{
	cout << "Proposal_id:" << Proposal_id << endl;
	cout << "Member_id:" << Member_id << endl;
	cout << "requirment:" << requirement << endl;
}
void Proposal::addProposal()
{
	cout << "Proposal_id:";
	cin >> Proposal_id;
	cout << "Member_id:";
	cin >> Member_id;
	cout << "requirment:";
	cin >> requirement;
}
void Proposal::validateMembership()
{

}
void Proposal::AskRequirement()
{

}
void Proposal::createProposal()
{

}
void Proposal::finalizeProposal()
{

}
Proposal::~Proposal()
{

}