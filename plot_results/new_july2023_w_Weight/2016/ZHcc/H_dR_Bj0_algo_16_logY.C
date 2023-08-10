void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Thu Aug 10 10:42:09 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.2,-3.18474,6.8,0.021948);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLogy();
   H_dR_Bj0_algo_16->SetLeftMargin(0.15);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.09846027);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.2652957);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.07111019);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.02461507);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.0355551);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.04102511);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.02735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.01367504);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(17,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01641004);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.0269367);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.01394586);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.00986121);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.01059264);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.008648853);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.006115663);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(17,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->Draw("HIST");
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
