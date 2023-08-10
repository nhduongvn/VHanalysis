void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-0.003876734,1.133333,0.0348906);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.0259097);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02953702);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01917637);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.0133296);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.0149062);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01445791);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01067984);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.006532329);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.009162682);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.007738399);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005559189);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.005870315);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.003680122);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.0009001677);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.002009147);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.002416406);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.007019022);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.007445052);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005985093);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.004764879);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.005381832);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.005195572);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.004397012);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003380844);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.004134055);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003893283);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003321801);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.003391306);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002607332);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.0009001677);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.002009147);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.002416406);
   VbbHcc_both_Sphericity_stack_11->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->Draw("HIST");
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
