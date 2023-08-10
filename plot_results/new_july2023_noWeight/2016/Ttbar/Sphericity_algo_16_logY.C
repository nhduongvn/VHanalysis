void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:32:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.492518,1.133333,6.156801);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,124975.1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,130112.7);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,67969.3);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,36442.45);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,19235.67);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,9239.284);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,4048.423);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1804.329);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,900.6094);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,480.3534);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,275.8195);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,170.2216);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,100.3595);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,73.72271);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,48.81531);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,32.47066);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,20.54658);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,13.02575);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,8.883477);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,3.323842);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,1.53813);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.374493);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,88.26298);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,90.37476);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,65.28501);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,47.76047);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,34.64032);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,23.89438);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,15.68124);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,10.35778);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,7.26786);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,5.269496);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.980446);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,3.136029);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.396167);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,2.054952);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.677699);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.375757);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.077612);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.8669303);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.7247175);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.4483573);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.3020262);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1549237);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(6548404);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->Draw("HIST");
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
