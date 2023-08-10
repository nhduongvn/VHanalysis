void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-4.491427,1.133333,40.42284);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,34.22039);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,31.53689);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.28049);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,12.17177);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,8.178516);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,4.027542);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,1.033172);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2194347);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.08000225);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02514357);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01600045);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006857336);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.004571557);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.004571557);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(16,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.2796788);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.268489);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1987445);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1667992);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.136727);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.09594826);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.04859632);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02239597);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01352285);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.00758107);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.006047602);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003959085);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.003232579);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.003232579);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(16,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.002285779);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(47604);

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
