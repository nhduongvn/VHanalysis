void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Aug  3 12:24:48 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.2,-6.857876,6.8,61.72088);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,12.29423);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,52.25048);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,31.01499);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,13.13247);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,10.05892);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,5.308873);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,3.352972);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.853425);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,3.820934);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.943813);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.915568);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.217939);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.9679197);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(19,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->Draw("HIST");
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
