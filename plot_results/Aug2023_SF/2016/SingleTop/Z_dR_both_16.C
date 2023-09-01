#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-4.539182,6.8,40.85263);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__785 = new TH1D("VbbHcc_both_Z_dR__785","",30,0,6);
   VbbHcc_both_Z_dR__785->SetBinContent(3,29.32409);
   VbbHcc_both_Z_dR__785->SetBinContent(4,31.63313);
   VbbHcc_both_Z_dR__785->SetBinContent(5,28.3799);
   VbbHcc_both_Z_dR__785->SetBinContent(6,30.85888);
   VbbHcc_both_Z_dR__785->SetBinContent(7,34.58424);
   VbbHcc_both_Z_dR__785->SetBinContent(8,31.92204);
   VbbHcc_both_Z_dR__785->SetBinContent(9,33.45204);
   VbbHcc_both_Z_dR__785->SetBinContent(10,27.32103);
   VbbHcc_both_Z_dR__785->SetBinContent(11,34.05608);
   VbbHcc_both_Z_dR__785->SetBinContent(12,32.66459);
   VbbHcc_both_Z_dR__785->SetBinContent(13,34.42839);
   VbbHcc_both_Z_dR__785->SetBinContent(14,30.03443);
   VbbHcc_both_Z_dR__785->SetBinContent(15,30.78316);
   VbbHcc_both_Z_dR__785->SetBinContent(16,29.16472);
   VbbHcc_both_Z_dR__785->SetBinContent(17,24.32396);
   VbbHcc_both_Z_dR__785->SetBinContent(18,26.08421);
   VbbHcc_both_Z_dR__785->SetBinContent(19,20.29859);
   VbbHcc_both_Z_dR__785->SetBinContent(20,17.94184);
   VbbHcc_both_Z_dR__785->SetBinContent(21,16.63508);
   VbbHcc_both_Z_dR__785->SetBinContent(22,14.21262);
   VbbHcc_both_Z_dR__785->SetBinContent(23,12.84787);
   VbbHcc_both_Z_dR__785->SetBinContent(24,11.79316);
   VbbHcc_both_Z_dR__785->SetBinContent(25,9.193522);
   VbbHcc_both_Z_dR__785->SetBinContent(26,9.862707);
   VbbHcc_both_Z_dR__785->SetBinContent(27,5.072767);
   VbbHcc_both_Z_dR__785->SetBinContent(28,6.616901);
   VbbHcc_both_Z_dR__785->SetBinContent(29,3.440049);
   VbbHcc_both_Z_dR__785->SetBinContent(30,3.12618);
   VbbHcc_both_Z_dR__785->SetBinContent(31,3.295551);
   VbbHcc_both_Z_dR__785->SetBinError(3,2.181494);
   VbbHcc_both_Z_dR__785->SetBinError(4,2.214571);
   VbbHcc_both_Z_dR__785->SetBinError(5,2.113559);
   VbbHcc_both_Z_dR__785->SetBinError(6,2.155156);
   VbbHcc_both_Z_dR__785->SetBinError(7,2.313215);
   VbbHcc_both_Z_dR__785->SetBinError(8,2.153579);
   VbbHcc_both_Z_dR__785->SetBinError(9,2.321987);
   VbbHcc_both_Z_dR__785->SetBinError(10,2.031206);
   VbbHcc_both_Z_dR__785->SetBinError(11,2.385317);
   VbbHcc_both_Z_dR__785->SetBinError(12,2.356042);
   VbbHcc_both_Z_dR__785->SetBinError(13,2.36708);
   VbbHcc_both_Z_dR__785->SetBinError(14,2.180521);
   VbbHcc_both_Z_dR__785->SetBinError(15,2.171102);
   VbbHcc_both_Z_dR__785->SetBinError(16,2.092838);
   VbbHcc_both_Z_dR__785->SetBinError(17,1.910877);
   VbbHcc_both_Z_dR__785->SetBinError(18,2.048192);
   VbbHcc_both_Z_dR__785->SetBinError(19,1.730039);
   VbbHcc_both_Z_dR__785->SetBinError(20,1.634995);
   VbbHcc_both_Z_dR__785->SetBinError(21,1.661193);
   VbbHcc_both_Z_dR__785->SetBinError(22,1.541153);
   VbbHcc_both_Z_dR__785->SetBinError(23,1.375018);
   VbbHcc_both_Z_dR__785->SetBinError(24,1.399468);
   VbbHcc_both_Z_dR__785->SetBinError(25,1.199176);
   VbbHcc_both_Z_dR__785->SetBinError(26,1.235697);
   VbbHcc_both_Z_dR__785->SetBinError(27,0.8715331);
   VbbHcc_both_Z_dR__785->SetBinError(28,1.043498);
   VbbHcc_both_Z_dR__785->SetBinError(29,0.6386268);
   VbbHcc_both_Z_dR__785->SetBinError(30,0.7162484);
   VbbHcc_both_Z_dR__785->SetBinError(31,0.7347202);
   VbbHcc_both_Z_dR__785->SetEntries(9878);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR__785->SetFillColor(ci);
   VbbHcc_both_Z_dR__785->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__785->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__785->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__785->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__785->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__785->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__785->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__785->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__785->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__785->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__785->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
