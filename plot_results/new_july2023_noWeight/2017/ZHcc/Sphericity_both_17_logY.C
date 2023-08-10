void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-3.325141,1.133333,-1.096768);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02212352);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02528402);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01738276);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.01264201);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01264201);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.009481507);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.006321005);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.007901256);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.005912758);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.006321005);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.0052411);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.004469625);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.004469625);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.004469625);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.003870809);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003160502);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.003533549);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003160502);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.002737075);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Sphericity_stack_11->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->Draw("HIST");
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
