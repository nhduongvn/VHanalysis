void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-4.24323,1.133333,1.722995);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,7.060303);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,5.922401);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,3.276747);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.143255);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.284269);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.7302421);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.3808573);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.216706);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1609887);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1207164);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.08157293);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.06565252);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.05287129);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.04134683);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.04069597);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02486327);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01880667);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.0168701);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.007416517);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001783354);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001352602);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0009674522);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0004512559);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.05626486);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.0515611);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03837908);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.03100454);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02401271);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.0180947);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01303417);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.009828634);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.008419837);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.007333612);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.006046037);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.005384959);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.004830495);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.004258846);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.004236954);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.003301846);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002891949);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.00271915);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.00182152);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0008957071);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0007823209);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.000684092);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0004512559);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(48968);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->Draw("HIST");
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
