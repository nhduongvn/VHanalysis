#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.207052,6.8,1.863468);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__808 = new TH1D("VbbHcc_both_H_dR__808","",30,0,6);
   VbbHcc_both_H_dR__808->SetBinContent(2,0.0003612191);
   VbbHcc_both_H_dR__808->SetBinContent(3,0.6496308);
   VbbHcc_both_H_dR__808->SetBinContent(4,1.342859);
   VbbHcc_both_H_dR__808->SetBinContent(5,1.577539);
   VbbHcc_both_H_dR__808->SetBinContent(6,1.520048);
   VbbHcc_both_H_dR__808->SetBinContent(7,1.183186);
   VbbHcc_both_H_dR__808->SetBinContent(8,0.8783783);
   VbbHcc_both_H_dR__808->SetBinContent(9,0.675993);
   VbbHcc_both_H_dR__808->SetBinContent(10,0.6062141);
   VbbHcc_both_H_dR__808->SetBinContent(11,0.6767153);
   VbbHcc_both_H_dR__808->SetBinContent(12,0.8344777);
   VbbHcc_both_H_dR__808->SetBinContent(13,0.9945035);
   VbbHcc_both_H_dR__808->SetBinContent(14,1.160946);
   VbbHcc_both_H_dR__808->SetBinContent(15,1.305924);
   VbbHcc_both_H_dR__808->SetBinContent(16,1.257457);
   VbbHcc_both_H_dR__808->SetBinContent(17,0.5174151);
   VbbHcc_both_H_dR__808->SetBinContent(18,0.2288186);
   VbbHcc_both_H_dR__808->SetBinContent(19,0.1124139);
   VbbHcc_both_H_dR__808->SetBinContent(20,0.059539);
   VbbHcc_both_H_dR__808->SetBinContent(21,0.03549152);
   VbbHcc_both_H_dR__808->SetBinContent(22,0.01646647);
   VbbHcc_both_H_dR__808->SetBinContent(23,0.007528825);
   VbbHcc_both_H_dR__808->SetBinContent(24,0.005564639);
   VbbHcc_both_H_dR__808->SetBinContent(25,0.002308878);
   VbbHcc_both_H_dR__808->SetBinContent(26,0.0005597261);
   VbbHcc_both_H_dR__808->SetBinContent(27,0.0003202341);
   VbbHcc_both_H_dR__808->SetBinError(2,0.0003612191);
   VbbHcc_both_H_dR__808->SetBinError(3,0.01500913);
   VbbHcc_both_H_dR__808->SetBinError(4,0.02116337);
   VbbHcc_both_H_dR__808->SetBinError(5,0.02268702);
   VbbHcc_both_H_dR__808->SetBinError(6,0.02212181);
   VbbHcc_both_H_dR__808->SetBinError(7,0.01940699);
   VbbHcc_both_H_dR__808->SetBinError(8,0.01678813);
   VbbHcc_both_H_dR__808->SetBinError(9,0.01489589);
   VbbHcc_both_H_dR__808->SetBinError(10,0.01408611);
   VbbHcc_both_H_dR__808->SetBinError(11,0.0148661);
   VbbHcc_both_H_dR__808->SetBinError(12,0.01649635);
   VbbHcc_both_H_dR__808->SetBinError(13,0.01800926);
   VbbHcc_both_H_dR__808->SetBinError(14,0.01943797);
   VbbHcc_both_H_dR__808->SetBinError(15,0.02063473);
   VbbHcc_both_H_dR__808->SetBinError(16,0.0201923);
   VbbHcc_both_H_dR__808->SetBinError(17,0.01301912);
   VbbHcc_both_H_dR__808->SetBinError(18,0.008655982);
   VbbHcc_both_H_dR__808->SetBinError(19,0.006167496);
   VbbHcc_both_H_dR__808->SetBinError(20,0.004458559);
   VbbHcc_both_H_dR__808->SetBinError(21,0.003444654);
   VbbHcc_both_H_dR__808->SetBinError(22,0.002342295);
   VbbHcc_both_H_dR__808->SetBinError(23,0.001562251);
   VbbHcc_both_H_dR__808->SetBinError(24,0.001346224);
   VbbHcc_both_H_dR__808->SetBinError(25,0.0008893615);
   VbbHcc_both_H_dR__808->SetBinError(26,0.0003958058);
   VbbHcc_both_H_dR__808->SetBinError(27,0.0003202341);
   VbbHcc_both_H_dR__808->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR__808->SetFillColor(ci);
   VbbHcc_both_H_dR__808->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__808->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__808->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__808->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__808->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__808->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__808->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__808->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__808->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__808->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__808->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
