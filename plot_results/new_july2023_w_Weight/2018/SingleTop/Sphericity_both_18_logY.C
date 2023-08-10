void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 10:43:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-2.430111,1.133333,3.25038);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,253.9699);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,247.7486);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,182.3439);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,141.3645);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,108.3724);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,89.24008);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,74.84932);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,65.39641);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,53.15196);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,47.61981);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,35.73314);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,35.01953);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,29.30047);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,21.68924);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,19.04581);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,12.0928);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,10.14712);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,9.500948);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,4.270652);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,1.168692);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.9796769);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.05103149);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.02747695);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,0.0782043);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,7.684839);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,7.210767);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,6.225795);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,5.663294);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,4.779666);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,4.529946);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,4.115543);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.869054);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,3.450948);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,3.097306);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.87503);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.773397);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,2.575662);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,2.112947);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,2.117759);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.602853);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.541188);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.437513);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.9174892);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4591324);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.5126799);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.09178723);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.02747695);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.0782043);
   VbbHcc_both_Sphericity_stack_2->SetEntries(15109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
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
