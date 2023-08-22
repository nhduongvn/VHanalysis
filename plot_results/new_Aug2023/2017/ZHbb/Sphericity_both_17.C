void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:23:15 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-0.9187445,1.133333,8.2687);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,6.453424);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,6.999957);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,5.090714);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.091818);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.490268);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,2.967358);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.435776);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,2.072058);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.813728);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.470115);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.285685);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.104194);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.8743361);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.7928382);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.5841792);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4334209);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.3935564);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2134793);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1409537);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06005026);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.01850994);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.004666703);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1023711);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1054145);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.09014696);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.08135079);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.07525423);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.06931009);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.06302803);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.05820582);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.05425255);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.04927498);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.0455406);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.04249872);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.03758973);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03605341);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03045608);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02615486);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02513812);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01830587);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01506881);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.009362325);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.005459729);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002722517);
   VbbHcc_both_Sphericity_stack_9->SetEntries(29329);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
