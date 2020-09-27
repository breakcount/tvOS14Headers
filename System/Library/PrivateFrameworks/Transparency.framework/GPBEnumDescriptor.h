/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GPBEnumDescriptor : NSObject {

	NSString* name_;
	const char* valueNames_;
	const int* values_;
	/*function pointer*/void* enumVerifier_;
	const char* extraTextFormatInfo_;
	unsigned* nameOffsets_;
	unsigned valueCount_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) /*function pointer*/void* enumVerifier; 
@property (nonatomic,readonly) unsigned enumNameCount; 
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 extraTextFormatInfo:(const char*)arg6 ;
-(NSString *)name;
-(void)dealloc;
-(/*function pointer*/void*)enumVerifier;
-(id)initWithName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
-(id)getEnumNameForIndex:(unsigned)arg1 ;
-(void)calcValueNameOffsets;
-(id)getEnumTextFormatNameForIndex:(unsigned)arg1 ;
-(id)enumNameForValue:(int)arg1 ;
-(BOOL)getValue:(int*)arg1 forEnumName:(id)arg2 ;
-(BOOL)getValue:(int*)arg1 forEnumTextFormatName:(id)arg2 ;
-(id)textFormatNameForValue:(int)arg1 ;
-(unsigned)enumNameCount;
@end

