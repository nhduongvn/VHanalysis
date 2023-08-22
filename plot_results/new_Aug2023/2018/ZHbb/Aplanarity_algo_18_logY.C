void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-3.473641,1.133333,2.937028);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,104.3307);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,7.460113);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.134052);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2133599);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.09213816);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.01322794);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.008420504);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(13,0.002940734);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.6254095);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1582805);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.06383217);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02573506);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01648428);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006086751);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.005056403);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(13,0.002940734);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(38365);

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
