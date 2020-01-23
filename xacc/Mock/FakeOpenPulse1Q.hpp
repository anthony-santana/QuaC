// This is the mock configs for an 1-qubit open pulse backend
// This is adapted from https://github.com/Qiskit/qiskit-terra/blob/13bc243364553667f6410b9a2f7a315c90bb598f/qiskit/test/mock/fake_1q.py
#pragma one
#include "PulseChannelController.hpp"

struct FakePulse1Q
{
    // Ctor   
    FakePulse1Q()
    {
        {
            backendConfig.dt = 3.5555555555555554;
            // Unit: GHz
            backendConfig.loFregs_dChannels = { 4.919909215047782 };
            // Add some dummy pulse for testing
            const std::complex<double> I(0.0, 1.0);
            backendConfig.pulseLib = {
                {"test_pulse_1", std::vector<std::complex<double>>({ 0.0, 0.1*I })},
                {"test_pulse_2", std::vector<std::complex<double>>({ 0.0, 0.1*I, I })},
                {"test_pulse_3", std::vector<std::complex<double>>({ 0.0, 0.1*I, I, 0.5 })}
            };
        }
       
    }

    BackendChannelConfigs backendConfig;
};