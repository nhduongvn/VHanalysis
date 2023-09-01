#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_16/Z_jetmass_noJEC_tags_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_tags_16 = new TCanvas("Z_jetmass_noJEC_tags_16", "Z_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_16->Range(-60,-0.04052161,340,0.3646944);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__339 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__339","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinContent(3,0.1147185);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinContent(4,0.2494422);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinContent(5,0.308736);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinContent(6,0.1407098);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinContent(7,0.2342275);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinContent(15,0.1080661);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinContent(16,0.1002972);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinError(3,0.1147185);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinError(4,0.1768302);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinError(5,0.1784276);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinError(6,0.1407098);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinError(7,0.1672726);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinError(15,0.1080661);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetBinError(16,0.1002972);
   VbbHcc_tags_Z_jetmass_noJEC__339->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_jetmass_noJEC__339->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__339->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__339->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__339->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_16->Modified();
   Z_jetmass_noJEC_tags_16->cd();
   Z_jetmass_noJEC_tags_16->SetSelected(Z_jetmass_noJEC_tags_16);
}
