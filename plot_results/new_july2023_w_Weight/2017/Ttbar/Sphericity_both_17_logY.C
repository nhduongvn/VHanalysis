void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:21:50 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-1.951038,1.133333,4.525922);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,3557.354);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,3987.286);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2958.339);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2254.66);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1741.356);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1403.477);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1167.769);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,959.5135);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,815.2826);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,699.0646);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,595.9303);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,507.6633);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,439.3313);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,358.6777);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,307.7324);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,253.0109);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,186.7881);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,131.4321);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,80.81208);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,37.82549);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,15.03462);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.400006);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.990407);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.09946907);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,16.19449);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,17.16984);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,14.83371);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,12.94843);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,11.38024);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,10.23329);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,9.334576);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,8.455632);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,7.792011);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,7.227311);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,6.676886);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,6.16247);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.727047);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,5.177887);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.804643);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,4.342881);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.729469);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,3.12989);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.447594);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.67221);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,1.04763);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5670247);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.265868);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.07260893);
   VbbHcc_both_Sphericity_stack_3->SetEntries(333938);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
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
