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
   Z_jetmass_noJEC_tags_16->Range(-60,-0.001054818,340,0.009493358);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__345 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__345","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(3,0.0003479732);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(4,0.00290464);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(5,0.005910579);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(6,0.008036705);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(7,0.00575369);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(8,0.002874245);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(9,0.003663668);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(10,0.0007857071);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(11,0.0007661531);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(12,0.002047141);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(14,0.0002765116);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(16,0.0005521187);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(21,0.0003336279);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(22,0.0006910061);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(24,0.0003370889);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(26,0.0002789308);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(33,0.0002902258);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(3,0.0003479732);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(4,0.0009281376);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(5,0.001308712);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(6,0.001531322);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(7,0.001273601);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(8,0.0008863683);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(9,0.001031085);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(10,0.0004536951);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(11,0.0004491892);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(12,0.0007814905);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(14,0.0002765116);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(16,0.0003912968);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(21,0.0003336279);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(22,0.0004886266);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(24,0.0003370889);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(26,0.0002789308);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(33,0.0002902258);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_noJEC__345->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->Draw("HIST");
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
