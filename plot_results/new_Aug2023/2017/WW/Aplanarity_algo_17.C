void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:21:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-3.050262,1.133333,27.45235);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,23.24009);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,1.196786);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,0.3528268);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.2291478);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,2.702598);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.6044425);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.3528268);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.2291478);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->Draw("HIST");
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
