#  Search for a new resonance decaying to a scalar and a Higgs boson in the finalstate with two bottom quarks and two photons in proton-proton collisions at √s = 13 TeV with the ATLAS detector

During the IFIC summer school in 2023, I had the opportunity to learn from Arantxa Ruiz. During the 11-day stay, we developed a code for the analysis of a new scalar resonance involving a scalar and the Higgs boson. From data from Monte Carlo simulations (accessible from https://cernbox.cern.ch/s/hoWAnf5ujiwLuYO ) to a model containing these new scalar resonances, a code was developed in ROOT. This code allows the analysis of the simulated data in root format, the implementation of various triggers for the tagging of the jets and the development of code to match the b-jets as coming from the Higgs or the scalar. Finally, a section of the code was developed to arrange all the analysed data in histograms, facilitating their visualisation and understanding. Both the code and the histograms obtained can be found in the present repository. ATLASRootStyle Folder will also be neede and can be downloaded from https://gitlab.engr.illinois.edu/tzhang74/cmake_example/-/tree/master/include/AtlasStyle

LEADING b-jet eta histogram:
![leadding b-jet eta](https://github.com/user-attachments/assets/73a85146-1fde-4aea-a938-8c945f9b00d7)

Desintegration products masses:
![HiggsMass](https://github.com/user-attachments/assets/f6b6132b-24e3-44ad-a53a-fcc2ebb40df2)
![ScalarMass](https://github.com/user-attachments/assets/fd5446ae-f856-4e04-93dd-0bc690e053fa)

Desintegration products di-jet aperture:
![Scalar_dijet_dR](https://github.com/user-attachments/assets/fd6c2d4a-0352-48dc-9dc2-d95ca0ed2d64)
![Higgs_dijet_dR](https://github.com/user-attachments/assets/d7845c6e-4711-4ece-b58e-0b3e08d8dc27)
