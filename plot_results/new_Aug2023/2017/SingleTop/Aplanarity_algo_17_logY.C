void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-2.72817,1.133333,4.942881);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,7910.911);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1108.477);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,247.6016);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,60.50779);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,25.01519);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,7.014654);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3.47666);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.438601);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.198962);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.2811819);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.5171776);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3000766);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.0251266);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.02187584);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,36.29238);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,13.41538);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,6.353394);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.060912);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.091783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.013358);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.7102565);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.4319192);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.4792451);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.1082949);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3597835);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2016807);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0251266);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.02187584);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(142925);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
