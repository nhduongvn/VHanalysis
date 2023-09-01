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
   Z_jetmass_noJEC_tags_16->Range(-60,-0.0978178,340,0.8803601);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__340 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__340","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(3,0.06727392);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(4,0.4384478);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(5,0.6733597);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(6,0.7432586);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(7,0.7452784);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(8,0.4966272);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(9,0.3182918);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(10,0.3168033);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(13,0.167855);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(14,0.09546661);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(17,0.1733041);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(18,0.3595302);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(3,0.06727392);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(4,0.1981138);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(5,0.2603519);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(6,0.267342);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(7,0.2698281);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(8,0.2264089);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(9,0.1839548);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(10,0.1889054);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(13,0.1190268);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(14,0.09546661);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(17,0.1269051);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(18,0.2078364);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetmass_noJEC__340->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->Draw("HIST");
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
