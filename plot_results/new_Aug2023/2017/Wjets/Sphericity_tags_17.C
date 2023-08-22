void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-13.05615,1.133333,117.5053);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,99.4754);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,48.88835);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,36.4111);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,17.04126);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,11.23512);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,8.692237);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,3.788579);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,3.676444);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.41506);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,2.056975);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.4741923);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.3330773);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,0.4014271);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,5.77623);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.430305);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.09110379);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.2538338);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.03654466);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.1757119);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,9.806022);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,4.20966);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,4.30857);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.324878);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.021005);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,1.682443);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,0.872386);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.429775);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.3627231);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.5013766);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.245049);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.1827854);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.2081991);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,5.113803);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1915645);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.08071571);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.1843665);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.03654466);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.1757119);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2041);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->Draw("HIST");
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
