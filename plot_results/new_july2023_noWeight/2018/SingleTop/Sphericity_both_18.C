void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug  3 12:26:20 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-31.96419,1.133333,287.6777);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,243.5367);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,238.7365);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,177.3282);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,136.1461);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,104.1604);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,84.97347);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,70.71955);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,62.28208);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,51.0757);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,44.6744);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,33.23577);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,33.11079);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,29.08584);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,21.7367);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,18.3558);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,11.84877);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.807134);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,9.284338);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,4.195757);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,1.39678);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.7781583);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.1519672);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04860075);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,0.05476569);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,6.417939);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,6.166427);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,5.414611);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,4.821831);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,4.219038);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,3.874556);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.553868);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.395121);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.959073);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.771665);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.466094);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.45531);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,2.337306);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.880602);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.871759);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.38127);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.317455);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.32089);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.8218436);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.5316778);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.4177801);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.08788257);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04860075);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.05476569);
   VbbHcc_both_Sphericity_stack_2->SetEntries(15898);

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
