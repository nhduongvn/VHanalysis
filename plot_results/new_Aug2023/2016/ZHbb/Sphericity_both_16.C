void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:23:14 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.6325474,1.133333,5.692926);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,4.30366);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,4.819409);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,3.488262);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,2.904687);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,2.43772);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,1.979752);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,1.684248);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,1.325279);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.288457);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.025025);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,0.8443262);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,0.7586008);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.5741065);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.5092554);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.4331104);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.3158758);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.2472033);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.180091);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.09583002);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.04295703);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.01993626);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.004672696);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.001087504);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.06900845);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.07264433);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.0618574);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.05649496);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.05179908);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.04706999);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.04320427);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.03817389);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.0376427);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0337506);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.03059673);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.02871793);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.02512644);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.023824);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.02201665);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.01858672);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.01640706);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01403764);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.0104805);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.006730516);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.004519911);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002119962);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.001087504);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28929);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
