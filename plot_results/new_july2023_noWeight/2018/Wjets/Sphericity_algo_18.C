void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug  3 12:24:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-161.7896,1.133333,1456.106);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1232.682);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1030.442);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,571.754);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,366.5742);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,183.562);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,76.81612);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,36.16396);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,12.41107);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.509351);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,2.177229);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.5333332);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.3746698);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7027659);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.3310339);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.5639564);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1715234);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.2594997);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,54.96429);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,43.89838);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,29.34619);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,29.02846);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,13.04542);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,8.39835);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,11.63777);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,3.830323);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7791558);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.6740877);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.3095927);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.3746698);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.3909862);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.175153);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.3697314);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1343137);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.2594997);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(15329);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
