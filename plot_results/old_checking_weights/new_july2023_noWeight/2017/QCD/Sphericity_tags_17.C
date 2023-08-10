void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug  3 12:23:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-9369.735,1.133333,84327.61);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,71388.45);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,53108.44);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,30577.77);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,16315.13);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,24607.27);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,4721.728);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1460.568);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1773.988);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1067.11);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,799.1046);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,773.2285);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,210.5866);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,241.8251);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,169.5582);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,224.5592);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,94.39689);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,21.00901);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,26.32508);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,19.61115);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,15080.66);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3329.006);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2288.737);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1537.965);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,14865.42);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,828.0929);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,298.904);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,545.0645);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,389.0646);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,383.8136);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,384.0449);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,51.13944);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,59.72167);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,56.06018);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,59.27814);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,30.42444);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,10.5356);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,12.51804);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,9.840562);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(10314);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
