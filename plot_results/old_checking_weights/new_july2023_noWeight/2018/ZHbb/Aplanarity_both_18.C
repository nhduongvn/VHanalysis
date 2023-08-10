void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug  3 12:26:24 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-5.144845,1.133333,46.3036);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,39.19882);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,10.98088);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,5.335007);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.87551);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.79205);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.117746);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.7565927);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4640131);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2742934);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1942912);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1371467);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.08914537);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.05714447);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.0320009);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.02742934);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.006857336);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.004571557);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2993323);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1584294);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1104294);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.08107267);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0640018);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.05054621);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.0415861);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.03256733);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02503945);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.02107384);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01770557);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01427468);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01142889);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.008552601);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.007918169);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003959085);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.003232579);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(27714);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
