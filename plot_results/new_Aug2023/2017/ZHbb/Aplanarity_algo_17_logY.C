void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-3.866457,1.133333,2.750699);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,64.77901);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,5.103571);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.764772);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.1741914);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.04621323);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.01605005);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.003886773);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.002512017);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001248212);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001430525);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3222793);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.08794043);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.03399979);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.01662129);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.008306846);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.004897749);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.002248049);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.001779214);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001248212);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001430525);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(49206);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->Draw("HIST");
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
