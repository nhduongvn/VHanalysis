void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-1.117512,1.133333,10.05761);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,7.769213);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,8.514377);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,6.172071);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.971492);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,4.285838);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,3.558263);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.97429);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,2.489328);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.176221);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.755669);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.556851);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.332214);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.040114);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.960424);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.7050311);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.5229246);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4769993);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2699987);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1679919);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.0733358);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02331458);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.006001069);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1244373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1296455);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1107468);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.09974741);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.09290363);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.08432942);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.07762996);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.07080789);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.06608285);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.05972364);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.05580359);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.05186862);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.0455009);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.04400811);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03718212);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.03197563);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.03092452);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.02324916);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01849167);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01181482);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.006831047);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.00347133);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28446);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->Draw("HIST");
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
