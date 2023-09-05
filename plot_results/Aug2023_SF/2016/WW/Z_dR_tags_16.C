#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-0.0327393,6.8,0.2946536);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__69 = new TH1D("VbbHcc_tags_Z_dR__69","",30,0,6);
   VbbHcc_tags_Z_dR__69->SetBinContent(3,0.1080661);
   VbbHcc_tags_Z_dR__69->SetBinContent(7,0.1002972);
   VbbHcc_tags_Z_dR__69->SetBinContent(11,0.2418517);
   VbbHcc_tags_Z_dR__69->SetBinContent(12,0.2494422);
   VbbHcc_tags_Z_dR__69->SetBinContent(13,0.1005479);
   VbbHcc_tags_Z_dR__69->SetBinContent(14,0.1407098);
   VbbHcc_tags_Z_dR__69->SetBinContent(21,0.09694687);
   VbbHcc_tags_Z_dR__69->SetBinContent(22,0.1147185);
   VbbHcc_tags_Z_dR__69->SetBinContent(25,0.103617);
   VbbHcc_tags_Z_dR__69->SetBinError(3,0.1080661);
   VbbHcc_tags_Z_dR__69->SetBinError(7,0.1002972);
   VbbHcc_tags_Z_dR__69->SetBinError(11,0.1719635);
   VbbHcc_tags_Z_dR__69->SetBinError(12,0.1768302);
   VbbHcc_tags_Z_dR__69->SetBinError(13,0.1005479);
   VbbHcc_tags_Z_dR__69->SetBinError(14,0.1407098);
   VbbHcc_tags_Z_dR__69->SetBinError(21,0.09694687);
   VbbHcc_tags_Z_dR__69->SetBinError(22,0.1147185);
   VbbHcc_tags_Z_dR__69->SetBinError(25,0.103617);
   VbbHcc_tags_Z_dR__69->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR__69->SetFillColor(ci);
   VbbHcc_tags_Z_dR__69->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__69->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__69->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__69->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__69->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__69->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__69->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__69->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__69->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__69->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__69->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
