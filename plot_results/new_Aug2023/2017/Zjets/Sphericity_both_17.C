void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:23:14 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-53.80942,1.133333,484.2848);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,389.6236);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,409.9765);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,285.8694);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,246.8649);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,166.1823);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,146.7169);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,127.7977);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,101.9557);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,87.99611);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,68.79831);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,55.1973);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,51.87858);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,47.98863);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,43.11389);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,31.60668);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,22.87618);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,21.46867);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,10.62189);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,6.255534);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,2.943308);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,0.8938303);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.119283);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.0810002);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,11.79892);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,13.25698);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,9.119702);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,9.800655);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,6.697229);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,7.434976);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,7.563628);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,6.790086);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,5.821738);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,3.70866);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,3.53744);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,4.364901);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,2.946266);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,4.926298);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.322295);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.005247);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.709651);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,1.317631);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.015874);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,0.8111938);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.4850418);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.119283);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.0810002);
   VbbHcc_both_Sphericity_stack_4->SetEntries(18334);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->Draw("HIST");
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
