Problem Statement

A bank maintains multiple customer accounts and needs to answer global queries about its system.

Each account has its own balance and can receive deposits, withdrawals, and may be closed. In addition to individual account operations, the bank must be able to report:

The number of currently active accounts

The total balance across all active accounts

You are required to process a sequence of commands and produce correct outputs for system-wide queries.

Operations

Each operation is given in one of the following formats:

CREATE x

Create a new account with initial balance x.
DEPOSIT i x

Deposit x into the ith created account.
WITHDRAW i x

Withdraw x from the ith created account only if sufficient balance is available.
CLOSE i

Close the ith created account.

Once closed, the account balance becomes 0.

Further operations on a closed account have no effect.
TOTAL_ACCOUNTS

Print the number of active accounts.
TOTAL_BALANCE

Print the total balance across all active accounts.
Input Format

First line contains an integer Q — number of operations.
Next Q lines contain one operation per line.
Constraints

1 ≤ Q ≤ 10^5

0 ≤ x ≤ 10^6

Account indices are 1-based

Invalid operations must be safely ignored

Output Format

For each TOTAL_ACCOUNTS and TOTAL_BALANCE operation, print the required value on a new line.
Sample Input 0

7
CREATE 100
CREATE 50
WITHDRAW 1 30
TOTAL_BALANCE
CLOSE 2
TOTAL_ACCOUNTS
TOTAL_BALANCE
Sample Output 0

120
1
70
