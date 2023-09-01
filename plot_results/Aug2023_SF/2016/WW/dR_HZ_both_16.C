#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_both_16()
{
//=========Macro generated from canvas: dR_HZ_both_16/dR_HZ_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *dR_HZ_both_16 = new TCanvas("dR_HZ_both_16", "dR_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_16->SetHighLightColor(2);
   dR_HZ_both_16->Range(-1.2,-0.02880202,6.8,0.2592182);
   dR_HZ_both_16->SetFillColor(0);
   dR_HZ_both_16->SetBorderMode(0);
   dR_HZ_both_16->SetBorderSize(2);
   dR_HZ_both_16->SetLeftMargin(0.15);
   dR_HZ_both_16->SetFrameBorderMode(0);
   dR_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ__864 = new TH1D("VbbHcc_both_dR_HZ__864","",60,0,6);
   VbbHcc_both_dR_HZ__864->SetBinContent(18,0.1336795);
   VbbHcc_both_dR_HZ__864->SetBinContent(20,0.1080661);
   VbbHcc_both_dR_HZ__864->SetBinContent(24,0.09694687);
   VbbHcc_both_dR_HZ__864->SetBinContent(28,0.1002972);
   VbbHcc_both_dR_HZ__864->SetBinContent(29,0.1147185);
   VbbHcc_both_dR_HZ__864->SetBinContent(32,0.1081721);
   VbbHcc_both_dR_HZ__864->SetBinContent(42,0.1005479);
   VbbHcc_both_dR_HZ__864->SetBinContent(45,0.1407098);
   VbbHcc_both_dR_HZ__864->SetBinContent(47,0.1336153);
   VbbHcc_both_dR_HZ__864->SetBinContent(60,0.2194439);
   VbbHcc_both_dR_HZ__864->SetBinError(18,0.1336795);
   VbbHcc_both_dR_HZ__864->SetBinError(20,0.1080661);
   VbbHcc_both_dR_HZ__864->SetBinError(24,0.09694687);
   VbbHcc_both_dR_HZ__864->SetBinError(28,0.1002972);
   VbbHcc_both_dR_HZ__864->SetBinError(29,0.1147185);
   VbbHcc_both_dR_HZ__864->SetBinError(32,0.1081721);
   VbbHcc_both_dR_HZ__864->SetBinError(42,0.1005479);
   VbbHcc_both_dR_HZ__864->SetBinError(45,0.1407098);
   VbbHcc_both_dR_HZ__864->SetBinError(47,0.1336153);
   VbbHcc_both_dR_HZ__864->SetBinError(60,0.1554103);
   VbbHcc_both_dR_HZ__864->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_dR_HZ__864->SetFillColor(ci);
   VbbHcc_both_dR_HZ__864->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ__864->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ__864->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__864->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__864->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__864->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__864->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__864->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__864->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__864->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__864->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_16->Modified();
   dR_HZ_both_16->cd();
   dR_HZ_both_16->SetSelected(dR_HZ_both_16);
}
