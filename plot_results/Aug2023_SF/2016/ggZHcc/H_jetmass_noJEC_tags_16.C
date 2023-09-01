#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-0.0007957564,340,0.007161808);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__285 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__285","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(3,0.001588173);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(4,0.003006837);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(5,0.005635617);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(6,0.006062906);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(7,0.005596716);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(8,0.001341175);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(9,0.005315152);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(10,0.0008842364);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(11,0.001858613);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(12,0.0004937979);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(13,0.001283814);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(14,0.0009563529);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(16,0.0002025324);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(18,0.0006662174);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(20,0.0003487364);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(28,0.0003315104);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinContent(61,0.000277623);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(3,0.0006508785);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(4,0.0009242065);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(5,0.001272161);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(6,0.001291534);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(7,0.001265577);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(8,0.0006006096);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(9,0.001259527);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(10,0.0005128603);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(11,0.0007634396);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(12,0.0003499109);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(13,0.0006496275);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(14,0.0005561494);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(16,0.0002025324);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(18,0.0004715556);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(20,0.0003487364);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(28,0.0003315104);
   VbbHcc_tags_H_jetmass_noJEC__285->SetBinError(61,0.000277623);
   VbbHcc_tags_H_jetmass_noJEC__285->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_noJEC__285->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC__285->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC__285->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC__285->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__285->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__285->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__285->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__285->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__285->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__285->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__285->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__285->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_16->Modified();
   H_jetmass_noJEC_tags_16->cd();
   H_jetmass_noJEC_tags_16->SetSelected(H_jetmass_noJEC_tags_16);
}
