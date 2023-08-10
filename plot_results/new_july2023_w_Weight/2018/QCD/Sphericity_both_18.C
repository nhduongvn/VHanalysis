void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-5172.407,1.133333,46551.66);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,37960.36);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,39408.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,29541.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,29716.65);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,20576.26);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,17855.96);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,14855.43);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,7956.857);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,9967.027);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,7576.564);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,6370.927);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,6238.56);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,4717.823);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,3021.224);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,2544.172);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1908.26);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1696.053);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1095.338);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,784.3793);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,709.7842);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,780.0869);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,56.6746);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2742.766);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2817.589);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2435.962);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,3291.841);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2956.046);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,2132.769);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1913.616);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,1067.817);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,1602.766);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1315.485);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,1619.739);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,2049.377);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,1146.498);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,643.0579);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,674.0768);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,480.7418);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,502.4927);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,441.9708);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,350.762);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,548.3937);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,707.2649);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,37.82273);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10527);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->Draw("HIST");
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
