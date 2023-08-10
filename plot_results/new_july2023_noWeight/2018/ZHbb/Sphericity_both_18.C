void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:29:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.358138,1.133333,12.22324);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,10.10314);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,10.34772);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,7.554498);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,6.455039);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,5.149859);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,4.345265);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,3.618388);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,3.0378);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.564644);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.125774);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.794336);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.437755);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.27775);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.9508839);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.8708817);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.6880194);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4342979);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.3474384);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1508614);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06628758);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02514357);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.002285779);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1519656);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.153794);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1314074);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1214693);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1084963);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.099661);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.09094412);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.08332909);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.07656506);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.06970688);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.06404261);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.05732704);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.05404308);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.04662092);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.04461662);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.03965678);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.03150728);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.02818097);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01856975);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01230929);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.00758107);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002285779);
   VbbHcc_both_Sphericity_stack_9->SetEntries(27714);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
