#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_tags_16()
{
//=========Macro generated from canvas: dR_HZ_tags_16/dR_HZ_tags_16
//=========  (Fri Sep  1 13:23:32 2023) by ROOT version 6.28/04
   TCanvas *dR_HZ_tags_16 = new TCanvas("dR_HZ_tags_16", "dR_HZ_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_16->SetHighLightColor(2);
   dR_HZ_tags_16->Range(-1.2,-0.01846816,6.8,0.1662135);
   dR_HZ_tags_16->SetFillColor(0);
   dR_HZ_tags_16->SetBorderMode(0);
   dR_HZ_tags_16->SetBorderSize(2);
   dR_HZ_tags_16->SetLeftMargin(0.15);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ__144 = new TH1D("VbbHcc_tags_dR_HZ__144","",60,0,6);
   VbbHcc_tags_dR_HZ__144->SetBinContent(11,0.1005479);
   VbbHcc_tags_dR_HZ__144->SetBinContent(16,0.1336153);
   VbbHcc_tags_dR_HZ__144->SetBinContent(30,0.1147185);
   VbbHcc_tags_dR_HZ__144->SetBinContent(33,0.103617);
   VbbHcc_tags_dR_HZ__144->SetBinContent(35,0.1002972);
   VbbHcc_tags_dR_HZ__144->SetBinContent(37,0.1080661);
   VbbHcc_tags_dR_HZ__144->SetBinContent(42,0.09694687);
   VbbHcc_tags_dR_HZ__144->SetBinContent(44,0.1407098);
   VbbHcc_tags_dR_HZ__144->SetBinContent(47,0.1081721);
   VbbHcc_tags_dR_HZ__144->SetBinContent(56,0.1158269);
   VbbHcc_tags_dR_HZ__144->SetBinContent(58,0.1336795);
   VbbHcc_tags_dR_HZ__144->SetBinError(11,0.1005479);
   VbbHcc_tags_dR_HZ__144->SetBinError(16,0.1336153);
   VbbHcc_tags_dR_HZ__144->SetBinError(30,0.1147185);
   VbbHcc_tags_dR_HZ__144->SetBinError(33,0.103617);
   VbbHcc_tags_dR_HZ__144->SetBinError(35,0.1002972);
   VbbHcc_tags_dR_HZ__144->SetBinError(37,0.1080661);
   VbbHcc_tags_dR_HZ__144->SetBinError(42,0.09694687);
   VbbHcc_tags_dR_HZ__144->SetBinError(44,0.1407098);
   VbbHcc_tags_dR_HZ__144->SetBinError(47,0.1081721);
   VbbHcc_tags_dR_HZ__144->SetBinError(56,0.1158269);
   VbbHcc_tags_dR_HZ__144->SetBinError(58,0.1336795);
   VbbHcc_tags_dR_HZ__144->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_dR_HZ__144->SetFillColor(ci);
   VbbHcc_tags_dR_HZ__144->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ__144->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ__144->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__144->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_dR_HZ__144->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__144->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__144->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__144->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__144->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_dR_HZ__144->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__144->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_16->Modified();
   dR_HZ_tags_16->cd();
   dR_HZ_tags_16->SetSelected(dR_HZ_tags_16);
}
