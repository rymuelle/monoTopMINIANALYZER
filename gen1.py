import FWCore.ParameterSet.Config as cms

process = cms.Process("Demo")

process.load("FWCore.MessageService.MessageLogger_cfi")

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1000) )


process.source = cms.Source("PoolSource",
    fileNames = cms.untracked.vstring(
#"root://cms-xrd-global.cern.ch//store/mc/Spring14miniaod/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_POSTLS170_V5-v1/00000/F6EDDC10-8DFC-E311-BC5D-0025905A60D6.root")


# #/MonotopToHad_S3_MSM-300_Tune4C_13TeV-madgraph-tauola/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM
# 'root://osg-se.sprace.org.br//store/mc/Phys14DR/MonotopToHad_S3_MSM-300_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/2E6071E0-156A-E411-8166-002590A887EE.root',
# 'root://osg-se.sprace.org.br//store/mc/Phys14DR/MonotopToHad_S3_MSM-300_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/C221AD30-166A-E411-B502-002590A887EE.root',
# 'root://osg-se.sprace.org.br//store/mc/Phys14DR/MonotopToHad_S3_MSM-300_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/D202FDF2-FE69-E411-8C5A-002590A887FE.root'

# /DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_tsg_PHYS14_25_V1-v1/MINIAODSIM
# 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/0CDF0F0C-0572-E411-ADD4-002590A80DEA.root',
 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/8A0DDB9B-8571-E411-84EE-001E67396707.root',
 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/14CF66D8-7671-E411-987B-001E67398C37.root',
 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/2E9B150B-6471-E411-883A-001E6739713E.root',
 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/9A97F848-7671-E411-8FA4-001E67397AA3.root',
 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/C86C2162-1272-E411-B639-002590A3711C.root',
 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/EA9943C4-6271-E411-8A87-001E67397EEA.root',
 'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/FC5A2D99-7671-E411-B05F-002590200A98.root'

## /DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_tsg_PHYS14_25_V1-v1/MINIAODSIM
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/4C1E9B3A-BC77-E411-A226-00259021A43E.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/5E17BB6F-BB77-E411-9652-0025B3E05E1C.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/846C9D44-BB77-E411-9BC2-0025905C38AA.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/9AAAB088-BA77-E411-98D1-002590A4FFA2.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/AAE2C193-3179-E411-BAA0-002481E14F74.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/BAB72639-A778-E411-A526-002590200AC4.root'
#
## /DarkMatter_Monojet_M-100_AV_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_tsg_PHYS14_25_V1-v1/MINIAODSIM
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/0272B827-B777-E411-B737-001E67396FD1.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/80B6062E-9177-E411-9988-0025B3E05E1C.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/DE41B53B-9177-E411-AEBA-002590FC5AD0.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/4C377726-9676-E411-8EDE-001E673985E3.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/C09466B2-1B77-E411-882D-002590A831DC.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/E82FAF59-9B76-E411-B6AD-002590A831AA.root'
#
## /DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_tsg_PHYS14_25_V1-v1/MINIAODSIM
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/56D0FD5B-8F78-E411-97FF-002590A37120.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/8EDBDD4F-FB77-E411-91AF-002590200ABC.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/984D96B1-CE77-E411-8626-001E67397F2B.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/00000/F83E37B5-CE77-E411-A3DA-001E67396FD1.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/9A50CD47-9F75-E411-BD82-001E67396892.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/9ED76A5A-3676-E411-8570-002481E150DA.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_tsg_PHYS14_25_V1-v1/10000/A8004C44-9D75-E411-AB88-001E67396892.root'
#
## /DarkMatter_Monojet_M-10_V_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/18BC46E0-C67A-E411-BAE8-002590A88736.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/669866B9-C67A-E411-B220-002590A370DC.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/90D409B0-C67A-E411-92F6-002590A3711E.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/F2F54211-C77A-E411-B8E3-001E67398C37.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/98C1BF52-2B78-E411-B08E-002590200B40.root'
#
## /DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/08405777-2560-E411-BE59-0025902009B8.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/929341DB-2660-E411-8D11-002590200900.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/DC071E96-DF60-E411-A43C-001E67397D91.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/F8D96877-2560-E411-9418-0025902009B8.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/1E5B3288-DA60-E411-9891-002590A371C4.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/30B2D673-9061-E411-B97D-001E67396DF1.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/463CFD0B-9161-E411-B7E5-001E67398E12.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/6CC45722-9061-E411-A3B4-001E67396DF1.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/78ED8A43-0D60-E411-8B05-0025B3E05D8C.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/8498B043-0D60-E411-835E-002481E14F1E.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/9601DCE4-9161-E411-915D-001E67396D5B.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/B22166BD-0D60-E411-95E0-0025B3E0658E.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/DA1BF4BF-9061-E411-9BB8-001E67396DF1.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-10_AV_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/20000/EEFD4E0F-9161-E411-8556-001E67396DF1.root'
#
## /DarkMatter_Monojet_M-100_V_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/8EA5A2EE-F27A-E411-A3CC-001E67396577.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/A880ED0D-F37A-E411-9007-001E67396577.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/D2880FDD-F27A-E411-8030-002590200A80.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/DCEFBA3D-F37A-E411-BE81-001E673976ED.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-100_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/98EAFBF3-3378-E411-BE5C-002590A831DC.root'
#
## /DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/Phys14DR-PU20bx25_PHYS14_25_V1-v1/MINIAODSIM
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/5415F922-0A7B-E411-AAA1-002590A3711E.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/00000/CC21862F-0A7B-E411-A7B4-001E67398C37.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/2EDD285A-7D77-E411-A8D1-001E6739732D.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/7A10E126-CE77-E411-99C0-001E67396577.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/829CC3EA-9377-E411-AC81-001E6739722E.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/E07BD56A-6E78-E411-A312-002481E14FE6.root',
#'root://osg-se.sprace.org.br//store/mc/Phys14DR/DarkMatter_Monojet_M-1000_V_Tune4C_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1-v1/10000/F263CDE3-7C77-E411-97A9-0025902009C0.root'

    )
)



process.Gen = cms.EDAnalyzer('MiniAODGenPartAnalyzer',
packed = cms.InputTag("packedGenParticles"),
pruned = cms.InputTag("prunedGenParticles")
)


process.TFileService = cms.Service("TFileService",
      fileName = cms.string("Tree_gen1.root"),
      closeFileFast = cms.untracked.bool(True)
  )

process.p = cms.Path(process.Gen)


