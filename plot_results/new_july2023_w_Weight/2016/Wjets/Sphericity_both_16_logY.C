void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:21:49 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-4.043322,1.133333,2.494345);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,36.56195);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,31.07385);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,28.93774);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,15.83881);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,16.30672);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,12.97948);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,9.672025);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,16.71669);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,6.068659);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,14.3819);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,3.406657);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.066593);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,2.539302);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.203429);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,3.564187);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.209264);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.36277);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.2710035);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4417069);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.0008155949);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,3.659563);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.440962);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.376586);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,1.698759);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,2.782814);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.452825);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.745011);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,7.506885);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,1.371311);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,7.411083);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,0.6388137);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6239463);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.4949733);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.71118);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,1.250711);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.5587659);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3820049);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.1377898);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.2214141);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.000470903);
   VbbHcc_both_Sphericity_stack_5->SetEntries(3431);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->Draw("HIST");
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
