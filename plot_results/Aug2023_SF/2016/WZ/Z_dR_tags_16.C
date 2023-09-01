#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-0.09516836,6.8,0.8565152);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__70 = new TH1D("VbbHcc_tags_Z_dR__70","",30,0,6);
   VbbHcc_tags_Z_dR__70->SetBinContent(3,0.7250922);
   VbbHcc_tags_Z_dR__70->SetBinContent(4,0.6777315);
   VbbHcc_tags_Z_dR__70->SetBinContent(5,0.3790052);
   VbbHcc_tags_Z_dR__70->SetBinContent(6,0.2846724);
   VbbHcc_tags_Z_dR__70->SetBinContent(8,0.07500666);
   VbbHcc_tags_Z_dR__70->SetBinContent(9,0.06914471);
   VbbHcc_tags_Z_dR__70->SetBinContent(10,0.1759793);
   VbbHcc_tags_Z_dR__70->SetBinContent(11,0.2141358);
   VbbHcc_tags_Z_dR__70->SetBinContent(13,0.1481612);
   VbbHcc_tags_Z_dR__70->SetBinContent(14,0.1276455);
   VbbHcc_tags_Z_dR__70->SetBinContent(15,0.3725405);
   VbbHcc_tags_Z_dR__70->SetBinContent(16,0.4068626);
   VbbHcc_tags_Z_dR__70->SetBinContent(17,0.2828612);
   VbbHcc_tags_Z_dR__70->SetBinContent(18,0.1159892);
   VbbHcc_tags_Z_dR__70->SetBinContent(19,0.1902154);
   VbbHcc_tags_Z_dR__70->SetBinContent(21,0.1719326);
   VbbHcc_tags_Z_dR__70->SetBinContent(24,0.0792178);
   VbbHcc_tags_Z_dR__70->SetBinContent(29,0.09930289);
   VbbHcc_tags_Z_dR__70->SetBinError(3,0.2816515);
   VbbHcc_tags_Z_dR__70->SetBinError(4,0.2591882);
   VbbHcc_tags_Z_dR__70->SetBinError(5,0.1921976);
   VbbHcc_tags_Z_dR__70->SetBinError(6,0.1655961);
   VbbHcc_tags_Z_dR__70->SetBinError(8,0.07500666);
   VbbHcc_tags_Z_dR__70->SetBinError(9,0.06914471);
   VbbHcc_tags_Z_dR__70->SetBinError(10,0.1250177);
   VbbHcc_tags_Z_dR__70->SetBinError(11,0.1252054);
   VbbHcc_tags_Z_dR__70->SetBinError(13,0.1058631);
   VbbHcc_tags_Z_dR__70->SetBinError(14,0.1276455);
   VbbHcc_tags_Z_dR__70->SetBinError(15,0.2165842);
   VbbHcc_tags_Z_dR__70->SetBinError(16,0.2064721);
   VbbHcc_tags_Z_dR__70->SetBinError(17,0.1633164);
   VbbHcc_tags_Z_dR__70->SetBinError(18,0.1159892);
   VbbHcc_tags_Z_dR__70->SetBinError(19,0.1361357);
   VbbHcc_tags_Z_dR__70->SetBinError(21,0.1216094);
   VbbHcc_tags_Z_dR__70->SetBinError(24,0.0792178);
   VbbHcc_tags_Z_dR__70->SetBinError(29,0.09930289);
   VbbHcc_tags_Z_dR__70->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR__70->SetFillColor(ci);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__70->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__70->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__70->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__70->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__70->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__70->Draw("HIST");
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
