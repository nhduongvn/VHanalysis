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
   H_jetmass_noJEC_tags_16->Range(-60,-0.9345745,340,8.41117);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__281 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__281","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(2,0.2061981);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(3,0.4689316);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(4,5.282754);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(5,5.763642);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(6,7.120567);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(7,6.144386);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(8,1.590367);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(9,1.768348);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(10,2.64896);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(11,1.206231);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(12,0.9679173);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(13,0.6351801);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(14,0.5364662);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(15,0.9453527);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(19,0.2427023);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(20,0.3031301);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(21,0.5286419);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinContent(52,0.2876854);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(2,0.2061981);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(3,0.3316223);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(4,1.079654);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(5,1.115513);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(6,1.221285);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(7,1.160709);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(8,0.5736172);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(9,0.6194438);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(10,0.7747531);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(11,0.5476031);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(12,0.4850845);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(13,0.3728471);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(14,0.3804699);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(15,0.4775201);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(19,0.2427023);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(20,0.3031301);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(21,0.3738661);
   VbbHcc_tags_H_jetmass_noJEC__281->SetBinError(52,0.2876854);
   VbbHcc_tags_H_jetmass_noJEC__281->SetEntries(173);

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
