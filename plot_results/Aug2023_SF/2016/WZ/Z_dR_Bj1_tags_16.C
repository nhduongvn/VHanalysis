#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(-1.2,-0.1288255,6.8,1.15943);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetLeftMargin(0.15);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__205 = new TH1D("VbbHcc_tags_Z_dR_Bj1__205","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(1,0.5452932);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(2,0.9815278);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(3,0.8724691);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(4,0.7634105);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(5,0.3271759);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(6,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(7,0.2181173);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(8,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(9,0.2181173);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(11,0.3271759);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(14,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(15,0.2181173);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(17,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(24,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(1,0.2438625);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(2,0.3271759);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(3,0.3084644);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(4,0.288542);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(5,0.1888951);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(6,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(7,0.1542322);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(8,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(9,0.1542322);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(11,0.1888951);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(14,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(15,0.1542322);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(17,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(24,0.1090586);
   VbbHcc_tags_Z_dR_Bj1__205->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1__205->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__205->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
