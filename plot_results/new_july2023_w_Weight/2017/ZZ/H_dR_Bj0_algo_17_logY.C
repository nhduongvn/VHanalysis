void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:20:54 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.2,-1.234088,6.8,2.131565);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
   H_dR_Bj0_algo_17->SetLeftMargin(0.15);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,18.99192);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,32.91933);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,16.71289);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,6.077415);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,5.064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,1.012902);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.192998);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,2.887216);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.057215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.240547);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.132459);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8007697);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(443);

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
