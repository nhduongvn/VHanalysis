void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug  3 12:23:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-140.1443,1.133333,1261.298);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1067.766);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,139.8668);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,41.1508);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,14.4118);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,8.653732);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.606151);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.121549);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,1.486211);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.512072);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.6277684);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.05476569);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.2005679);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.1581321);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.317669);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.04860075);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,13.45181);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.700705);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.631689);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.469083);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.317413);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.5543685);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5845876);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.4384326);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.290186);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.3014029);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.05476569);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.100426);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.09143629);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.2734223);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.04860075);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(14890);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
