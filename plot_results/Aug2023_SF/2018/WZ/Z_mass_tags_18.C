#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_18()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Tue Sep  5 10:48:05 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-0.6068143,453.3333,5.461328);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__10 = new TH1D("VbbHcc_tags_Z_mass__10","",40,0,400);
   VbbHcc_tags_Z_mass__10->SetBinContent(6,0.5183212);
   VbbHcc_tags_Z_mass__10->SetBinContent(8,1.407858);
   VbbHcc_tags_Z_mass__10->SetBinContent(9,2.400326);
   VbbHcc_tags_Z_mass__10->SetBinContent(10,4.623346);
   VbbHcc_tags_Z_mass__10->SetBinContent(11,0.8776001);
   VbbHcc_tags_Z_mass__10->SetBinContent(12,0.5814054);
   VbbHcc_tags_Z_mass__10->SetBinContent(13,0.8259742);
   VbbHcc_tags_Z_mass__10->SetBinContent(15,1.301314);
   VbbHcc_tags_Z_mass__10->SetBinContent(16,2.21233);
   VbbHcc_tags_Z_mass__10->SetBinContent(22,0.9532567);
   VbbHcc_tags_Z_mass__10->SetBinContent(34,0.5004492);
   VbbHcc_tags_Z_mass__10->SetBinContent(39,0.3908613);
   VbbHcc_tags_Z_mass__10->SetBinContent(41,3.830982);
   VbbHcc_tags_Z_mass__10->SetBinError(6,0.5183212);
   VbbHcc_tags_Z_mass__10->SetBinError(8,0.9213162);
   VbbHcc_tags_Z_mass__10->SetBinError(9,1.2242);
   VbbHcc_tags_Z_mass__10->SetBinError(10,2.391612);
   VbbHcc_tags_Z_mass__10->SetBinError(11,0.8776001);
   VbbHcc_tags_Z_mass__10->SetBinError(12,0.5814054);
   VbbHcc_tags_Z_mass__10->SetBinError(13,0.8259742);
   VbbHcc_tags_Z_mass__10->SetBinError(15,0.921597);
   VbbHcc_tags_Z_mass__10->SetBinError(16,2.21233);
   VbbHcc_tags_Z_mass__10->SetBinError(22,0.9532567);
   VbbHcc_tags_Z_mass__10->SetBinError(34,0.5004492);
   VbbHcc_tags_Z_mass__10->SetBinError(39,0.3908613);
   VbbHcc_tags_Z_mass__10->SetBinError(41,1.977925);
   VbbHcc_tags_Z_mass__10->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass__10->SetFillColor(ci);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
