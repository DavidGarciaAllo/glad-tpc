{
    gROOT->ProcessLine(".L simHYDRA.C");
    simHYDRA(1000, "Prototype", "box");
}
// simHYDRA(nevt,"Detector","generator")
// Detector: "Prototype", "FullBeamOut", "FullBeamIn"
// Generator: "good_evt", "bkg_evt", "box" TODO signal+bkg
// nevt:bkg 20455 <-if bkg_evt is chosen should be set this number of events, this corresponds to carbon 12 beam (10^6
// apps) that impinges on a c12 target
