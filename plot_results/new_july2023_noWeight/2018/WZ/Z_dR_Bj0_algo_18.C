void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Aug 10 12:28:40 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.2,-3.579625,6.8,32.21662);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,27.27333);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,14.52216);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,6.021385);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,4.604589);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,5.312987);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,2.479394);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.125195);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,3.187792);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.416796);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,3.108085);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,2.267981);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,1.4604);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,1.277083);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,1.371807);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.9371228);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.8676071);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.5009132);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.6134909);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(247);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
