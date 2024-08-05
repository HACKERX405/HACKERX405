body {
      margin: 0;
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      background-color: #f0f0f0;
    }

    .loader-container {
      width: 50px;
      height: 50px;
      position: relative;
      animation: rotateLoader 1.5s linear infinite;
    }

    .loader {
      width: 100%;
      height: 100%;
      position: absolute;
      top: 0;
      left: 0;
      border-radius: 50%;
      overflow: hidden;
    }

    .loader::before, .loader::after {
      content: '';
      position: absolute;
      width: 100%;
      height: 100%;
      border-radius: 50%;
      border: 5px solid transparent;
      border-top-color: #f86b69;
      border-bottom-color: #e8f0a4;
      animation: pulse 1.5s cubic-bezier(0.645, 0.045, 0.355, 1) infinite;
    }

    .loader::before {
      animation-delay: 0.5s;
    }

    @keyframes rotateLoader {
      100% {
        transform: rotate(360deg);
      }
    }

    @keyframes pulse {
      0%, 100% {
        transform: scale(0.8);
        opacity: 0.3;
      }
      50% {
        transform: scale(1);
        opacity: 1;
      }
    }

    iframe {
      width: 100%;
      height: 100vh;
      display: none;
    }

    .loaded {
      display: block !important;
    }
