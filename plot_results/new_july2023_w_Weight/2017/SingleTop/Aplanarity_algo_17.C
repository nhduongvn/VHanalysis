void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:24:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-1217.98,1.133333,10961.82);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,9279.851);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1321.973);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,294.9545);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,72.63233);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,30.02298);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,8.38518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,4.287014);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.685229);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.512328);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.3578049);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.5757627);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.2995002);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.027729);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,42.21338);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,15.91569);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.533063);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.639022);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.486614);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.244382);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.8623012);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.5101563);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.5786797);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.1288398);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3818142);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2280077);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.027729);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(138653);

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
