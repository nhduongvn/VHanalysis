void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:29:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-344.6292,1.133333,3101.662);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,2282.676);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,2625.746);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,1988.739);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1487.373);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1177.333);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,928.8452);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,775.072);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,641.8823);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,539.4564);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,459.5307);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,391.1838);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,336.6359);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,288.5373);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,241.4997);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,197.599);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,161.1148);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,124.9258);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,91.13727);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,53.84474);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,27.91747);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,8.685856);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.454588);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.145167);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(25,0.06964491);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,11.97917);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,12.85965);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,11.19148);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,9.679568);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,8.606883);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,7.647624);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,6.993506);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,6.357156);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,5.834872);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,5.387251);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,4.977516);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,4.610231);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,4.269044);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,3.905118);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,3.537993);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.200086);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,2.807859);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.408134);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,1.843343);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.32795);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.7316928);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5388198);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2730469);
   VbbHcc_both_Sphericity_stack_3->SetBinError(25,0.06964491);
   VbbHcc_both_Sphericity_stack_3->SetEntries(243289);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
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
