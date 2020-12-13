/*!--------------------------------------------------------
 * Copyright (C) Microsoft Corporation. All rights reserved.
 *--------------------------------------------------------*/
(function(){var e=["require","exports","vs/base/common/platform","vs/base/common/extpath","vs/base/common/strings","vs/base/common/network","vs/base/common/uri","vs/base/common/path","vs/base/common/resources","vs/base/common/types","vs/workbench/contrib/output/common/outputLinkComputer","vs/editor/common/core/range"],t=function(t){for(var r=[],i=0,n=t.length;i<n;i++)r[i]=e[t[i]];return r};define(e[3],t([0,1,2,4,7,9]),(function(e,t,r,i,n,o){"use strict";function s(e){return 47===e||92===e}Object.defineProperty(t,"__esModule",{value:!0}),t.parseLineAndColumnAware=t.indexOfPath=t.isRootOrDriveLetter=t.sanitizeFilePath=t.isWindowsDriveLetter=t.isEqualOrParent=t.isEqual=t.isValidBasename=t.isUNC=t.getRoot=t.toSlashes=t.isPathSeparator=void 0,t.isPathSeparator=s,t.toSlashes=function(e){return e.replace(/[\\/]/g,n.posix.sep)},t.getRoot=function(e,t=n.posix.sep){if(!e)return"";const r=e.length,i=e.charCodeAt(0);if(s(i)){if(s(e.charCodeAt(1))&&!s(e.charCodeAt(2))){let i=3;const n=i;for(;i<r&&!s(e.charCodeAt(i));i++);
if(n!==i&&!s(e.charCodeAt(i+1)))for(i+=1;i<r;i++)if(s(e.charCodeAt(i)))return e.slice(0,i+1).replace(/[\\/]/g,t)}return t}if(l(i)&&58===e.charCodeAt(1))return s(e.charCodeAt(2))?e.slice(0,2)+t:e.slice(0,2);let o=e.indexOf("://");if(-1!==o)for(o+=3;o<r;o++)if(s(e.charCodeAt(o)))return e.slice(0,o+1);return""},t.isUNC=function(e){if(!r.isWindows)return!1;if(!e||e.length<5)return!1;let t=e.charCodeAt(0);if(92!==t)return!1;if(92!==(t=e.charCodeAt(1)))return!1;let i=2;const n=i;for(;i<e.length&&92!==(t=e.charCodeAt(i));i++);return n!==i&&(t=e.charCodeAt(i+1),!isNaN(t)&&92!==t)};const a=/[\\/:\*\?"<>\|]/g,h=/[\\/]/g,c=/^(con|prn|aux|clock\$|nul|lpt[0-9]|com[0-9])(\.(.*?))?$/i;function l(e){return e>=65&&e<=90||e>=97&&e<=122}t.isValidBasename=function(e,t=r.isWindows){const i=t?a:h;return!(!e||0===e.length||/^\s+$/.test(e))&&(i.lastIndex=0,!i.test(e)&&((!t||!c.test(e))&&("."!==e&&".."!==e&&((!t||"."!==e[e.length-1])&&((!t||e.length===e.trim().length)&&!(e.length>255))))))},t.isEqual=function(e,t,r){const n=e===t
;return!r||n?n:!(!e||!t)&&i.equalsIgnoreCase(e,t)},t.isEqualOrParent=function(e,t,r,o=n.sep){if(e===t)return!0;if(!e||!t)return!1;if(t.length>e.length)return!1;if(r){if(!i.startsWithIgnoreCase(e,t))return!1;if(t.length===e.length)return!0;let r=t.length;return t.charAt(t.length-1)===o&&r--,e.charAt(r)===o}return t.charAt(t.length-1)!==o&&(t+=o),0===e.indexOf(t)},t.isWindowsDriveLetter=l,t.sanitizeFilePath=function(e,t){return r.isWindows&&e.endsWith(":")&&(e+=n.sep),n.isAbsolute(e)||(e=n.join(t,e)),e=n.normalize(e),r.isWindows?(e=i.rtrim(e,n.sep)).endsWith(":")&&(e+=n.sep):(e=i.rtrim(e,n.sep))||(e=n.sep),e},t.isRootOrDriveLetter=function(e){const t=n.normalize(e);return r.isWindows?!(e.length>3)&&(l(t.charCodeAt(0))&&58===t.charCodeAt(1)&&(2===e.length||92===t.charCodeAt(2))):t===n.posix.sep},t.indexOfPath=function(e,t,r){return t.length>e.length?-1:e===t?0:(r&&(e=e.toLowerCase(),t=t.toLowerCase()),e.indexOf(t))},t.parseLineAndColumnAware=function(e){const t=e.split(":");let r=void 0,i=void 0,n=void 0
;if(t.forEach(e=>{const t=Number(e);o.isNumber(t)?void 0===i?i=t:void 0===n&&(n=t):r=r?[r,e].join(":"):e}),!r)throw new Error("Format for `--goto` should be: `FILE:LINE(:COLUMN)`");return{path:r,line:void 0!==i?i:void 0,column:void 0!==n?n:void 0!==i?1:void 0}}})),define(e[5],t([0,1,6,2]),(function(e,t,r,i){"use strict";var n;Object.defineProperty(t,"__esModule",{value:!0}),t.FileAccess=t.RemoteAuthorities=t.Schemas=void 0,function(e){e.inMemory="inmemory",e.vscode="vscode",e.internal="private",e.walkThrough="walkThrough",e.walkThroughSnippet="walkThroughSnippet",e.http="http",e.https="https",e.file="file",e.mailto="mailto",e.untitled="untitled",e.data="data",e.command="command",e.vscodeRemote="vscode-remote",e.vscodeRemoteResource="vscode-remote-resource",e.userData="vscode-userdata",e.vscodeCustomEditor="vscode-custom-editor",e.vscodeNotebook="vscode-notebook",e.vscodeNotebookCell="vscode-notebook-cell",e.vscodeSettings="vscode-settings",e.webviewPanel="webview-panel",e.vscodeWebview="vscode-webview",
e.vscodeWebviewResource="vscode-webview-resource",e.extension="extension",e.vscodeFileResource="vscode-file"}(n=t.Schemas||(t.Schemas={}));t.RemoteAuthorities=new class{constructor(){this._hosts=Object.create(null),this._ports=Object.create(null),this._connectionTokens=Object.create(null),this._preferredWebSchema="http",this._delegate=null}setPreferredWebSchema(e){this._preferredWebSchema=e}setDelegate(e){this._delegate=e}set(e,t,r){this._hosts[e]=t,this._ports[e]=r}setConnectionToken(e,t){this._connectionTokens[e]=t}rewrite(e){if(this._delegate)return this._delegate(e);const t=e.authority;let o=this._hosts[t];o&&-1!==o.indexOf(":")&&(o=`[${o}]`);const s=this._ports[t],a=this._connectionTokens[t];let h=`path=${encodeURIComponent(e.path)}`;return"string"==typeof a&&(h+=`&tkn=${encodeURIComponent(a)}`),r.URI.from({scheme:i.isWeb?this._preferredWebSchema:n.vscodeRemoteResource,authority:`${o}:${s}`,path:"/vscode-remote-resource",query:h})}};t.FileAccess=new class{constructor(){
this.FALLBACK_AUTHORITY="vscode-app"}asBrowserUri(e,r){const o=this.toUri(e,r);return o.scheme===n.vscodeRemote?t.RemoteAuthorities.rewrite(o):i.isElectronSandboxed&&i.isNative&&o.scheme===n.file?this.toCodeFileUri(o):o}_asCodeFileUri(e,t){const r=this.toUri(e,t);return this.toCodeFileUri(r)}toCodeFileUri(e){return e.with({scheme:n.vscodeFileResource,authority:e.authority||this.FALLBACK_AUTHORITY,query:null,fragment:null})}asFileUri(e,t){const r=this.toUri(e,t);return r.scheme===n.vscodeFileResource?r.with({scheme:n.file,authority:r.authority!==this.FALLBACK_AUTHORITY?r.authority:null,query:null,fragment:null}):r}toUri(e,t){return r.URI.isUri(e)?e:r.URI.parse(t.toUrl(e))}}})),define(e[8],t([0,1,3,7,6,4,5,2]),(function(e,t,r,i,n,o,s,a){"use strict";function h(e){return n.uriToFsPath(e,!0)}Object.defineProperty(t,"__esModule",{value:!0}),
t.toLocalResource=t.DataUri=t.distinctParents=t.addTrailingPathSeparator=t.removeTrailingPathSeparator=t.hasTrailingPathSeparator=t.isEqualAuthority=t.isAbsolutePath=t.resolvePath=t.relativePath=t.normalizePath=t.joinPath=t.dirname=t.extname=t.basename=t.basenameOrAuthority=t.getComparisonKey=t.isEqualOrParent=t.isEqual=t.extUriIgnorePathCase=t.extUriBiasedIgnorePathCase=t.extUri=t.ExtUri=t.originalFSPath=void 0,t.originalFSPath=h;class c{constructor(e){this._ignorePathCasing=e}compare(e,t,r=!1){return e===t?0:o.compare(this.getComparisonKey(e,r),this.getComparisonKey(t,r))}isEqual(e,t,r=!1){return e===t||!(!e||!t)&&this.getComparisonKey(e,r)===this.getComparisonKey(t,r)}getComparisonKey(e,t=!1){return e.with({path:this._ignorePathCasing(e)?e.path.toLowerCase():void 0,fragment:t?null:void 0}).toString()}ignorePathCasing(e){return this._ignorePathCasing(e)}isEqualOrParent(e,i,n=!1){if(e.scheme===i.scheme){
if(e.scheme===s.Schemas.file)return r.isEqualOrParent(h(e),h(i),this._ignorePathCasing(e))&&e.query===i.query&&(n||e.fragment===i.fragment);if(t.isEqualAuthority(e.authority,i.authority))return r.isEqualOrParent(e.path,i.path,this._ignorePathCasing(e),"/")&&e.query===i.query&&(n||e.fragment===i.fragment)}return!1}joinPath(e,...t){return n.URI.joinPath(e,...t)}basenameOrAuthority(e){return t.basename(e)||e.authority}basename(e){return i.posix.basename(e.path)}extname(e){return i.posix.extname(e.path)}dirname(e){if(0===e.path.length)return e;let t;return e.scheme===s.Schemas.file?t=n.URI.file(i.dirname(h(e))).path:(t=i.posix.dirname(e.path),e.authority&&t.length&&47!==t.charCodeAt(0)&&(console.error(`dirname("${e.toString})) resulted in a relative path`),t="/")),e.with({path:t})}normalizePath(e){if(!e.path.length)return e;let t;return t=e.scheme===s.Schemas.file?n.URI.file(i.normalize(h(e))).path:i.posix.normalize(e.path),e.with({path:t})}relativePath(e,n){
if(e.scheme!==n.scheme||!t.isEqualAuthority(e.authority,n.authority))return;if(e.scheme===s.Schemas.file){const t=i.relative(h(e),h(n));return a.isWindows?r.toSlashes(t):t}let o=e.path||"/",c=n.path||"/";if(this._ignorePathCasing(e)){let e=0;for(const t=Math.min(o.length,c.length);e<t&&(o.charCodeAt(e)===c.charCodeAt(e)||o.charAt(e).toLowerCase()===c.charAt(e).toLowerCase());e++);o=c.substr(0,e)+o.substr(e)}return i.posix.relative(o,c)}resolvePath(e,t){if(e.scheme===s.Schemas.file){const r=n.URI.file(i.resolve(h(e),t));return e.with({authority:r.authority,path:r.path})}return-1===t.indexOf("/")&&(t=r.toSlashes(t),/^[a-zA-Z]:(\/|$)/.test(t)&&(t="/"+t)),e.with({path:i.posix.resolve(e.path,t)})}isAbsolutePath(e){return!!e.path&&"/"===e.path[0]}isEqualAuthority(e,t){return e===t||o.equalsIgnoreCase(e,t)}hasTrailingPathSeparator(e,t=i.sep){if(e.scheme===s.Schemas.file){const i=h(e);return i.length>r.getRoot(i).length&&i[i.length-1]===t}{const t=e.path
;return t.length>1&&47===t.charCodeAt(t.length-1)&&!/^[a-zA-Z]:(\/$|\\$)/.test(e.fsPath)}}removeTrailingPathSeparator(e,r=i.sep){return t.hasTrailingPathSeparator(e,r)?e.with({path:e.path.substr(0,e.path.length-1)}):e}addTrailingPathSeparator(e,n=i.sep){let o=!1;if(e.scheme===s.Schemas.file){const t=h(e);o=void 0!==t&&t.length===r.getRoot(t).length&&t[t.length-1]===n}else{n="/";const t=e.path;o=1===t.length&&47===t.charCodeAt(t.length-1)}return o||t.hasTrailingPathSeparator(e,n)?e:e.with({path:e.path+"/"})}}t.ExtUri=c,t.extUri=new c(()=>!1),t.extUriBiasedIgnorePathCase=new c(e=>e.scheme!==s.Schemas.file||!a.isLinux),t.extUriIgnorePathCase=new c(e=>!0),t.isEqual=t.extUri.isEqual.bind(t.extUri),t.isEqualOrParent=t.extUri.isEqualOrParent.bind(t.extUri),t.getComparisonKey=t.extUri.getComparisonKey.bind(t.extUri),t.basenameOrAuthority=t.extUri.basenameOrAuthority.bind(t.extUri),t.basename=t.extUri.basename.bind(t.extUri),t.extname=t.extUri.extname.bind(t.extUri),t.dirname=t.extUri.dirname.bind(t.extUri),
t.joinPath=t.extUri.joinPath.bind(t.extUri),t.normalizePath=t.extUri.normalizePath.bind(t.extUri),t.relativePath=t.extUri.relativePath.bind(t.extUri),t.resolvePath=t.extUri.resolvePath.bind(t.extUri),t.isAbsolutePath=t.extUri.isAbsolutePath.bind(t.extUri),t.isEqualAuthority=t.extUri.isEqualAuthority.bind(t.extUri),t.hasTrailingPathSeparator=t.extUri.hasTrailingPathSeparator.bind(t.extUri),t.removeTrailingPathSeparator=t.extUri.removeTrailingPathSeparator.bind(t.extUri),t.addTrailingPathSeparator=t.extUri.addTrailingPathSeparator.bind(t.extUri),t.distinctParents=function(e,r){const i=[];for(let n=0;n<e.length;n++){const o=r(e[n]);e.some((e,i)=>i!==n&&t.isEqualOrParent(o,r(e)))||i.push(e[n])}return i},function(e){e.META_DATA_LABEL="label",e.META_DATA_DESCRIPTION="description",e.META_DATA_SIZE="size",e.META_DATA_MIME="mime",e.parseMetaData=function(t){const r=new Map;t.path.substring(t.path.indexOf(";")+1,t.path.lastIndexOf(";")).split(";").forEach(e=>{const[t,i]=e.split(":");t&&i&&r.set(t,i)})
;const i=t.path.substring(0,t.path.indexOf(";"));return i&&r.set(e.META_DATA_MIME,i),r}}(t.DataUri||(t.DataUri={})),t.toLocalResource=function(e,t,r){if(t){let n=e.path;return n&&n[0]!==i.posix.sep&&(n=i.posix.sep+n),e.with({scheme:r,authority:t,path:n})}return e.with({scheme:r})}})),define(e[10],t([0,1,6,3,8,4,11,2,5]),(function(e,t,r,i,n,o,s,a,h){"use strict";Object.defineProperty(t,"__esModule",{value:!0}),t.create=t.OutputLinkComputer=void 0;class c{constructor(e,t){this.ctx=e,this.patterns=new Map,this.computePatterns(t)}computePatterns(e){const t=e.workspaceFolders.sort((e,t)=>t.length-e.length).map(e=>r.URI.parse(e));for(const e of t){const t=c.createPatterns(e);this.patterns.set(e,t)}}getModel(e){return this.ctx.getMirrorModels().find(t=>t.uri.toString()===e)}computeLinks(e){const t=this.getModel(e);if(!t)return[];const r=[],i=o.splitLines(t.getValue());for(const[e,t]of this.patterns){const o={toResource:t=>"string"==typeof t?n.joinPath(e,t):null}
;for(let e=0,n=i.length;e<n;e++)r.push(...c.detectLinks(i[e],e+1,t,o))}return r}static createPatterns(e){const t=[],r=e.scheme===h.Schemas.file?e.fsPath:e.path,n=[r];a.isWindows&&e.scheme===h.Schemas.file&&n.push(i.toSlashes(r));for(const e of n){const r='[^\\s\\(\\):<>"]',i=`${`(?:${r}| ${r})`}+\\.${r}+`,n=`${r}+`;t.push(new RegExp(o.escapeRegExpCharacters(e)+`(${i}) on line ((\\d+)(, column (\\d+))?)`,"gi")),t.push(new RegExp(o.escapeRegExpCharacters(e)+`(${i}):line ((\\d+)(, column (\\d+))?)`,"gi")),t.push(new RegExp(o.escapeRegExpCharacters(e)+`(${i})(\\s?\\((\\d+)(,(\\d+))?)\\)`,"gi")),t.push(new RegExp(o.escapeRegExpCharacters(e)+`(${n})(:(\\d+))?(:(\\d+))?`,"gi"))}return t}static detectLinks(e,t,r,i){const n=[];return r.forEach(r=>{let a;r.lastIndex=0;let h=0;for(;null!==(a=r.exec(e));){const r=o.rtrim(a[1],".").replace(/\\/g,"/");let c;try{const e=i.toResource(r);e&&(c=e.toString())}catch(e){continue}if(a[3]){const e=a[3];if(a[5]){const t=a[5];c=o.format("{0}#{1},{2}",c,e,t)
}else c=o.format("{0}#{1}",c,e)}const l=o.rtrim(a[0],"."),u=e.indexOf(l,h);h=u+l.length;const d={startColumn:u+1,startLineNumber:t,endColumn:u+1+l.length,endLineNumber:t};if(n.some(e=>s.Range.areIntersectingOrTouching(e.range,d)))return;n.push({range:d,url:c})}}),n}}t.OutputLinkComputer=c,t.create=function(e,t){return new c(e,t)}}))}).call(this);
//# sourceMappingURL=https://ticino.blob.core.windows.net/sourcemaps/940b5f4bb5fa47866a54529ed759d95d09ee80be/core/vs/workbench/contrib/output/common/outputLinkComputer.js.map
