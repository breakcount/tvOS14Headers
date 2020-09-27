#import <AssistantServices/AFConnectionAvailabilityObserver.h>
#import <AssistantServices/AFConnection.h>
#import <AssistantServices/AFConnectionClientServiceDelegate.h>
#import <AssistantServices/AFInterstitialProvider.h>
#import <AssistantServices/_AFInterstitialAction.h>
#import <AssistantServices/AFUpdateAlarmRequest.h>
#import <AssistantServices/AFGetSettingsRequest.h>
#import <AssistantServices/AFSiriRingtone.h>
#import <AssistantServices/AFSiriPhoneticContactNames.h>
#import <AssistantServices/AFDeviceStateConnection.h>
#import <AssistantServices/AFExperimentConfiguration.h>
#import <AssistantServices/_AFExperimentConfigurationMutation.h>
#import <AssistantServices/AFSecurityConnection.h>
#import <AssistantServices/AFQueue.h>
#import <AssistantServices/AFSetSettingsRequest.h>
#import <AssistantServices/AFMyriadAdvertisementContextManager.h>
#import <AssistantServices/AFBluetoothWirelessSplitterSessionInfo.h>
#import <AssistantServices/_AFBluetoothWirelessSplitterSessionInfoMutation.h>
#import <AssistantServices/STContactAddress.h>
#import <AssistantServices/AFVoiceInfo.h>
#import <AssistantServices/AFMutableConversationItem.h>
#import <AssistantServices/AFBundleResourceManager.h>
#import <AssistantServices/AFFlowServiceConnection.h>
#import <AssistantServices/AFPhonemeTranscription.h>
#import <AssistantServices/AFDismissAlarmRequest.h>
#import <AssistantServices/AFMyriadAdvertisementContextRecord.h>
#import <AssistantServices/AFRemoteRequest.h>
#import <AssistantServices/AFSiriTaskExecution.h>
#import <AssistantServices/AFExperimentGroup.h>
#import <AssistantServices/_AFExperimentGroupMutation.h>
#import <AssistantServices/AFSiriRequestSucceededResponse.h>
#import <AssistantServices/AFWatchdogTimer.h>
#import <AssistantServices/AFDisambiguationInfo.h>
#import <AssistantServices/AFDisambiguationEvent.h>
#import <AssistantServices/AFMultiUserStateSnapshot.h>
#import <AssistantServices/_AFMultiUserStateSnapshotMutation.h>
#import <AssistantServices/AFMyriadContext.h>
#import <AssistantServices/_AFMyriadContextMutation.h>
#import <AssistantServices/AFSiriActivationConnection.h>
#import <AssistantServices/AFPhonemeMapper.h>
#import <AssistantServices/AFGetTimerRequest.h>
#import <AssistantServices/AFXPCWrapper.h>
#import <AssistantServices/AFLanguageDetectionUserContext.h>
#import <AssistantServices/AFSetTimerRequest.h>
#import <AssistantServices/AFGetTimerResponse.h>
#import <AssistantServices/AFConversationTransaction.h>
#import <AssistantServices/AFError.h>
#import <AssistantServices/AFAudioPowerXPCProvider.h>
#import <AssistantServices/_AFAudioPowerXPCSharedMemory.h>
#import <AssistantServices/AFContextManager.h>
#import <AssistantServices/AFNowPlayingObserver.h>
#import <AssistantServices/AFUserNotificationProvider.h>
#import <AssistantServices/AFAccessibilityState.h>
#import <AssistantServices/_AFAccessibilityStateMutation.h>
#import <AssistantServices/AFPersonalUserSettings.h>
#import <AssistantServices/AFUserUtterance.h>
#import <AssistantServices/AFUserUtteranceSelectionResults.h>
#import <AssistantServices/AFClockTimer.h>
#import <AssistantServices/_AFClockTimerMutation.h>
#import <AssistantServices/AFAnalyticsConnection.h>
#import <AssistantServices/AFSyncInfo.h>
#import <AssistantServices/AFSpeechPackage.h>
#import <AssistantServices/AFSpeechRecordingAlertBehavior.h>
#import <AssistantServices/_AFSpeechRecordingAlertBehaviorMutation.h>
#import <AssistantServices/AFMyriadPerceptualAudioHash.h>
#import <AssistantServices/_AFMyriadPerceptualAudioHashMutation.h>
#import <AssistantServices/AFDictionarySchema.h>
#import <AssistantServices/AFSpeechPhrase.h>
#import <AssistantServices/AFSpeechUtterance.h>
#import <AssistantServices/AFSpeechInterpretation.h>
#import <AssistantServices/AFSpeechToken.h>
#import <AssistantServices/AFDeleteSiriHistoryContext.h>
#import <AssistantServices/_AFDeleteSiriHistoryContextMutation.h>
#import <AssistantServices/AFPreferences.h>
#import <AssistantServices/AFObjectCreatedSiriResponse.h>
#import <AssistantServices/AFMyriadRecord.h>
#import <AssistantServices/AFConnectionUserInteractionAssertion.h>
#import <AssistantServices/AFOpportuneSpeakingModuleDataCollectionSanitizedSpeakable.h>
#import <AssistantServices/AFOpportuneSpeakingModuleDataCollection.h>
#import <AssistantServices/AFSpeechRecognition.h>
#import <AssistantServices/AFAudioState.h>
#import <AssistantServices/AFTreeNode.h>
#import <AssistantServices/AFAssistedDisambiguationRules.h>
#import <AssistantServices/AFSiriTaskContextProvider.h>
#import <AssistantServices/AFConversationError.h>
#import <AssistantServices/AFCoercion.h>
#import <AssistantServices/AFConversation.h>
#import <AssistantServices/AFMyriadAdvertisementContext.h>
#import <AssistantServices/_AFMyriadAdvertisementContextMutation.h>
#import <AssistantServices/AFMyriadMonitor.h>
#import <AssistantServices/AFClientConfiguration.h>
#import <AssistantServices/_AFClientConfigurationMutation.h>
#import <AssistantServices/AFSpeakableUtteranceParser.h>
#import <AssistantServices/_AFSpeakableUtterancePassThroughProvider.h>
#import <AssistantServices/AFNotifyObserver.h>
#import <AssistantServices/AFSUPFunctionProvider.h>
#import <AssistantServices/AFDictationConnection.h>
#import <AssistantServices/AFDictationConnectionServiceDelegate.h>
#import <AssistantServices/AFSearchAlarmsResponse.h>
#import <AssistantServices/AFSiriActivationHandlerAssistantDaemon.h>
#import <AssistantServices/AFBluetoothDeviceInfo.h>
#import <AssistantServices/_AFBluetoothDeviceInfoMutation.h>
#import <AssistantServices/AFSiriTaskUsageResult.h>
#import <AssistantServices/AFFeatureFlags.h>
#import <AssistantServices/STTimer.h>
#import <AssistantServices/AFSpeechRecordingAlertPolicy.h>
#import <AssistantServices/_AFSpeechRecordingAlertPolicyMutation.h>
#import <AssistantServices/AFExperiment.h>
#import <AssistantServices/_AFExperimentMutation.h>
#import <AssistantServices/AFRequestInfo.h>
#import <AssistantServices/AFUpdateAlarmResponse.h>
#import <AssistantServices/AFClockItemStorage.h>
#import <AssistantServices/AFClientLiteInternal.h>
#import <AssistantServices/AFClientLite.h>
#import <AssistantServices/AFSynchronousClientLite.h>
#import <AssistantServices/AFMediaRemoteDeviceInfo.h>
#import <AssistantServices/AFSiriDebugUIRequest.h>
#import <AssistantServices/AFLocalization.h>
#import <AssistantServices/AFDictationOptions.h>
#import <AssistantServices/AFImagePNGData.h>
#import <AssistantServices/AFDataStore.h>
#import <AssistantServices/_AFDataStoreEntry.h>
#import <AssistantServices/AFBluetoothHeadphoneInEarDetectionState.h>
#import <AssistantServices/_AFBluetoothHeadphoneInEarDetectionStateMutation.h>
#import <AssistantServices/AFAudioAnalyzer.h>
#import <AssistantServices/AFConversationStore.h>
#import <AssistantServices/AFDeviceContext.h>
#import <AssistantServices/AFDeviceContextMetadata.h>
#import <AssistantServices/AFSpeechCorrectionInfo.h>
#import <AssistantServices/AFAssertionContext.h>
#import <AssistantServices/_AFAssertionContextMutation.h>
#import <AssistantServices/AFAnalyticsEventRecord.h>
#import <AssistantServices/AFMemoryPressureObserver.h>
#import <AssistantServices/AFTriggerlessListeningOptions.h>
#import <AssistantServices/AFNetworkAvailability.h>
#import <AssistantServices/AFAccount.h>
#import <AssistantServices/AFManagedStorageConnection.h>
#import <AssistantServices/AFCreateAlarmResponse.h>
#import <AssistantServices/AFDismissTimerRequest.h>
#import <AssistantServices/AFRemoteRequestWatcher.h>
#import <AssistantServices/AFFuture.h>
#import <AssistantServices/AFSafetyBlock.h>
#import <AssistantServices/AFOneArgumentSafetyBlock.h>
#import <AssistantServices/AFTwoArgumentSafetyBlock.h>
#import <AssistantServices/AFThreeArgumentSafetyBlock.h>
#import <AssistantServices/AFOpportuneSpeakingModelFeedback.h>
#import <AssistantServices/AFOpportuneSpeakingModelFeedbackManager.h>
#import <AssistantServices/AFMyriadSession.h>
#import <AssistantServices/_AFMyriadSessionMutation.h>
#import <AssistantServices/AFMetrics.h>
#import <AssistantServices/AFSiriUserNotificationRequest.h>
#import <AssistantServices/AFSiriUserNotificationRequestCapabilityManager.h>
#import <AssistantServices/AFSiriNotificationRequest.h>
#import <AssistantServices/AFSettingsConnection.h>
#import <AssistantServices/AFSettingsConnectionServiceDelegate.h>
#import <AssistantServices/AFSiriActivationHandlerFrontendProcess.h>
#import <AssistantServices/STCity.h>
#import <AssistantServices/AFLinkedListItem.h>
#import <AssistantServices/AFServiceMediaPlaybackStateSnapshot.h>
#import <AssistantServices/STSettingChange.h>
#import <AssistantServices/AFSiriRequest.h>
#import <AssistantServices/AFSiriActivationHandlerCoreSpeechDaemon.h>
#import <AssistantServices/AFLocationSnapshot.h>
#import <AssistantServices/_AFLocationSnapshotMutation.h>
#import <AssistantServices/AFAudioDeviceInfo.h>
#import <AssistantServices/_AFAudioDeviceInfoMutation.h>
#import <AssistantServices/AFClockAlarmSnapshot.h>
#import <AssistantServices/_AFClockAlarmSnapshotMutation.h>
#import <AssistantServices/AFSpeechRequestOptions.h>
#import <AssistantServices/AFPluginBundle.h>
#import <AssistantServices/AFPluginManager.h>
#import <AssistantServices/SISchemaClientTurnBasedEvent.h>
#import <AssistantServices/AFContextResponse.h>
#import <AssistantServices/AFClockTimerSnapshot.h>
#import <AssistantServices/_AFClockTimerSnapshotMutation.h>
#import <AssistantServices/AFExperimentContext.h>
#import <AssistantServices/_AFExperimentContextMutation.h>
#import <AssistantServices/STSiriMessage.h>
#import <AssistantServices/AFDeviceCapabilities.h>
#import <AssistantServices/AFSiriTaskService.h>
#import <AssistantServices/AFSiriTaskDeliveryHandler.h>
#import <AssistantServices/AFSiriTaskmaster.h>
#import <AssistantServices/STAlarm.h>
#import <AssistantServices/AFTreeNodePropertyListSerialization.h>
#import <AssistantServices/AFDeleteAlarmRequest.h>
#import <AssistantServices/_AFAssertionRecord.h>
#import <AssistantServices/_AFAssertionProxy.h>
#import <AssistantServices/AFAssertionCoordinator.h>
#import <AssistantServices/AFDisambiguationStore.h>
#import <AssistantServices/AFUpdateMessageRequest.h>
#import <AssistantServices/STSiriLocation.h>
#import <AssistantServices/AFMemoryInfo.h>
#import <AssistantServices/_AFMemoryInfoMutation.h>
#import <AssistantServices/AFSiriActivationContext.h>
#import <AssistantServices/_AFSiriActivationContextMutation.h>
#import <AssistantServices/AFServiceDeviceContext.h>
#import <AssistantServices/AFAnalytics.h>
#import <AssistantServices/AFSiriActivationListener.h>
#import <AssistantServices/AFDeviceRingerSwitchObserver.h>
#import <AssistantServices/AFCreateMessageRequest.h>
#import <AssistantServices/AFUtteranceSuggestions.h>
#import <AssistantServices/STCall.h>
#import <AssistantServices/AFShowSettingRequest.h>
#import <AssistantServices/STSetting.h>
#import <AssistantServices/AFServiceContextSnapshot.h>
#import <AssistantServices/AFGetSettingsResponse.h>
#import <AssistantServices/AFClockTimerObserver.h>
#import <AssistantServices/AFUIApplicationSiriTaskDeliverer.h>
#import <AssistantServices/AFMyriadEmergencyManager.h>
#import <AssistantServices/AFBulletin.h>
#import <AssistantServices/AFDialogPhase.h>
#import <AssistantServices/AFCallSiteInfo.h>
#import <AssistantServices/_AFCallSiteInfoMutation.h>
#import <AssistantServices/AFAnalyticsTurnBasedInstrumentationContext.h>
#import <AssistantServices/AFMachServiceSiriTaskDeliverer.h>
#import <AssistantServices/AFInstrumentationObserverConnection.h>
#import <AssistantServices/AFShowNextEventRequest.h>
#import <AssistantServices/SISchemaClientTurnContext.h>
#import <AssistantServices/AFClockAlarmObserver.h>
#import <AssistantServices/AFObjectUpdatedSiriResponse.h>
#import <AssistantServices/AFSpeechAcousticFeature.h>
#import <AssistantServices/AFSpeechAudioAnalytics.h>
#import <AssistantServices/AFAggregator.h>
#import <AssistantServices/AFShowTimerRequest.h>
#import <AssistantServices/AFSiriTether.h>
#import <AssistantServices/AFAudioPlaybackRequest.h>
#import <AssistantServices/_AFAudioPlaybackRequestMutation.h>
#import <AssistantServices/AFBundleResource.h>
#import <AssistantServices/_AFBundleResourceMutation.h>
#import <AssistantServices/AFSiriResponse.h>
#import <AssistantServices/AFCreateAlarmRequest.h>
#import <AssistantServices/AFSearchAlarmsRequest.h>
#import <AssistantServices/AFInitiateCallRequest.h>
#import <AssistantServices/AFConversationItem.h>
#import <AssistantServices/AFApplicationContext.h>
#import <AssistantServices/_AFApplicationContextMutation.h>
#import <AssistantServices/AFMyriadCoordinator.h>
#import <AssistantServices/AFSharedConfidenceScore.h>
#import <AssistantServices/_AFSharedConfidenceScoreMutation.h>
#import <AssistantServices/AFAudioPowerUpdater.h>
#import <AssistantServices/AFNotifyStatePublisher.h>
#import <AssistantServices/STPersonContactHandle.h>
#import <AssistantServices/STPerson.h>
#import <AssistantServices/AFBluetoothWirelessSplitterSessionStateObserver.h>
#import <AssistantServices/AFAppContextAggregator.h>
#import <AssistantServices/AFClientPluginManager.h>
#import <AssistantServices/AFAnalyticsObserverConnection.h>
#import <AssistantServices/AFContextRequest.h>
#import <AssistantServices/AFSiriClientStateManager.h>
#import <AssistantServices/_AFSiriClientState.h>
#import <AssistantServices/AFSiriAcousticIDRequest.h>
#import <AssistantServices/AFSiriMusicSubscriptionLeaseTakenRequest.h>
#import <AssistantServices/AFSiriMusicSmartPlayRequest.h>
#import <AssistantServices/AFSiriAceRequest.h>
#import <AssistantServices/AFSiriActivationRequest.h>
#import <AssistantServices/AFSpeechSynthesisRecord.h>
#import <AssistantServices/_AFSpeechSynthesisRecordMutation.h>
#import <AssistantServices/AFMyriadEmergencyCallPunchout.h>
#import <AssistantServices/AFInterstitialConfiguration.h>
#import <AssistantServices/_AFInterstitialConfigurationMutation.h>
#import <AssistantServices/AFMultiUserConnection.h>
#import <AssistantServices/STSiriContext.h>
#import <AssistantServices/AFAnalyticsEvent.h>
#import <AssistantServices/AFSetSettingsResponse.h>
#import <AssistantServices/AFSiriActivationResult.h>
#import <AssistantServices/_AFSiriActivationResultMutation.h>
#import <AssistantServices/SISchemaClientAnyEvent.h>
#import <AssistantServices/AFConnectionEntitlementCache.h>
#import <AssistantServices/AFPairedBluetoothDevicesObserver.h>
#import <AssistantServices/AFConversationInsertion.h>
#import <AssistantServices/AFMediaPlaybackStateSnapshot.h>
#import <AssistantServices/_AFMediaPlaybackStateSnapshotMutation.h>
#import <AssistantServices/STSiriModelObject.h>
#import <AssistantServices/AFInterstitialCommandWrapper.h>
#import <AssistantServices/AFChildConversationItemList.h>
#import <AssistantServices/AFRequestCompletionOptions.h>
#import <AssistantServices/AFApplicationInfo.h>
#import <AssistantServices/AFClockAlarm.h>
#import <AssistantServices/_AFClockAlarmMutation.h>
#import <AssistantServices/AFPowerAssertionManager.h>
#import <AssistantServices/AFContextDonationService.h>
#import <AssistantServices/AFSyncSnapshot.h>
#import <AssistantServices/AFShowAlarmRequest.h>
#import <AssistantServices/AFPeerInfo.h>
#import <AssistantServices/_AFPeerInfoMutation.h>
#import <AssistantServices/AFClientInfo.h>
#import <AssistantServices/_AFClientInfoMutation.h>
#import <AssistantServices/AFSiriTask.h>
#import <AssistantServices/AFAccessibilityObserver.h>
