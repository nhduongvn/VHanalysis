#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-0.03352497,6.8,0.3017247);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__789 = new TH1D("VbbHcc_both_Z_dR__789","",30,0,6);
   VbbHcc_both_Z_dR__789->SetBinContent(3,0.1080661);
   VbbHcc_both_Z_dR__789->SetBinContent(7,0.1002972);
   VbbHcc_both_Z_dR__789->SetBinContent(10,0.09694687);
   VbbHcc_both_Z_dR__789->SetBinContent(11,0.1081721);
   VbbHcc_both_Z_dR__789->SetBinContent(12,0.2494422);
   VbbHcc_both_Z_dR__789->SetBinContent(13,0.1005479);
   VbbHcc_both_Z_dR__789->SetBinContent(22,0.2554283);
   VbbHcc_both_Z_dR__789->SetBinContent(25,0.103617);
   VbbHcc_both_Z_dR__789->SetBinContent(28,0.1336795);
   VbbHcc_both_Z_dR__789->SetBinError(3,0.1080661);
   VbbHcc_both_Z_dR__789->SetBinError(7,0.1002972);
   VbbHcc_both_Z_dR__789->SetBinError(10,0.09694687);
   VbbHcc_both_Z_dR__789->SetBinError(11,0.1081721);
   VbbHcc_both_Z_dR__789->SetBinError(12,0.1768302);
   VbbHcc_both_Z_dR__789->SetBinError(13,0.1005479);
   VbbHcc_both_Z_dR__789->SetBinError(22,0.1815478);
   VbbHcc_both_Z_dR__789->SetBinError(25,0.103617);
   VbbHcc_both_Z_dR__789->SetBinError(28,0.1336795);
   VbbHcc_both_Z_dR__789->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR__789->SetFillColor(ci);
   VbbHcc_both_Z_dR__789->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__789->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__789->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__789->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__789->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__789->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__789->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__789->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__789->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__789->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__789->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
