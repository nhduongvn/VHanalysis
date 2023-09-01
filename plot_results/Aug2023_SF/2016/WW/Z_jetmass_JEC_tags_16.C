#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-0.0477961,340,0.4301649);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__354 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__354","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(4,0.3641607);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(5,0.308736);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(6,0.2412578);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(7,0.1336795);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(15,0.1080661);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(16,0.1002972);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(4,0.2107825);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(5,0.1784276);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(6,0.1729426);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(7,0.1336795);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(15,0.1080661);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(16,0.1002972);
   VbbHcc_tags_Z_jetmass_JEC__354->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_jetmass_JEC__354->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__354->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_16->Modified();
   Z_jetmass_JEC_tags_16->cd();
   Z_jetmass_JEC_tags_16->SetSelected(Z_jetmass_JEC_tags_16);
}
