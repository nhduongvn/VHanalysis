void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:32:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-2.13002,1.133333,4.375658);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,2802.472);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,2653.178);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1552.922);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,906.4775);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,458.2372);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,197.8919);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,61.81175);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,19.80077);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.527527);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,4.617923);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,1.138295);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,0.9678834);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8730559);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.5415069);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.9570391);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,3.010445);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.6363343);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.1083014);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.06630981);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,38.01496);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,39.61798);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,30.12378);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,23.0613);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,14.8307);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,9.190494);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,4.533493);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.362128);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.370183);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.03053);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.3133989);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.4180278);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.2839558);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2421692);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.3086993);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,2.732634);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.3908482);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.1083014);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.06630981);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(52708);

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
