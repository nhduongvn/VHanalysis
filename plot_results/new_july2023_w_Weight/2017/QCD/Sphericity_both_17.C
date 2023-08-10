void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-5896.258,1.133333,53066.32);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,28610.75);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36785.15);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,30274.01);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,20648.69);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,17272.6);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,13188.41);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,10786.04);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5844.862);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,44923.87);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6005.99);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4877.746);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,3709.862);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,3043.452);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2341.293);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,1676.195);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1924.242);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,2141.695);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,635.9452);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,570.4476);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,279.9112);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,60.95662);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,36.36305);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,363.4301);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2140.053);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2647.086);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2878.988);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,1991.493);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1800.148);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1591.783);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1469.178);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,812.4472);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,26528.61);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1040.69);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,904.2569);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,769.4203);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,684.7515);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,534.3548);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,498.3275);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,586.0403);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,687.2223);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,124.2793);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,348.5222);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,238.9284);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,33.18888);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,23.56384);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,338.0657);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10320);

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
