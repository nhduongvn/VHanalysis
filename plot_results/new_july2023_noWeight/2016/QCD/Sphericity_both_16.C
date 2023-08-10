void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:29:31 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-4435.307,1.133333,39917.76);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,27124.86);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,33792.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,22436.02);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,20057.97);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,13241.03);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,10375.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,9945.253);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5409.385);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,4260.215);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6910.338);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4267.124);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,4970.952);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2994.841);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2396.001);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,4004.699);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1465.961);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1003.233);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1405.913);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,63.34631);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,133.5598);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,25.34796);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,33.96282);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2107.067);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,3565.737);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2973.321);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2661.378);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1974.352);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1837.579);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1853.535);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,874.7474);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,736.5696);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,2120.842);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,864.8459);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1616.226);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,722.8159);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,613.9251);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1569.037);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,476.7447);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,389.0674);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,542.3561);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,26.12635);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,50.7109);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,11.35382);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,23.70945);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10203);

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
