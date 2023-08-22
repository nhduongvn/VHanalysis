void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:47 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-3.369688,1.133333,1.822549);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,10.44155);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,10.6115);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,7.972064);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,6.76387);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,5.460937);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,4.516145);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,3.743657);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,3.200601);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.702784);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.190807);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.861328);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.39774);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.347593);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,1.016994);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.8713142);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.7825329);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4572166);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.3908702);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1491159);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06442281);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.0307419);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.002822058);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1945868);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1919117);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.2082727);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1565439);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1408203);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.1225403);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.1163324);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.1108593);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.09957457);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.08439899);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.07823592);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.06857704);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.06760511);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.05917284);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.0532863);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.06828948);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.04259701);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.03636997);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.02162904);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01391793);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.009906053);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002822058);
   VbbHcc_both_Sphericity_stack_9->SetEntries(22331);

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
