#include "walletManager.h"

int main() {
    Wallet* wallet = createWallet(10);
    std::cout << "I've got " << wallet->septims << " septims in the wallet." << std::endl;
    destroyWallet(wallet);

    int amount = 5;
    Wallet* wallets = createWallets(amount);

    destroyWallets(wallets);

    return 0;
}
