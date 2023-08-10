void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:33:07 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-2.216183,1.133333,3.801779);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,836.4378);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,241.2115);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,118.6924);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,68.85021);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,38.75942);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,27.63151);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,19.73437);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,10.73657);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,8.863447);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,5.088034);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,3.434516);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,2.063801);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,2.104861);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,1.23406);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.9424554);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.317669);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3724347);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.1458022);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.04860075);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.05476569);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,11.91756);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,6.351602);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,4.529363);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.500788);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.541306);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.205333);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.882407);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.310523);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.314673);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.9656998);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.7607704);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.5972252);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.6862086);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.4446462);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.4284134);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.2734223);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2788531);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.08417896);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.04860075);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.05476569);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(15898);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
