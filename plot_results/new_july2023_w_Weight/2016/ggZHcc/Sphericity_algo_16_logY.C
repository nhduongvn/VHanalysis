void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-4.332252,1.133333,-0.1732437);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1359272);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1272278);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.07057416);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.04679318);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02443637);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.01327866);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.005049081);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.001428456);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0004284568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0007554533);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0002424816);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0003021276);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.007230528);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.006981378);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.005222638);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.004211542);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.003054049);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.002262873);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001370952);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007180681);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0004284568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0005345432);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0002424816);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0003021276);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->Draw("HIST");
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
