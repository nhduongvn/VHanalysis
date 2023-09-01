#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_tags_16()
{
//=========Macro generated from canvas: H_dPhi_tags_16/H_dPhi_tags_16
//=========  (Fri Sep  1 13:23:32 2023) by ROOT version 6.28/04
   TCanvas *H_dPhi_tags_16 = new TCanvas("H_dPhi_tags_16", "H_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_16->SetHighLightColor(2);
   H_dPhi_tags_16->Range(-0.8,-0.01846816,4.533333,0.1662135);
   H_dPhi_tags_16->SetFillColor(0);
   H_dPhi_tags_16->SetBorderMode(0);
   H_dPhi_tags_16->SetBorderSize(2);
   H_dPhi_tags_16->SetLeftMargin(0.15);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi__114 = new TH1D("VbbHcc_tags_H_dPhi__114","",120,0,4);
   VbbHcc_tags_H_dPhi__114->SetBinContent(0,0.55375);
   VbbHcc_tags_H_dPhi__114->SetBinContent(5,0.1005479);
   VbbHcc_tags_H_dPhi__114->SetBinContent(8,0.1407098);
   VbbHcc_tags_H_dPhi__114->SetBinContent(11,0.103617);
   VbbHcc_tags_H_dPhi__114->SetBinContent(47,0.1336795);
   VbbHcc_tags_H_dPhi__114->SetBinContent(54,0.1158269);
   VbbHcc_tags_H_dPhi__114->SetBinContent(89,0.1080661);
   VbbHcc_tags_H_dPhi__114->SetBinError(0,0.2493448);
   VbbHcc_tags_H_dPhi__114->SetBinError(5,0.1005479);
   VbbHcc_tags_H_dPhi__114->SetBinError(8,0.1407098);
   VbbHcc_tags_H_dPhi__114->SetBinError(11,0.103617);
   VbbHcc_tags_H_dPhi__114->SetBinError(47,0.1336795);
   VbbHcc_tags_H_dPhi__114->SetBinError(54,0.1158269);
   VbbHcc_tags_H_dPhi__114->SetBinError(89,0.1080661);
   VbbHcc_tags_H_dPhi__114->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dPhi__114->SetFillColor(ci);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__114->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__114->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__114->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__114->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__114->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__114->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_16->Modified();
   H_dPhi_tags_16->cd();
   H_dPhi_tags_16->SetSelected(H_dPhi_tags_16);
}
