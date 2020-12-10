#include "walletManager.h"

Wallet* createWallet(int value) {
    Wallet* wallet = new Wallet;
    wallet->septims = value;

    return wallet;
};

void destroyWallet(Wallet* wallet) {
    delete wallet;
};

Wallet* createWallets(int amount) {
    Wallet* wallets = new Wallet[amount];
    for (int i = 0; i < amount; ++i) {
        wallets[i].septims = i * i;
        std::cout << i << " wallet: " << wallets[i].septims << " septims." << std::endl;
    }
    return wallets;
};
void destroyWallets(Wallet* wallets) {
    delete[] wallets;
};
