#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-0.03174304,6.8,0.2856873);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__84 = new TH1D("VbbHcc_tags_H_dR__84","",30,0,6);
   VbbHcc_tags_H_dR__84->SetBinContent(5,0.1002972);
   VbbHcc_tags_H_dR__84->SetBinContent(6,0.1407098);
   VbbHcc_tags_H_dR__84->SetBinContent(9,0.1147185);
   VbbHcc_tags_H_dR__84->SetBinContent(12,0.1158269);
   VbbHcc_tags_H_dR__84->SetBinContent(13,0.1336153);
   VbbHcc_tags_H_dR__84->SetBinContent(15,0.2116831);
   VbbHcc_tags_H_dR__84->SetBinContent(16,0.2418517);
   VbbHcc_tags_H_dR__84->SetBinContent(18,0.1005479);
   VbbHcc_tags_H_dR__84->SetBinContent(20,0.09694687);
   VbbHcc_tags_H_dR__84->SetBinError(5,0.1002972);
   VbbHcc_tags_H_dR__84->SetBinError(6,0.1407098);
   VbbHcc_tags_H_dR__84->SetBinError(9,0.1147185);
   VbbHcc_tags_H_dR__84->SetBinError(12,0.1158269);
   VbbHcc_tags_H_dR__84->SetBinError(13,0.1336153);
   VbbHcc_tags_H_dR__84->SetBinError(15,0.1497156);
   VbbHcc_tags_H_dR__84->SetBinError(16,0.1719635);
   VbbHcc_tags_H_dR__84->SetBinError(18,0.1005479);
   VbbHcc_tags_H_dR__84->SetBinError(20,0.09694687);
   VbbHcc_tags_H_dR__84->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR__84->SetFillColor(ci);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__84->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__84->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__84->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__84->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__84->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__84->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__84->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
