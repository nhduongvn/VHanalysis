void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 10:42:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-1.836884,1.133333,5.105068);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,13593.26);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1771.308);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,415.5424);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,87.40884);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,28.22909);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,6.372774);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,7.354479);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,3.487524);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.4506334);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.341819);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1439928);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.2637121);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,102.077);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,42.62998);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,21.32377);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,9.070812);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.110292);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,2.97595);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,3.723304);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,2.868692);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.3160833);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.272341);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.1029559);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.2637121);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(94081);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
