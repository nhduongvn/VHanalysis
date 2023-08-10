void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:27:52 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-8370.331,1.133333,75332.98);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,63773.95);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,49597.51);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,25697.06);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,17967.34);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,6137.757);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,5308.496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1278.491);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1319.933);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,631.3878);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,220.1743);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,223.176);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,194.4227);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,138.8705);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,98.6687);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,79.55365);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,84.65874);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,62.54926);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,44.93635);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,16.93504);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,4777.263);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3960.582);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,3061.577);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2204.375);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,880.7675);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1617.705);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,294.0865);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,395.0742);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,276.3312);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,51.36701);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,58.25568);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,49.68893);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,38.28686);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,40.53088);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,20.9888);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,28.63488);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,32.69202);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,24.69515);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,8.49773);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9717);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
