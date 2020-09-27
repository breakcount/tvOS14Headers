/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned fmipRecovery : 1;
	unsigned idmsRecovery : 1;
} SCD_Struct_OT1;

typedef struct {
	unsigned devicePlatform : 1;
	unsigned secureBackupMetadataTimestamp : 1;
	unsigned secureBackupNumericPassphraseLength : 1;
	unsigned secureBackupUsesComplexPassphrase : 1;
	unsigned secureBackupUsesNumericPassphrase : 1;
} SCD_Struct_OT2;

typedef struct {
	unsigned coolOffEnd : 1;
	unsigned creationDate : 1;
	unsigned remainingAttempts : 1;
	unsigned silentAttemptAllowed : 1;
	unsigned recordStatus : 1;
	unsigned recordViability : 1;
	unsigned recoveryStatus : 1;
	unsigned viabilityStatus : 1;
} SCD_Struct_OT3;
