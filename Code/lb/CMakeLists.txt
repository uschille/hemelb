add_library(hemelb_lb
	iolets/BoundaryCommunicator.cc iolets/BoundaryComms.cc iolets/BoundaryValues.cc
	iolets/InOutLet.cc
	iolets/InOutLetCosine.cc iolets/InOutLetFile.cc
	iolets/InOutLetMultiscale.cc
    iolets/InOutLetVelocity.cc
	iolets/InOutLetParabolicVelocity.cc iolets/InOutLetWomersleyVelocity.cc iolets/InOutLetFileVelocity.cc
	IncompressibilityChecker.cc
	kernels/momentBasis/DHumieresD3Q15MRTBasis.cc kernels/momentBasis/DHumieresD3Q19MRTBasis.cc
	kernels/rheologyModels/AbstractRheologyModel.cc kernels/rheologyModels/CarreauYasudaRheologyModel.cc 
	kernels/rheologyModels/CassonRheologyModel.cc kernels/rheologyModels/TruncatedPowerLawRheologyModel.cc
	lattices/LatticeInfo.cc lattices/D3Q15.cc lattices/D3Q19.cc lattices/D3Q27.cc lattices/D3Q15i.cc
	MacroscopicPropertyCache.cc SimulationState.cc StabilityTester.cc
	 )
