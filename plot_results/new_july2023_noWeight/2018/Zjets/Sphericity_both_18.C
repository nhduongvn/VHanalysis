void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:29:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-78.1368,1.133333,703.2311);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,595.3279);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,593.5526);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,438.5243);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,333.2872);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,276.0218);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,197.7128);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,182.0918);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,141.3412);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,116.7109);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,102.7898);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,89.30957);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,60.10905);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,61.86222);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,53.3623);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,41.15586);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,37.83401);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,27.36188);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,15.69805);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,8.196981);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,6.146289);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,2.182903);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,16.83721);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,17.20186);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,14.75735);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,13.08093);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,11.74494);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,8.244429);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,10.50139);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,7.232188);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,7.894064);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,7.599594);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,7.445282);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,3.76367);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,5.582952);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.417415);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,4.98107);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.174067);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,2.832146);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.206562);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.485449);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.411262);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.890675);
   VbbHcc_both_Sphericity_stack_4->SetEntries(19394);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->Draw("HIST");
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
