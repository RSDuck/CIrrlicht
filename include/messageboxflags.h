/*
    CIrrlicht - C Bindings for Irrlicht Engine

    Copyright (C) 2014- Danyal Zia (catofdanyal@yahoo.com)

    This software is provided 'as-is', without any express or
    implied warranty. In no event will the authors be held
    liable for any damages arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute
    it freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented;
       you must not claim that you wrote the original software.
       If you use this software in a product, an acknowledgment
       in the product documentation would be appreciated but
       is not required.

    2. Altered source versions must be plainly marked as such,
       and must not be misrepresented as being the original software.

    3. This notice may not be removed or altered from any
       source distribution.
*/

#pragma once

//! enumeration for message box layout flags
enum EMESSAGE_BOX_FLAG
{
    //! Flag for the ok button
    EMBF_OK = 0x1,

    //! Flag for the cancel button
    EMBF_CANCEL = 0x2,

    //! Flag for the yes button
    EMBF_YES = 0x4,

    //! Flag for the no button
    EMBF_NO = 0x8,

    //! This value is not used. It only forces this enumeration to compile in 32 bit.
    EMBF_FORCE_32BIT = 0x7fffffff
};
