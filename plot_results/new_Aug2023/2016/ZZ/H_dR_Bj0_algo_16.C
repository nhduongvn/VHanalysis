void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Tue Aug 22 09:21:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.2,-5.377789,6.8,48.40009);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,20.75287);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,40.97362);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,27.13837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,17.82619);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,12.771);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,8.247937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,5.853375);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,4.523062);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,3.990937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,3.990937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.926687);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.862437);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,2.660625);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,2.394562);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,1.330312);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,2.1285);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2660625);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.3498);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,3.301749);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.6871);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,2.177815);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.843335);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.481373);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,1.247944);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,1.097004);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,1.030456);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,1.030456);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8824295);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.7039352);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.8413635);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.5949338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.7525384);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.4608338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.4608338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.4608338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2660625);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(609);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->Draw("HIST");
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
