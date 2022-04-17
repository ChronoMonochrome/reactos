100 stub DwmpDxGetWindowSharedSurface
101 stub DwmpDxUpdateWindowSharedSurface
102 stdcall DwmEnableComposition(long)
103 stub -noname DwmpRestartComposition
104 stub -noname DwmpSetColorizationColor
105 stub -noname DwmpStartOrStopFlip3D
106 stub -noname DwmpIsCompositionCapable
107 stub -noname DwmpGetGlobalState
108 stub -noname DwmpEnableRedirection
109 stub -noname DwmpOpenGraphicsStream
110 stub -noname DwmpCloseGraphicsStream
112 stub -noname DwmpSetGraphicsStreamTransformHint
113 stub -noname DwmpActivateLivePreview
114 stub -noname DwmpQueryThumbnailType
115 stub -noname DwmpStartupViaUserInit
118 stub -noname DwmpGetAssessment
119 stub -noname DwmpGetAssessmentUsage
120 stub -noname DwmpSetAssessmentUsage
121 stub -noname DwmpIsSessionDWM
124 stub -noname DwmpRegisterThumbnail
125 stub DwmpDxBindSwapChain
126 stub DwmpDxUnbindSwapChain
127 stdcall -noname DwmpGetColorizationParameters(ptr)
128 stub DwmpDxgiIsThreadDesktopComposited
129 stub -noname DwmpDxgiDisableRedirection
130 stub -noname DwmpDxgiEnableRedirection
131 stub -noname DwmpSetColorizationParameters
132 stub -noname DwmpGetCompositionTimingInfoEx
133 stub DwmpDxUpdateWindowRedirectionBltSurface
134 stub -noname DwmpDxSetContentHostingInformation
135 stub DwmpRenderFlick
136 stub DwmpAllocateSecurityDescriptor
137 stub DwmpFreeSecurityDescriptor
138 stub UnknownNamedExport138
139 stub UnknownNamedExport139
140 stub UnknownNamedExport140
141 stub UnknownNamedExport141
142 stub UnknownNamedExport142
143 stub DwmpEnableDDASupport
144 stub UnknownNamedExport144
145 stub UnknownNamedExport145
146 stub UnknownNamedExport146
147 stub UnknownNamedExport147
148 stub UnknownNamedExport148
150 stub UnknownNamedExport150
151 stub UnknownNamedExport151
152 stub UnknownNamedExport152
153 stub UnknownNamedExport153
154 stub UnknownNamedExport154
155 stub UnknownNamedExport155
156 stub DwmTetherTextContact
157 stub UnknownNamedExport157
158 stub UnknownNamedExport158
159 stub UnknownNamedExport159
160 stub UnknownNamedExport160
161 stub UnknownNamedExport161
162 stub UnknownNamedExport162
163 stub UnknownNamedExport163
164 stub UnknownNamedExport164

# @ stdcall -private DllCanUnloadNow()
# @ stdcall -private DllGetClassObject(ptr ptr ptr)
@ stdcall DwmAttachMilContent(long)
@ stdcall DwmDefWindowProc(long long long long ptr)
@ stdcall DwmDetachMilContent(long)
@ stdcall DwmEnableBlurBehindWindow(ptr ptr)
@ stdcall DwmEnableMMCSS(long)
@ stdcall DwmExtendFrameIntoClientArea(long ptr)
@ stdcall DwmFlush()
@ stdcall DwmGetColorizationColor(ptr ptr)
@ stdcall DwmGetCompositionTimingInfo(long ptr)
@ stdcall DwmGetGraphicsStreamClient(long ptr)
@ stdcall DwmGetGraphicsStreamTransformHint(long ptr)
@ stdcall DwmGetTransportAttributes(ptr ptr ptr)
@ stdcall DwmGetWindowAttribute(ptr long ptr long)
@ stdcall DwmInvalidateIconicBitmaps(ptr)
@ stdcall DwmIsCompositionEnabled(ptr)
@ stub DwmModifyPreviousDxFrameDuration
@ stub DwmQueryThumbnailSourceSize
@ stdcall DwmRegisterThumbnail(long long ptr)
# @ stub DwmRenderGesture
@ stub DwmSetDxFrameDuration
@ stdcall DwmSetIconicLivePreviewBitmap(long long ptr long)
@ stdcall DwmSetIconicThumbnail(long long long)
@ stdcall DwmSetPresentParameters(ptr ptr)
@ stdcall DwmSetWindowAttribute(long long ptr long)
# @ stub DwmShowContact
# @ stub DwmTetherContact
# @ stub DwmTransitionOwnedWindow
@ stdcall DwmUnregisterThumbnail(long)
@ stdcall DwmUpdateThumbnailProperties(ptr ptr)
