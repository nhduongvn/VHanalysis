#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Fri Sep  1 13:23:29 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-0.01846816,453.3333,0.1662135);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__9 = new TH1D("VbbHcc_tags_Z_mass__9","",40,0,400);
   VbbHcc_tags_Z_mass__9->SetBinContent(7,0.1080661);
   VbbHcc_tags_Z_mass__9->SetBinContent(14,0.1336153);
   VbbHcc_tags_Z_mass__9->SetBinContent(15,0.1336795);
   VbbHcc_tags_Z_mass__9->SetBinContent(17,0.1407098);
   VbbHcc_tags_Z_mass__9->SetBinContent(20,0.1005479);
   VbbHcc_tags_Z_mass__9->SetBinContent(21,0.1002972);
   VbbHcc_tags_Z_mass__9->SetBinContent(24,0.1081721);
   VbbHcc_tags_Z_mass__9->SetBinContent(27,0.1158269);
   VbbHcc_tags_Z_mass__9->SetBinContent(33,0.09694687);
   VbbHcc_tags_Z_mass__9->SetBinContent(41,0.2183356);
   VbbHcc_tags_Z_mass__9->SetBinError(7,0.1080661);
   VbbHcc_tags_Z_mass__9->SetBinError(14,0.1336153);
   VbbHcc_tags_Z_mass__9->SetBinError(15,0.1336795);
   VbbHcc_tags_Z_mass__9->SetBinError(17,0.1407098);
   VbbHcc_tags_Z_mass__9->SetBinError(20,0.1005479);
   VbbHcc_tags_Z_mass__9->SetBinError(21,0.1002972);
   VbbHcc_tags_Z_mass__9->SetBinError(24,0.1081721);
   VbbHcc_tags_Z_mass__9->SetBinError(27,0.1158269);
   VbbHcc_tags_Z_mass__9->SetBinError(33,0.09694687);
   VbbHcc_tags_Z_mass__9->SetBinError(41,0.154586);
   VbbHcc_tags_Z_mass__9->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass__9->SetFillColor(ci);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_16->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->SetSelected(Z_mass_tags_16);
}
