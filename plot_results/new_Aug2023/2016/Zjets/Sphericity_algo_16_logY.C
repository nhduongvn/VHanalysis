void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:17:31 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-2.114447,1.133333,4.502587);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3658.764);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3599.353);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1992.673);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1182.667);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,611.4619);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,260.3578);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,73.74951);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,31.57687);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.506037);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,4.330464);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,2.095473);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,2.679796);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,1.057731);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.5736143);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,2.924547);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.458026);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.2178702);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.4241253);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.07051581);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,40.0449);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,44.62273);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,31.54713);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,23.69366);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,16.34505);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,9.927542);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,4.469117);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.888648);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.080452);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.8637484);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.4676167);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.6935672);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3118813);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.210278);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,1.816634);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.1941128);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.09424649);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.2533849);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.05149086);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(90522);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
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
