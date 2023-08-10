void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:31:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-1.514159,1.133333,4.69334);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,6237.938);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,5246.159);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2975.271);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1739.944);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1008.208);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,591.5302);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,341.5453);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,211.9354);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,146.167);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,99.18498);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,75.4026);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,54.8113);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,40.16257);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,30.78852);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,21.71942);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,16.9211);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,13.51798);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,8.745518);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,4.826378);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.995764);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.6167674);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.2556355);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,19.72749);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,18.1024);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,13.6361);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,10.43586);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,7.934629);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.072498);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,4.614114);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.628043);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.024912);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.48787);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.163594);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.853793);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.589305);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.385014);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.167265);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.038461);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.9226859);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.7427888);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.5476048);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3472911);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1996429);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1297545);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(317372);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->Draw("HIST");
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
