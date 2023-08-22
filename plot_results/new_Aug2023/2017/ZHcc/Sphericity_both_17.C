void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:23:15 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-0.003139664,1.133333,0.02825698);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02294742);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02392125);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01651046);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.01133166);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01271716);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01206772);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.009401315);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.006077784);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.007646481);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.006397411);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005100843);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.00491805);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.002995462);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.0006310176);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(15,0.001697729);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(19,0.002276254);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.006222298);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.006043482);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005149679);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.004051476);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.004605622);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.004350933);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.003853581);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003167824);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.003470835);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003237624);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003027586);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002841993);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002125726);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.0006310176);
   VbbHcc_both_Sphericity_stack_11->SetBinError(15,0.001697729);
   VbbHcc_both_Sphericity_stack_11->SetBinError(19,0.002276254);
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
