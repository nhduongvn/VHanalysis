#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.2,-0.2003953,6.8,1.803557);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__190 = new TH1D("VbbHcc_tags_Z_dR_Bj0__190","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(1,0.2181173);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(2,1.526821);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(3,0.9815278);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(4,0.2181173);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(5,0.2181173);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(6,0.3271759);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(7,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(8,0.3271759);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(9,0.3271759);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(11,0.3271759);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(13,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(17,0.2181173);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(20,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(1,0.1542322);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(2,0.4080601);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(3,0.3271759);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(4,0.1542322);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(5,0.1542322);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(6,0.1888951);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(7,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(8,0.1888951);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(9,0.1888951);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(11,0.1888951);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(13,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(17,0.1542322);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(20,0.1090586);
   VbbHcc_tags_Z_dR_Bj0__190->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0__190->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__190->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
