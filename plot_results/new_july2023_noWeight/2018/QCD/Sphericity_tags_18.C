void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:27:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-9089.967,1.133333,81809.7);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,69256.89);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,60316.17);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,33579.97);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,21794.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,12963.79);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,7355.445);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,4569.572);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1859.747);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1007.946);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,697.6301);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,775.8188);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,367.404);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,380.7753);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,53.37641);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,196.3118);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,231.6985);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,125.9898);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,37.84994);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,60.12448);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,3724.576);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4004.18);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2567.647);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2030.07);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,2168.626);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1209.467);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1002.951);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,414.3618);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,385.6215);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,130.9145);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,383.046);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,86.56829);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,92.01096);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,21.30663);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,57.09642);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,70.59689);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,57.33765);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,17.99832);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,34.92229);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(10231);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
