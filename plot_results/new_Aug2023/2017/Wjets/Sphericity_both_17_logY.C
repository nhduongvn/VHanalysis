void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:18:46 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-0.9359865,1.133333,2.362264);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,56.87092);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,35.75624);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,33.10146);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,24.05344);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,20.93098);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,15.50158);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,10.58623);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,11.77448);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,13.18744);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,5.97969);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,8.445434);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.222286);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,3.872443);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.419762);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,2.726491);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.840795);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.224338);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.4953003);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,1.034903);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,8.790998);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.274909);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.837518);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.255551);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,3.07664);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.649458);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.647067);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,1.873806);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,5.571334);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.037007);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.032373);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6416667);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.7494951);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.5254389);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,0.5691001);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,1.317718);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.4027355);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.2155564);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.5153401);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2217);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->Draw("HIST");
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
