/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString, GMMDocumentInfo;



@interface GMMKmlInfo : PBCodable 
{
    NSMutableArray *_folderNames;
    NSString *_snippet;
    NSString *_description;
    GMMDocumentInfo *_sourceDocument;
    NSString *_kmlId;
    BOOL _isUserCreated;
    BOOL _hasIsUserCreated;
}

@property(readonly) NSInteger folderNamesCount;
@property(readonly) BOOL hasSnippet;
@property(readonly) BOOL hasDescription;
@property(readonly) BOOL hasSourceDocument;
@property(readonly) BOOL hasKmlId;
@property(readonly) BOOL hasIsUserCreated; /* unknown property attribute: V_hasIsUserCreated */
@property BOOL isUserCreated; /* unknown property attribute: V_isUserCreated */
@property(retain) NSString *kmlId; /* unknown property attribute: V_kmlId */
@property(retain) GMMDocumentInfo *sourceDocument; /* unknown property attribute: V_sourceDocument */
@property(retain) NSString *description; /* unknown property attribute: V_description */
@property(retain) NSString *snippet; /* unknown property attribute: V_snippet */
@property(retain) NSMutableArray *folderNames; /* unknown property attribute: V_folderNames */


- (id)init;
- (void)dealloc;
- (NSInteger)folderNamesCount;
- (void)setFolderName:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)folderNameAtIndex:(NSUInteger)arg1;
- (void)addFolderName:(id)arg1;
- (BOOL)hasSnippet;
- (BOOL)hasDescription;
- (BOOL)hasSourceDocument;
- (BOOL)hasKmlId;
- (void)setIsUserCreated:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (BOOL)hasIsUserCreated;
- (BOOL)isUserCreated;
- (id)kmlId;
- (void)setKmlId:(id)arg1;
- (id)sourceDocument;
- (void)setSourceDocument:(id)arg1;
- (void)setDescription:(id)arg1;
- (id)snippet;
- (void)setSnippet:(id)arg1;
- (id)folderNames;
- (void)setFolderNames:(id)arg1;

@end