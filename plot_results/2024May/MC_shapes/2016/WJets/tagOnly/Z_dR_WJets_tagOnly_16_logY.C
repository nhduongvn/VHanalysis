#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WJets_tagOnly_16_logY()
{
//=========Macro generated from canvas: Z_dR_WJets_tagOnly_16/Z_dR_WJets_tagOnly_16
//=========  (Thu May 23 20:48:37 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WJets_tagOnly_16 = new TCanvas("Z_dR_WJets_tagOnly_16", "Z_dR_WJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WJets_tagOnly_16->SetHighLightColor(2);
   Z_dR_WJets_tagOnly_16->Range(-1.2,-1.017015,6.8,3.774914);
   Z_dR_WJets_tagOnly_16->SetFillColor(0);
   Z_dR_WJets_tagOnly_16->SetFillStyle(4000);
   Z_dR_WJets_tagOnly_16->SetBorderMode(0);
   Z_dR_WJets_tagOnly_16->SetBorderSize(2);
   Z_dR_WJets_tagOnly_16->SetLogy();
   Z_dR_WJets_tagOnly_16->SetLeftMargin(0.15);
   Z_dR_WJets_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_WJets_tagOnly_16->SetFrameBorderMode(0);
   Z_dR_WJets_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_WJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__850 = new TH1D("VH_tagOnly_Z_dR__850","",30,0,6);
   VH_tagOnly_Z_dR__850->SetBinContent(2,0.5797065);
   VH_tagOnly_Z_dR__850->SetBinContent(3,1042.732);
   VH_tagOnly_Z_dR__850->SetBinContent(4,933.2373);
   VH_tagOnly_Z_dR__850->SetBinContent(5,613.7786);
   VH_tagOnly_Z_dR__850->SetBinContent(6,530.0069);
   VH_tagOnly_Z_dR__850->SetBinContent(7,438.9782);
   VH_tagOnly_Z_dR__850->SetBinContent(8,394.7243);
   VH_tagOnly_Z_dR__850->SetBinContent(9,342.8188);
   VH_tagOnly_Z_dR__850->SetBinContent(10,366.372);
   VH_tagOnly_Z_dR__850->SetBinContent(11,352.7701);
   VH_tagOnly_Z_dR__850->SetBinContent(12,352.3361);
   VH_tagOnly_Z_dR__850->SetBinContent(13,384.8908);
   VH_tagOnly_Z_dR__850->SetBinContent(14,428.693);
   VH_tagOnly_Z_dR__850->SetBinContent(15,480.5693);
   VH_tagOnly_Z_dR__850->SetBinContent(16,490.5173);
   VH_tagOnly_Z_dR__850->SetBinContent(17,460.0576);
   VH_tagOnly_Z_dR__850->SetBinContent(18,415.3355);
   VH_tagOnly_Z_dR__850->SetBinContent(19,390.6869);
   VH_tagOnly_Z_dR__850->SetBinContent(20,319.2986);
   VH_tagOnly_Z_dR__850->SetBinContent(21,264.2177);
   VH_tagOnly_Z_dR__850->SetBinContent(22,216.3305);
   VH_tagOnly_Z_dR__850->SetBinContent(23,163.7693);
   VH_tagOnly_Z_dR__850->SetBinContent(24,141.6433);
   VH_tagOnly_Z_dR__850->SetBinContent(25,132.0305);
   VH_tagOnly_Z_dR__850->SetBinContent(26,114.3578);
   VH_tagOnly_Z_dR__850->SetBinContent(27,106.7238);
   VH_tagOnly_Z_dR__850->SetBinContent(28,87.20872);
   VH_tagOnly_Z_dR__850->SetBinContent(29,92.48657);
   VH_tagOnly_Z_dR__850->SetBinContent(30,59.13392);
   VH_tagOnly_Z_dR__850->SetBinContent(31,50.0197);
   VH_tagOnly_Z_dR__850->SetBinError(2,0.2375657);
   VH_tagOnly_Z_dR__850->SetBinError(3,29.3724);
   VH_tagOnly_Z_dR__850->SetBinError(4,28.77757);
   VH_tagOnly_Z_dR__850->SetBinError(5,19.59915);
   VH_tagOnly_Z_dR__850->SetBinError(6,23.17595);
   VH_tagOnly_Z_dR__850->SetBinError(7,22.54367);
   VH_tagOnly_Z_dR__850->SetBinError(8,19.36663);
   VH_tagOnly_Z_dR__850->SetBinError(9,16.57403);
   VH_tagOnly_Z_dR__850->SetBinError(10,21.78118);
   VH_tagOnly_Z_dR__850->SetBinError(11,18.72597);
   VH_tagOnly_Z_dR__850->SetBinError(12,18.18386);
   VH_tagOnly_Z_dR__850->SetBinError(13,20.16283);
   VH_tagOnly_Z_dR__850->SetBinError(14,20.17301);
   VH_tagOnly_Z_dR__850->SetBinError(15,23.53335);
   VH_tagOnly_Z_dR__850->SetBinError(16,24.27622);
   VH_tagOnly_Z_dR__850->SetBinError(17,20.36985);
   VH_tagOnly_Z_dR__850->SetBinError(18,19.67757);
   VH_tagOnly_Z_dR__850->SetBinError(19,21.43293);
   VH_tagOnly_Z_dR__850->SetBinError(20,17.65621);
   VH_tagOnly_Z_dR__850->SetBinError(21,13.93414);
   VH_tagOnly_Z_dR__850->SetBinError(22,12.40612);
   VH_tagOnly_Z_dR__850->SetBinError(23,12.04);
   VH_tagOnly_Z_dR__850->SetBinError(24,10.08705);
   VH_tagOnly_Z_dR__850->SetBinError(25,11.08978);
   VH_tagOnly_Z_dR__850->SetBinError(26,8.860884);
   VH_tagOnly_Z_dR__850->SetBinError(27,10.88115);
   VH_tagOnly_Z_dR__850->SetBinError(28,7.247115);
   VH_tagOnly_Z_dR__850->SetBinError(29,7.627454);
   VH_tagOnly_Z_dR__850->SetBinError(30,5.829195);
   VH_tagOnly_Z_dR__850->SetBinError(31,5.814898);
   VH_tagOnly_Z_dR__850->SetEntries(110079);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__850->SetLineColor(ci);
   VH_tagOnly_Z_dR__850->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__850->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__850->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__850->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__850->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__850->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__850->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__850->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__850->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__850->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__850->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__850->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__850->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__850->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__850->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WJets_tagOnly_16->Modified();
   Z_dR_WJets_tagOnly_16->cd();
   Z_dR_WJets_tagOnly_16->SetSelected(Z_dR_WJets_tagOnly_16);
}
