void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-54.09549,1.133333,342.5244);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,287.753);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,219.3621);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,137.0022);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,78.34283);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,44.63538);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,28.55596);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,18.25454);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,10.55946);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,4.823786);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,5.825578);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.205375);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,2.024134);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.903285);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.103998);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.077896);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.148954);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.866754);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.3418576);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,-0.04366862);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.0318223);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,6.974526);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,6.082677);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.937869);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.705374);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.767551);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.276158);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.826241);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.531264);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.8109116);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.030555);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.61753);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.6144462);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.6154601);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.3674661);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.3357911);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4505503);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.4888514);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.2069331);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.04366862);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.0318223);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(11598);

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
