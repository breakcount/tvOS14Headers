/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSMutableDictionary;

@interface MFMessageFileWrapper : NSObject {

	NSString* _path;
	NSString* _filename;
	NSString* _preferredFilename;
	NSData* _data;
	NSMutableDictionary* _attributes;
	NSString* _linkDestination;
	NSString* _url;
	int _type;

}
-(id)description;
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)URL;
-(id)path;
-(unsigned long long)fileSize;
-(void)setPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)fileAttributes;
-(BOOL)isDirectory;
-(id)initRegularFileWithContents:(id)arg1 ;
-(id)preferredFilename;
-(void)setPreferredFilename:(id)arg1 ;
-(id)fileWrappers;
-(BOOL)isRegularFile;
-(BOOL)isSymbolicLink;
-(void)setFileAttributes:(id)arg1 ;
-(id)filename;
-(id)regularFileContents;
-(void)setFilename:(id)arg1 ;
-(BOOL)isPlaceholder;
-(id)messageID;
-(void)setCreator:(unsigned)arg1 ;
-(unsigned)creator;
-(id)mimeType;
-(void)setMessageID:(id)arg1 ;
-(void)setMimeType:(id)arg1 ;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(void)_isImage:(BOOL*)arg1 orPDFFile:(BOOL*)arg2 ;
-(void)setFileProtection:(id)arg1 ;
-(void)setFinderFlags:(unsigned short)arg1 ;
-(unsigned short)finderFlags;
-(id)inferredMimeType;
-(void)setEventUniqueID:(id)arg1 ;
-(id)eventUniqueID;
-(void)setMeetingStorePersistentID:(id)arg1 ;
-(id)meetingStorePersistentID;
-(void)setICSRepresentation:(id)arg1 ;
-(id)icsRepresentation;
-(id)fileProtection;
-(BOOL)isImageFile;
-(BOOL)isPDFFile;
-(BOOL)isUnzippableFile;
-(id)initSymbolicLinkWithDestination:(id)arg1 ;
-(id)symbolicLinkDestination;
@end

