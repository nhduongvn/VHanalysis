void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-4.722426,1.133333,42.50183);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,35.98039);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,32.54102);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.99315);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,12.57162);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,8.386546);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,4.290407);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,1.136816);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2010205);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.08487491);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.03285349);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01498879);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006605692);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.002155772);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.005805929);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.002884128);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(16,0.003771732);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.3649486);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.3402824);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.2567282);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.212707);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1666318);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.1666158);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.06729535);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02456907);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01619569);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.01041636);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.006329091);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.004715319);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002155772);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.004105759);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002884128);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(16,0.003771732);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(38365);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
