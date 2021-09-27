#ifndef Alignment_CommonAlignmentAlgorithm_MPAlignmentAlgorithmPluginFactory_h
#define Alignment_CommonAlignmentAlgorithm_MPAlignmentAlgorithmPluginFactory_h

/// \class AlignmentAlgorithmPluginFactory
///  Plugin factory for alignment algorithm
///
///  \author F. Ronga - CERN
///

#include "FWCore/PluginManager/interface/PluginFactory.h"
#include "Alignment/CommonAlignmentAlgorithm/interface/AlignmentAlgorithmBase.h"

typedef edmplugin::PluginFactory<AlignmentAlgorithmBase*(const edm::ParameterSet&, edm::ConsumesCollector&, edm::EventSetup &, EventInfo &)>
    MPAlignmentAlgorithmPluginFactory;

#endif
