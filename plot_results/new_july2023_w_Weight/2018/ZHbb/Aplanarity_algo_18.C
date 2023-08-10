void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 12:24:20 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-14.60672,1.133333,131.4605);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,111.2893);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,8.002527);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.209568);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2362148);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.09500915);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.0163943);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.007475228);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(12,0.002971343);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(13,0.002431021);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.594732);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1554117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.0602719);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02848294);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01557723);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006316363);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.004492949);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(12,0.002971343);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(13,0.002431021);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(47604);

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
