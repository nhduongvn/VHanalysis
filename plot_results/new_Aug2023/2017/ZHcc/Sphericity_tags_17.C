void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-0.00594583,1.133333,0.05351247);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.04530156);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.03026679);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.01779863);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.01597785);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.008811813);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.009098182);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.001571673);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(9,0.002051074);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(10,0.001845983);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.008558043);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.006956388);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.005295782);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.004874322);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.003691283);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.00375351);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.001571673);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(9,0.002051074);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(10,0.001845983);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->Draw("HIST");
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
