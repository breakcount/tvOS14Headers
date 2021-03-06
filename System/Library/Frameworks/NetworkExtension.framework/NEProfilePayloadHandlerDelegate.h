/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEProfilePayloadHandlerDelegate
@required
-(BOOL)setSMBDomains:(id)arg1;
-(BOOL)setMailDomains:(id)arg1;
-(BOOL)setCalendarDomains:(id)arg1;
-(BOOL)setContactsDomains:(id)arg1;
-(BOOL)setExcludedDomains:(id)arg1;
-(BOOL)setAssociatedDomains:(id)arg1;
-(BOOL)setCertificates:(id)arg1;
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
-(BOOL)setMailDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setCalendarDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setContactsDomains:(id)arg1 accountIdentifiers:(id)arg2;
-(BOOL)setRestrictDomains:(BOOL)arg1;
-(id)getCertificates;
-(id)getPendingCertificateUUIDs:(id)arg1;
-(id)getPendingCertificateInfo:(id)arg1;
-(id)getConfigurationIdentifier;
-(BOOL)setPayloadInfoIdentity:(id)arg1;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
-(BOOL)setProfileInfo:(id)arg1;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;

@end

