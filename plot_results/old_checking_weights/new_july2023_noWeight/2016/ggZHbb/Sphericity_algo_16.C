void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug  3 12:24:51 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.63204,1.133333,14.68836);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,12.3107);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,12.43459);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,7.004458);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,4.261824);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.421467);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.140019);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.3823934);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1374897);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.04905233);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.03544657);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01539599);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01002529);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.008235063);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.004296554);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.004654601);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002148277);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002506323);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001074139);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001432185);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.06639127);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.06672448);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.05007913);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.03906315);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.02944481);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02020345);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01170105);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.007016244);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004190823);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.003562515);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002347866);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.001894602);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001717129);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001240308);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001290954);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0008770305);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0009473012);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0006201542);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0007160924);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
