#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.2,-1.149154,6.8,10.34238);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLeftMargin(0.15);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1__896 = new TH1D("VbbHcc_both_H_dR_Bj1__896","",30,0,6);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(1,2.432072);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(2,8.755457);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(3,5.350557);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(4,5.350557);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(5,2.675279);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(6,3.161693);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(7,2.188864);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(8,1.70245);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(9,1.459243);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(10,1.216036);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(11,1.459243);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(12,0.9728286);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(13,0.9728286);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(14,1.459243);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(15,1.70245);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(16,0.9728286);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(17,0.2432072);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(18,0.2432072);
   VbbHcc_both_H_dR_Bj1__896->SetBinContent(20,0.2432072);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(1,0.7690885);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(2,1.459243);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(3,1.140743);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(4,1.140743);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(5,0.8066269);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(6,0.8768959);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(7,0.7296215);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(8,0.6434656);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(9,0.5957334);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(10,0.5438277);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(11,0.5957334);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(12,0.4864143);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(13,0.4864143);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(14,0.5957334);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(15,0.6434656);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(16,0.4864143);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(17,0.2432072);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(18,0.2432072);
   VbbHcc_both_H_dR_Bj1__896->SetBinError(20,0.2432072);
   VbbHcc_both_H_dR_Bj1__896->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1__896->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj1__896->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1__896->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1__896->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__896->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1__896->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__896->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__896->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__896->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__896->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1__896->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__896->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
