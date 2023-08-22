void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:23:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.002758092,1.133333,0.02482282);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.02101403);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01470698);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.01004087);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.01106858);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.009469086);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.006709469);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.005565867);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.004149317);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003736128);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.003396114);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002472884);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.001857426);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001254394);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.002538565);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.002328992);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0005809083);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.001311534);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(22,0.0004012604);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.002662794);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.002170931);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001743217);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001874159);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001760723);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.001483759);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.001379602);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.001161713);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.00110368);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.001052077);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0009411517);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0007293802);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.000637769);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0008553405);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0009958601);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004108203);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0006397848);
   VbbHcc_both_Sphericity_stack_12->SetBinError(22,0.0004012604);
   VbbHcc_both_Sphericity_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->Draw("HIST");
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
