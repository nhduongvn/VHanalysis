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
   H_jetmass_noJEC_tags_16->Range(-60,-0.1441874,340,1.297686);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__280 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__280","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(4,0.33743);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(5,1.09857);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(6,0.4911459);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(7,0.922029);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(8,0.08004759);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(9,0.09546661);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(10,0.3981221);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(11,0.2695919);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(12,0.07761386);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(13,0.1698691);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(14,0.103603);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(15,0.109159);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(16,0.07887516);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinContent(17,0.3639731);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(4,0.1716277);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(5,0.3220592);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(6,0.2265385);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(7,0.3146829);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(8,0.08004759);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(9,0.09546661);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(10,0.2023928);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(11,0.1561818);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(12,0.07761386);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(13,0.1252263);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(14,0.103603);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(15,0.109159);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(16,0.07887516);
   VbbHcc_tags_H_jetmass_noJEC__280->SetBinError(17,0.210305);
   VbbHcc_tags_H_jetmass_noJEC__280->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_noJEC__280->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__280->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__280->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__280->Draw("HIST");
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
