void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Aug  3 12:24:42 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.2,-3.76558,6.8,33.89021);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLeftMargin(0.15);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,14.52216);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,28.69013);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,10.98017);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,9.209177);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,5.667186);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,3.89619);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,2.833593);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,2.479394);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,1.770996);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,1.416796);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,2.479394);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,1.770996);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(17,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,2.267981);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,3.187792);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.972097);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.806068);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,1.416796);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,1.174746);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,1.001826);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.9371228);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.7920133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.7083982);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.9371228);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.7920133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.5009132);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(17,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(247);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
