void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:23:14 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-5715.922,1.133333,51443.3);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,23295.35);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,29564.01);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,24996.07);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,16608.33);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,13741.72);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,10631.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,8687.475);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,4843.051);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,43549.88);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,4839.198);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,3968.848);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,2869.064);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2370.103);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,1962.623);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,1335.46);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1547.67);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1663.799);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,520.6975);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,438.5646);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,238.0885);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,49.16548);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,30.39194);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,261.4261);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,1703.187);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2079.241);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2364.581);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,1584.322);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1396.247);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1261.72);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1177.196);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,635.674);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,26419.47);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,816.318);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,732.4102);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,569.3964);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,542.2073);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,449.8321);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,388.0794);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,456.0441);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,548.2949);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,105.1192);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,246.9533);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,201.8466);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,27.4759);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,20.19994);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,237.597);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9795);

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
