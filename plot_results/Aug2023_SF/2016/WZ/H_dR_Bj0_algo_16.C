#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.2,-3.73594,6.8,33.62346);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0__520 = new TH1D("VbbHcc_algo_H_dR_Bj0__520","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(1,18.86714);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(2,28.4643);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(3,19.84867);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(4,14.83197);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(5,8.506574);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(6,6.979753);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(7,4.144228);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(8,4.144228);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(9,3.489876);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(10,3.817052);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(11,3.053642);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(12,2.835525);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(13,1.63588);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(14,1.308704);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(15,0.8724691);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(16,1.199645);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(17,0.7634105);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(18,0.2181173);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(19,0.7634105);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(20,0.3271759);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(22,0.1090586);
   VbbHcc_algo_H_dR_Bj0__520->SetBinContent(23,0.2181173);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(1,1.434442);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(2,1.761896);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(3,1.471281);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(4,1.271831);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(5,0.9631798);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(6,0.8724691);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(7,0.6722826);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(8,0.6722826);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(9,0.6169288);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(10,0.6451996);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(11,0.5770841);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(12,0.5560921);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(13,0.4223823);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(14,0.3777902);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(15,0.3084644);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(16,0.3617066);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(17,0.288542);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(18,0.1542322);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(19,0.288542);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(20,0.1888951);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(22,0.1090586);
   VbbHcc_algo_H_dR_Bj0__520->SetBinError(23,0.1542322);
   VbbHcc_algo_H_dR_Bj0__520->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0__520->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0__520->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0__520->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0__520->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__520->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0__520->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__520->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__520->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__520->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__520->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0__520->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__520->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
