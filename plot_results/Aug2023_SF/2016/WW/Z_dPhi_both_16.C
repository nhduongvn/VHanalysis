#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_both_16()
{
//=========Macro generated from canvas: Z_dPhi_both_16/Z_dPhi_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_both_16 = new TCanvas("Z_dPhi_both_16", "Z_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_16->SetHighLightColor(2);
   Z_dPhi_both_16->Range(-0.8,-0.01754544,4.533333,0.157909);
   Z_dPhi_both_16->SetFillColor(0);
   Z_dPhi_both_16->SetBorderMode(0);
   Z_dPhi_both_16->SetBorderSize(2);
   Z_dPhi_both_16->SetLeftMargin(0.15);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi__819 = new TH1D("VbbHcc_both_Z_dPhi__819","",120,0,4);
   VbbHcc_both_Z_dPhi__819->SetBinContent(0,0.597513);
   VbbHcc_both_Z_dPhi__819->SetBinContent(13,0.1080661);
   VbbHcc_both_Z_dPhi__819->SetBinContent(14,0.1336795);
   VbbHcc_both_Z_dPhi__819->SetBinContent(20,0.103617);
   VbbHcc_both_Z_dPhi__819->SetBinContent(26,0.09694687);
   VbbHcc_both_Z_dPhi__819->SetBinContent(50,0.1005479);
   VbbHcc_both_Z_dPhi__819->SetBinContent(58,0.1158269);
   VbbHcc_both_Z_dPhi__819->SetBinError(0,0.2693945);
   VbbHcc_both_Z_dPhi__819->SetBinError(13,0.1080661);
   VbbHcc_both_Z_dPhi__819->SetBinError(14,0.1336795);
   VbbHcc_both_Z_dPhi__819->SetBinError(20,0.103617);
   VbbHcc_both_Z_dPhi__819->SetBinError(26,0.09694687);
   VbbHcc_both_Z_dPhi__819->SetBinError(50,0.1005479);
   VbbHcc_both_Z_dPhi__819->SetBinError(58,0.1158269);
   VbbHcc_both_Z_dPhi__819->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dPhi__819->SetFillColor(ci);
   VbbHcc_both_Z_dPhi__819->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi__819->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi__819->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__819->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dPhi__819->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__819->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__819->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__819->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__819->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dPhi__819->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__819->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_16->Modified();
   Z_dPhi_both_16->cd();
   Z_dPhi_both_16->SetSelected(Z_dPhi_both_16);
}
