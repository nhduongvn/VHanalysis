#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_18/H_jetmass_noJEC_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_tags_18 = new TCanvas("H_jetmass_noJEC_tags_18", "H_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_18->SetHighLightColor(2);
   H_jetmass_noJEC_tags_18->Range(-60,-1.986839,340,17.88155);
   H_jetmass_noJEC_tags_18->SetFillColor(0);
   H_jetmass_noJEC_tags_18->SetBorderMode(0);
   H_jetmass_noJEC_tags_18->SetBorderSize(2);
   H_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__281 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__281","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(3,0.689876);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(4,8.020602);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(5,14.50756);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(6,15.13782);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(7,14.73464);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(8,9.54461);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(9,4.569738);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(10,4.954444);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(11,2.636038);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(12,2.322249);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(13,1.061548);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(14,0.4660045);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(15,1.528672);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(17,0.1795767);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(19,0.5737017);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(21,0.1913849);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(24,0.3088019);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(28,0.35777);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(29,0.2384906);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(3,0.4981714);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(4,1.79744);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(5,2.571231);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(6,2.554351);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(7,2.509114);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(8,1.946129);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(9,1.291276);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(10,1.419009);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(11,0.9108608);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(12,0.866216);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(13,0.6251878);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(14,0.4660045);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(15,0.8719406);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(17,0.1795767);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(19,0.4097048);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(21,0.1913849);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(24,0.3088019);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(28,0.35777);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(29,0.2384906);
   VbbHcc_tags_H_jetmass_noJEC__281->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_noJEC__281->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC__281->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC__281->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC__281->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__281->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__281->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__281->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__281->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__281->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__281->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__281->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__281->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_18->Modified();
   H_jetmass_noJEC_tags_18->cd();
   H_jetmass_noJEC_tags_18->SetSelected(H_jetmass_noJEC_tags_18);
}
