void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Aug 10 10:42:09 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.2,-1.224475,6.8,1.953483);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
   H_dR_Bj0_algo_17->SetLeftMargin(0.15);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,8.677976);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,22.81068);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,9.669745);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,7.686208);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,3.471191);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,2.23148);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,2.975306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,4.215017);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,1.487653);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,2.727364);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,1.487653);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.239711);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,0.9917687);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(21,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.466846);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,2.378178);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.548398);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.380484);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.9277147);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.7438266);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.8588969);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,1.022292);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.6073318);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.8223312);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.6073318);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.5544156);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(21,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(290);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
