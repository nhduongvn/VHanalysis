#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Fri Sep  1 13:23:29 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(-80,-0.01846816,453.3333,0.1662135);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetLeftMargin(0.15);
   H_mass_tags_16->SetFrameBorderMode(0);
   H_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__24 = new TH1D("VbbHcc_tags_H_mass__24","",40,0,400);
   VbbHcc_tags_H_mass__24->SetBinContent(15,0.1002972);
   VbbHcc_tags_H_mass__24->SetBinContent(16,0.1158269);
   VbbHcc_tags_H_mass__24->SetBinContent(17,0.1081721);
   VbbHcc_tags_H_mass__24->SetBinContent(23,0.1407098);
   VbbHcc_tags_H_mass__24->SetBinContent(32,0.1336153);
   VbbHcc_tags_H_mass__24->SetBinContent(33,0.1147185);
   VbbHcc_tags_H_mass__24->SetBinContent(38,0.1336795);
   VbbHcc_tags_H_mass__24->SetBinContent(41,0.4091779);
   VbbHcc_tags_H_mass__24->SetBinError(15,0.1002972);
   VbbHcc_tags_H_mass__24->SetBinError(16,0.1158269);
   VbbHcc_tags_H_mass__24->SetBinError(17,0.1081721);
   VbbHcc_tags_H_mass__24->SetBinError(23,0.1407098);
   VbbHcc_tags_H_mass__24->SetBinError(32,0.1336153);
   VbbHcc_tags_H_mass__24->SetBinError(33,0.1147185);
   VbbHcc_tags_H_mass__24->SetBinError(38,0.1336795);
   VbbHcc_tags_H_mass__24->SetBinError(41,0.2047519);
   VbbHcc_tags_H_mass__24->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass__24->SetFillColor(ci);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass__24->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__24->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__24->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__24->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__24->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__24->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__24->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
