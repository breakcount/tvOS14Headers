#import <Vision/VNRecognizedBodyPointsSpecifier.h>
#import <Vision/VNSaliencyHeatmapBoundingBoxGenerator.h>
#import <Vision/VNSaliencyAHeatmapBoundingBoxGenerator.h>
#import <Vision/VNSaliencyOHeatmapBoundingBoxGenerator.h>
#import <Vision/VNDetectHumanHeadRectanglesRequest.h>
#import <Vision/VNFaceQualityGenerator.h>
#import <Vision/CVML_Error.h>
#import <Vision/VNClusteringLogger.h>
#import <Vision/VNSuggestionsLogger.h>
#import <Vision/VNGreedyClusteringReadOnly.h>
#import <Vision/VNGreedyClusteringReadWrite.h>
#import <Vision/BurstFaceConfigEntry.h>
#import <Vision/BurstFaceScoreEntry.h>
#import <Vision/BurstFaceInfo.h>
#import <Vision/BurstImageFaceAnalysisContext.h>
#import <Vision/BurstActionClassifier.h>
#import <Vision/VNFaceAnalyzerMultiDetectorBase.h>
#import <Vision/VNClustererContextBase.h>
#import <Vision/VNClustererReadOnlyContext.h>
#import <Vision/VNClustererReadWriteContext.h>
#import <Vision/VNSceneClassifier.h>
#import <Vision/_VNRequestForensicsRequestAndErrorTuple.h>
#import <Vision/_VNRequestForensicsRequestAndObservationsCacheKeyTuple.h>
#import <Vision/_VNRequestForensicsParentChildRequests.h>
#import <Vision/VNRequestForensics.h>
#import <Vision/LKTMetalContext.h>
#import <Vision/VNError.h>
#import <Vision/VNAppendBurstSequenceFrameRequest.h>
#import <Vision/VNFaceDetectorRevision2.h>
#import <Vision/BurstFaceStat.h>
#import <Vision/BurstImageStat.h>
#import <Vision/VNClassifyJunkImageRequestConfiguration.h>
#import <Vision/VNClassifyJunkImageRequest.h>
#import <Vision/VNHomographicImageRegistrationRequest.h>
#import <Vision/VNObjectTrackerLegacyFaceCore.h>
#import <Vision/VNSceneClassificationRequestConfiguration.h>
#import <Vision/VNSceneClassificationRequest.h>
#import <Vision/VNPhotosRequestHandler.h>
#import <Vision/VNBlurSignature.h>
#import <Vision/VNBlurMeasure.h>
#import <Vision/VNTrackingRequest.h>
#import <Vision/VNMetalContext.h>
#import <Vision/VNDetector.h>
#import <Vision/VNDetectTrajectoriesRequestConfiguration.h>
#import <Vision/VNDetectTrajectoriesRequest.h>
#import <Vision/VNClassifyPotentialLandmarkRequestConfiguration.h>
#import <Vision/VNClassifyPotentialLandmarkRequest.h>
#import <Vision/VNImageAnalyzerCompoundRequestGroupingConfiguration.h>
#import <Vision/VNImageAnalyzerCompoundRequestGroupingConfigurations.h>
#import <Vision/VNImageAnalyzerCompoundRequestConfiguration.h>
#import <Vision/VNImageAnalyzerCompoundRequest.h>
#import <Vision/VNFaceRegionMap.h>
#import <Vision/VNANEProcessingDevice.h>
#import <Vision/VNRuntimeUtilities.h>
#import <Vision/VNCanceller.h>
#import <Vision/VNFaceLandmarkDetector.h>
#import <Vision/VNFaceAnalyzerCompoundRequestConfiguration.h>
#import <Vision/VNFaceAnalyzerCompoundRequestConfigurationGroups.h>
#import <Vision/VNFaceAnalyzerFaceObservationGrouping.h>
#import <Vision/VNFaceAnalyzerCompoundRequest.h>
#import <Vision/VNImageBufferManager.h>
#import <Vision/VNImageSourceManager.h>
#import <Vision/VNImageBuffer.h>
#import <Vision/VNCreateTorsoprintRequest.h>
#import <Vision/VNMutablePersonsModel.h>
#import <Vision/_VNWeakSessionsCollection.h>
#import <Vision/VNFrameworkManager.h>
#import <Vision/VNRPNTrackerEspressoModelCacheManager.h>
#import <Vision/VNObjectTrackerRevision2.h>
#import <Vision/VNRequest.h>
#import <Vision/VNSizeRange.h>
#import <Vision/VNSupportedImageSize.h>
#import <Vision/VNRequestConfiguration.h>
#import <Vision/VNPoint.h>
#import <Vision/VNFaceTorsoprint.h>
#import <Vision/VN5kJNH3eYuyaLxNpZr5Z7ziConfiguration.h>
#import <Vision/VN5kJNH3eYuyaLxNpZr5Z7zi.h>
#import <Vision/VNFaceDetectorRevision1.h>
#import <Vision/VNMomentProcessor.h>
#import <Vision/VNMPClusteringTreeNodeWrapper.h>
#import <Vision/VNGenerateAttentionBasedSaliencyImageRequestConfiguration.h>
#import <Vision/VNGenerateAttentionBasedSaliencyImageRequest.h>
#import <Vision/VNEspressoDetectedObject.h>
#import <Vision/SaliencyExtrema.h>
#import <Vision/VNSaliencyImageObservation.h>
#import <Vision/VNImageSaliencyObservation.h>
#import <Vision/VNVYvzEtX1JlUdu8xx5qhDIConfiguration.h>
#import <Vision/VNVYvzEtX1JlUdu8xx5qhDI.h>
#import <Vision/VNDetectedPoint.h>
#import <Vision/VNRecognizedPoint.h>
#import <Vision/VNFaceprint.h>
#import <Vision/VNClassifyImageAestheticsRequestConfiguration.h>
#import <Vision/VNClassifyImageAestheticsRequest.h>
#import <Vision/VNRectangleTracker.h>
#import <Vision/VNFaceprintGeneratorRevision1.h>
#import <Vision/VNSmartCamClassifier.h>
#import <Vision/VNRecognizeObjectsRequestConfiguration.h>
#import <Vision/VNRecognizeObjectsRequest.h>
#import <Vision/VNFaceExpressionDetector.h>
#import <Vision/VNSceneprint.h>
#import <Vision/VNSceneFeaturePrint.h>
#import <Vision/BurstClusterDivider.h>
#import <Vision/VNDetectTextRectanglesRequestConfiguration.h>
#import <Vision/VNDetectTextRectanglesRequest.h>
#import <Vision/_VNPersonsModelDataSourceBasedDataProvider.h>
#import <Vision/VNPersonsModel.h>
#import <Vision/VNPersonsModelInformation.h>
#import <Vision/VNPersonsModelConfiguration.h>
#import <Vision/VNPersonsModelPrediction.h>
#import <Vision/VNPersonsModelReadOptions.h>
#import <Vision/VNPersonsModelWriteOptions.h>
#import <Vision/VNClassifyImageRequestConfiguration.h>
#import <Vision/VNClassifyImageRequest.h>
#import <Vision/VNImageRegistrationRequest.h>
#import <Vision/VNFaceAttributeCategory.h>
#import <Vision/VNFaceAttributes.h>
#import <Vision/VNMTLDeviceWisdomParameters.h>
#import <Vision/VNCreateDetectionprintRequestConfiguration.h>
#import <Vision/VNCreateDetectionprintRequest.h>
#import <Vision/VNDetectionprintObservation.h>
#import <Vision/VNImageSignature.h>
#import <Vision/VNFaceAnalyzerMultiDetector.h>
#import <Vision/VNSmartCamprint.h>
#import <Vision/VNOperationPointsProvider.h>
#import <Vision/VNMPUtils.h>
#import <Vision/VNVideoProcessorCadence.h>
#import <Vision/VNVideoProcessorFrameRateCadence.h>
#import <Vision/VNVideoProcessorTimeIntervalCadence.h>
#import <Vision/VNVideoProcessorRequestProcessingOptions.h>
#import <Vision/VNVideoProcessor.h>
#import <Vision/VNRecognizedPointsObservation.h>
#import <Vision/VNFaceSegmentGenerator.h>
#import <Vision/VNHumanPoseDetector.h>
#import <Vision/VNSingleHeadSceneprintGenerator.h>
#import <Vision/VNANFDMultiDetectorANODv3.h>
#import <Vision/VNFaceDetectorPrivateRevisionLegacyFaceCore.h>
#import <Vision/ShotflowDetector.h>
#import <Vision/ShotflowDetectorANFDv1.h>
#import <Vision/ShotflowDetectorANODBase.h>
#import <Vision/ShotflowDetectorANFDv2.h>
#import <Vision/ShotflowDetectorANODv3.h>
#import <Vision/VNEspressoModelClassifier.h>
#import <Vision/VNBarcodeObservation.h>
#import <Vision/VNDetectBarcodesRequest.h>
#import <Vision/VNDetectBarcodesRequestConfiguration.h>
#import <Vision/VNTrackerManager.h>
#import <Vision/VNGenerateImageFeaturePrintRequestConfiguration.h>
#import <Vision/VNGenerateImageFeaturePrintRequest.h>
#import <Vision/VNDetectHumanHandPoseRequestConfiguration.h>
#import <Vision/VNDetectHumanHandPoseRequest.h>
#import <Vision/VNHumanHandPoseObservation.h>
#import <Vision/ANFDDetectedObject.h>
#import <Vision/VNMPImageData.h>
#import <Vision/VNOperationPoints.h>
#import <Vision/_VNUnspecifiedOperationPoints.h>
#import <Vision/LKTOpticalFlowGPU.h>
#import <Vision/VNNOPRequestConfiguration.h>
#import <Vision/VNNOPRequest.h>
#import <Vision/VNDetectFaceLandmarksRequestConfiguration.h>
#import <Vision/VNDetectFaceLandmarksRequest.h>
#import <Vision/VNImageprint.h>
#import <Vision/VNFaceGeometryEstimator.h>
#import <Vision/VNMetalProcessingDevice.h>
#import <Vision/VNEspressoModelImageprint.h>
#import <Vision/VNImageAestheticsObservation.h>
#import <Vision/VNFaceRegionMapGenerator.h>
#import <Vision/VNContoursObservation.h>
#import <Vision/VNTrajectoryProcessor.h>
#import <Vision/VNObservation.h>
#import <Vision/VNDetectedObjectObservation.h>
#import <Vision/VNFaceObservation.h>
#import <Vision/VNImageAlignmentObservation.h>
#import <Vision/VNImageTranslationAlignmentObservation.h>
#import <Vision/VNImageHomographicAlignmentObservation.h>
#import <Vision/VNImageScoreObservation.h>
#import <Vision/VNImageprintObservation.h>
#import <Vision/VNImageBlurObservation.h>
#import <Vision/VNImageBrightnessObservation.h>
#import <Vision/VNClassificationObservation.h>
#import <Vision/VNRecognizedObjectObservation.h>
#import <Vision/VNCoreMLFeatureValueObservation.h>
#import <Vision/VNPixelBufferObservation.h>
#import <Vision/VNRectangleObservation.h>
#import <Vision/VNHorizonObservation.h>
#import <Vision/VNCluster.h>
#import <Vision/VNClusterObservation.h>
#import <Vision/VNFeaturePrintObservation.h>
#import <Vision/VNSceneObservation.h>
#import <Vision/VNSmartCamObservation.h>
#import <Vision/VNBurstObservation.h>
#import <Vision/VNRecognizedTextObservation.h>
#import <Vision/VNTrajectoryObservation.h>
#import <Vision/_VNTextObservationCharacterBox.h>
#import <Vision/VNTextObservation.h>
#import <Vision/VNOpticalFlowObservation.h>
#import <Vision/VNHorizonDetector.h>
#import <Vision/VNDetectFacePoseRequest.h>
#import <Vision/VNImageBasedRequestConfiguration.h>
#import <Vision/VNImageBasedRequest.h>
#import <Vision/VNVersionParser.h>
#import <Vision/VNHeatMapExtrema.h>
#import <Vision/VNHeatMapUtilities.h>
#import <Vision/VNGenerateImageSaliencyRequestConfiguration.h>
#import <Vision/VNGenerateImageSaliencyRequest.h>
#import <Vision/VNANERuntimeDirectProcessingDevice.h>
#import <Vision/VNRecognizeAnimalsRequest.h>
#import <Vision/VNHomeAppFaceAnalyzerMultiDetector.h>
#import <Vision/VNImageGrouper.h>
#import <Vision/VNDetectorCache.h>
#import <Vision/VNCVPixelBufferConversionHelpers.h>
#import <Vision/VNHumanBodyPoseDetector.h>
#import <Vision/VNClassifyFaceAttributesRequest.h>
#import <Vision/VNContoursDetector.h>
#import <Vision/VNSequenceRequestHandler.h>
#import <Vision/VNPersonsModelFaceModel.h>
#import <Vision/BurstImageSetInternal.h>
#import <Vision/VNHumanHandPoseDetector.h>
#import <Vision/VNDetectHumanRectanglesRequest.h>
#import <Vision/VNMPImageGrouping.h>
#import <Vision/VNEspressoResources.h>
#import <Vision/VNEspressoHelpers.h>
#import <Vision/LKTOpticalFlowCPU.h>
#import <Vision/VNDetectionprintTensor.h>
#import <Vision/VNDetectionprint.h>
#import <Vision/VNDetectFace3DLandmarksRequest.h>
#import <Vision/MetalInterface.h>
#import <Vision/VNRecognizedPointsSpecifier.h>
#import <Vision/VNFaceLandmarkDetectorRevision1.h>
#import <Vision/VNJunkIdentifier.h>
#import <Vision/VNFaceAnalyzerMultiDetectorFPrev3FArev2.h>
#import <Vision/VNRectangleDetector.h>
#import <Vision/VNdGg5skzXHSAENO6T3enHEConfiguration.h>
#import <Vision/VN6Mb1ME89lyW3HpahkEygIG.h>
#import <Vision/VNCPUProcessingDevice.h>
#import <Vision/VNTorsoprintGenerator.h>
#import <Vision/VNImageBlurScoreRequestConfiguration.h>
#import <Vision/VNImageBlurScoreRequest.h>
#import <Vision/VNFaceDetector.h>
#import <Vision/VNFaceLandmarkRegion.h>
#import <Vision/VNFaceLandmarkRegion2D.h>
#import <Vision/VNFaceLandmarkRegion3D.h>
#import <Vision/VNFaceLandmarks.h>
#import <Vision/VNFaceLandmarks2D.h>
#import <Vision/VNFaceLandmarks3D.h>
#import <Vision/VNValidationUtilities.h>
#import <Vision/CVMLFaceprint_LegacySupportDoNotChange.h>
#import <Vision/CVMLObservation_LegacySupportDoNotChange.h>
#import <Vision/CVMLImageprintObservation_LegacySupportDoNotChange.h>
#import <Vision/MPImageDescriptor_LegacySupportDoNotChange.h>
#import <Vision/VNFaceLandmarkDetectorRevision3.h>
#import <Vision/VNBlacklist.h>
#import <Vision/VNTrackLegacyFaceCoreObjectRequest.h>
#import <Vision/VNTorsoprint.h>
#import <Vision/VNMLFeatureProvider.h>
#import <Vision/VNCoreMLModel.h>
#import <Vision/VNCoreMLTransformer.h>
#import <Vision/VNSceneTaxonomyOperationPoints.h>
#import <Vision/VNFaceLegacyFaceCore.h>
#import <Vision/VNImageClassifier.h>
#import <Vision/VNCreateImageprintRequestConfiguration.h>
#import <Vision/VNCreateImageprintRequest.h>
#import <Vision/ParabolaDetetction.h>
#import <Vision/VNDetectHumanBodyPoseRequestConfiguration.h>
#import <Vision/VNDetectHumanBodyPoseRequest.h>
#import <Vision/VNHumanBodyPoseObservation.h>
#import <Vision/VNOpticalFlowGenerator.h>
#import <Vision/VNStatefulRequestConfiguration.h>
#import <Vision/VNStatefulRequest.h>
#import <Vision/VNObjectTracker.h>
#import <Vision/VNFaceSegments.h>
#import <Vision/BurstThumbnailCluster.h>
#import <Vision/VNModelFileImpl.h>
#import <Vision/VNModelFilesCache.h>
#import <Vision/_VNGlobalSession.h>
#import <Vision/VNSession.h>
#import <Vision/VNWeakSessionWrapper.h>
#import <Vision/VNGeometryUtils.h>
#import <Vision/VNBoundingCircleAlgorithm.h>
#import <Vision/VNContourAreaCalculationAlgorithm.h>
#import <Vision/VNContourPerimeterAlgorithm.h>
#import <Vision/VNMPImageDescriptor.h>
#import <Vision/VNDetectFaceRectanglesRequestConfiguration.h>
#import <Vision/VNDetectFaceRectanglesRequest.h>
#import <Vision/VNANFDMultiDetectorANFDv2.h>
#import <Vision/VNGenerateFaceSegmentsRequestConfiguration.h>
#import <Vision/VNGenerateFaceSegmentsRequest.h>
#import <Vision/VNRecognizeFoodAndDrinkRequest.h>
#import <Vision/VNBurstContext.h>
#import <Vision/VNDetectFaceCaptureQualityRequestConfiguration.h>
#import <Vision/VNDetectFaceCaptureQualityRequest.h>
#import <Vision/VNVector.h>
#import <Vision/VNTranslationalImageRegistrationRequest.h>
#import <Vision/VNFaceprintGenerator.h>
#import <Vision/VNCreateSmartCamprintRequestConfiguration.h>
#import <Vision/VNCreateSmartCamprintRequest.h>
#import <Vision/VNImageAnalyzerMultiDetector.h>
#import <Vision/_VNImageAnalyzerMultiDetectorSceneOperationPointsCache.h>
#import <Vision/_VNImageAnalyzerMultiDetectorSceneOperationPointsProvider.h>
#import <Vision/VNDetectContoursRequestConfiguration.h>
#import <Vision/VNDetectContoursRequest.h>
#import <Vision/VNCreateFaceRegionMapRequest.h>
#import <Vision/CCCharBoxContext.h>
#import <Vision/CCTextDetector.h>
#import <Vision/VNObjectTrackerRevision1.h>
#import <Vision/VNObservationsCache.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>
#import <Vision/VNRecognizeTextRequestConfiguration.h>
#import <Vision/VNRecognizeTextRequest.h>
#import <Vision/VNRecognizedText.h>
#import <Vision/VNContour.h>
#import <Vision/VNDetectRectanglesRequestConfiguration.h>
#import <Vision/VNDetectRectanglesRequest.h>
#import <Vision/ShotflowDetection.h>
#import <Vision/VNReadOnlyPersonsModel.h>
#import <Vision/VNCreateSceneprintRequestConfiguration.h>
#import <Vision/VNCreateSceneprintRequest.h>
#import <Vision/VNRecognizedHandPointsSpecifier.h>
#import <Vision/VNRequestPerformer.h>
#import <Vision/VNFaceLandmarkDetectorDNN.h>
#import <Vision/VNIdentifyJunkRequest.h>
#import <Vision/VNANFDMultiDetectorOriginalRequestInfo.h>
#import <Vision/VNANFDMultiDetector.h>
#import <Vision/VNClassificationCustomHierarchy.h>
#import <Vision/_VNSceneClassifierClassificationCustomHierarchy.h>
#import <Vision/_VNImageAnalyzerMultiDetectorClassificationCustomHierarchy.h>
#import <Vision/VNGroupImagesByTimeAndContentRequest.h>
#import <Vision/VNProcessingDevice.h>
#import <Vision/VNAlignFaceRectangleRequestConfiguration.h>
#import <Vision/VNAlignFaceRectangleRequest.h>
#import <Vision/VNClustererOptions.h>
#import <Vision/VNClustererQueryOptions.h>
#import <Vision/VNClustererBuilderOptions.h>
#import <Vision/VNClustererQuery.h>
#import <Vision/VNClustererBuilder.h>
#import <Vision/VNCoreMLRequestConfiguration.h>
#import <Vision/VNCoreMLRequest.h>
#import <Vision/VNMPContext.h>
#import <Vision/VNFaceAnalyzerMultiDetectorFPrev2FArev1.h>
#import <Vision/VNDetectFaceExpressionsRequest.h>
#import <Vision/ShotflowNetwork.h>
#import <Vision/ShotflowNetworkANFDv1.h>
#import <Vision/ShotflowNetworkANODBase.h>
#import <Vision/ShotflowNetworkANFDv2.h>
#import <Vision/ShotflowNetworkANODv3.h>
#import <Vision/VNBrightnessMeasure.h>
#import <Vision/VNTrackRectangleRequest.h>
#import <Vision/VNCreateFaceTorsoprintRequest.h>
#import <Vision/LKTOpticalFlow.h>
#import <Vision/VNFaceLandmarkDetectorRevision2.h>
#import <Vision/VNCreateFaceprintRequestConfiguration.h>
#import <Vision/VNCreateFaceprintRequest.h>
#import <Vision/VNTrackObjectRequest.h>
#import <Vision/VNFaceBBoxAligner.h>
#import <Vision/VNTracker.h>
#import <Vision/VNImageExposureScoreRequest.h>
#import <Vision/VNSmartCamCombinedAestheticsAndSaliencyDetector.h>
#import <Vision/VNCompoundRequest.h>
#import <Vision/VNUniqueObservationClassCompoundRequest.h>
#import <Vision/VNHomologousObservationClassCompoundRequest.h>
#import <Vision/VNGenerateOpticalFlowRequest.h>
#import <Vision/VNANERuntimeProcessingDevice.h>
#import <Vision/VNRequestPerformingContext.h>
#import <Vision/VNGenerateObjectnessBasedSaliencyDetector.h>
#import <Vision/VNGenerateObjectnessBasedSaliency544x544Detector.h>
#import <Vision/VNANFDDetectorCompoundRequestConfiguration.h>
#import <Vision/VNANFDDetectorCompoundRequestConfigurationGroups.h>
#import <Vision/VNANFDDetectorCompoundRequest.h>
#import <Vision/VNGenerateObjectnessBasedSaliencyImageRequestConfiguration.h>
#import <Vision/VNGenerateObjectnessBasedSaliencyImageRequest.h>
#import <Vision/VNImageRegistrationSignature.h>
#import <Vision/VNImageRegistration.h>
#import <Vision/VNPersonsModelData.h>
#import <Vision/VNImageprintGenerator.h>
#import <Vision/VNTargetedImageRequest.h>
#import <Vision/VNDetectionprintGenerator.h>
#import <Vision/VNCircle.h>
#import <Vision/VNImageRequestHandler.h>
#import <Vision/VNDetectHorizonRequest.h>