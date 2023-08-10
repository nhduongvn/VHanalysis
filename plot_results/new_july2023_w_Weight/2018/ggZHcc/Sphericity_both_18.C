void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.002977897,1.133333,0.02680107);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.02268874);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01605158);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.01084179);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.01191106);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.0103121);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.007313528);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.006047721);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.004491305);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.00402797);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.003681537);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002666252);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002044625);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001348967);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.002721035);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.002177508);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0006418877);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.001437489);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(22,0.0004371028);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.002873452);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.002370088);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001879569);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.002019235);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.00191676);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.001616805);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.001497246);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.001255787);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.001184437);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.001138138);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.001016204);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0008029327);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0006821254);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0009162305);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0008991352);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004539451);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0007010092);
   VbbHcc_both_Sphericity_stack_12->SetBinError(22,0.0004371028);
   VbbHcc_both_Sphericity_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
