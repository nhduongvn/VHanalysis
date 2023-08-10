void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 12:28:45 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-26120.74,1.133333,235086.6);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,199015.1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,24541.13);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,4945.632);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1316.175);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,430.2292);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,169.7369);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,71.46133);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,35.46293);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,20.34041);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,10.13195);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,7.120564);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.4937);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.943758);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.405321);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.6250458);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2095732);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.1372627);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2782046);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2782046);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(20,0.04698062);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.06863135);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,110.6642);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,38.63731);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,17.20722);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,8.800046);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.004798);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.122337);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.018971);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.400975);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.078022);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7528733);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.64674);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4428859);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.330989);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2877006);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1767899);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1064509);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.09705938);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1266573);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1266573);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(20,0.04698062);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.06863135);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3891102);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
