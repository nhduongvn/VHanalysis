void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-1.889938,1.133333,17.00945);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,14.25607);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,14.39953);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,8.111319);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,4.935288);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.804112);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.320168);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4428201);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1592162);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.0568037);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.04104793);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.0178289);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01160952);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.009536387);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.004975506);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.005390132);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002487753);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002902379);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001243877);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001658502);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.07688258);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.07726845);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.05799276);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.04523601);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.03409775);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02339605);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01355007);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.008124968);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004853067);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.004125472);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002718881);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.002193992);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001988474);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001436305);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001494954);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.001015621);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.001096996);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0007181525);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0008292511);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
