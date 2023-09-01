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
   Z_jetmass_noJEC_tags_16->Range(-60,-1.129564,340,10.16607);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__341 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__341","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(3,0.1549685);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(4,2.523607);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(5,8.606199);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(6,7.443106);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(7,5.623621);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(8,4.845054);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(9,2.047189);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(10,1.524549);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(11,1.719616);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(12,0.6377785);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(13,0.3723625);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(15,0.4593686);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(16,0.2516465);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(17,0.2001095);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(20,0.2382862);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(3,0.1549685);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(4,0.7422308);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(5,1.392281);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(6,1.294439);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(7,1.0949);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(8,1.020088);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(9,0.6937285);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(10,0.5825074);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(11,0.6578044);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(12,0.3348801);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(13,0.2636414);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(15,0.3334417);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(16,0.2516465);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(17,0.2001095);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(20,0.2382862);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_noJEC__341->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->Draw("HIST");
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
