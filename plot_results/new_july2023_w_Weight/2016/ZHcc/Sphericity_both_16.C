void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:25:06 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.003496684,1.133333,0.03147015);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02313139);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02350657);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.0266414);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.005880822);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.005625697);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.005365819);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005802713);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.002944518);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.002909221);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.002888021);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.008192289);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.008323525);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.008920122);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.00415837);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.003978767);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003803814);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.004103386);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002944518);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002909221);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.002888021);
   VbbHcc_both_Sphericity_stack_11->SetEntries(36);

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
