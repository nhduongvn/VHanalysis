void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:28:40 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.2,-4.619785,6.8,41.57806);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,8.609671);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,35.19836);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,24.81611);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,9.875799);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,3.291933);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,4.05161);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,3.038707);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,2.27903);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,1.519354);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.476546);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,2.985486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.506806);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.581393);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,0.9130179);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,0.8771992);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.6202735);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(443);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
