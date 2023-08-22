void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:20:44 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-79.58343,1.133333,503.9886);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,423.4001);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,317.8965);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,186.4207);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,114.7513);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,68.34757);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,36.21028);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,22.04954);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,12.60011);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,11.08804);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,7.956432);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,5.630714);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,4.669463);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,3.306881);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,2.004772);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,2.220601);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.134294);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,1.191644);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.6001691);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.178314);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,-0.05354825);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,9.102412);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,7.810847);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,6.190468);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,4.767858);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,3.752659);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.656595);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.098812);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.57132);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.567133);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.407318);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,1.046019);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,1.005887);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.801287);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.5737026);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.7461763);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4173126);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.4735985);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.3886609);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.08984536);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.05354825);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(14001);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->Draw("HIST");
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
