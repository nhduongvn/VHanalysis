void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:29:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.8700973,1.133333,7.830875);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,5.810438);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,6.629313);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,4.752496);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,3.919882);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.298856);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,2.710805);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.268393);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,1.790258);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.718812);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.400056);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.133509);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.009854);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.7776561);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.6924712);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.5921728);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4314205);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.3311221);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.250059);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1373951);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.05633198);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02747902);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.006869754);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.001373951);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.08934907);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.09543767);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.08080653);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.07338749);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.06732359);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.06102878);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.05582705);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.04959563);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.04859592);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.04385895);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.03946373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.03724902);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.03268733);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03084512);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.02852396);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02434647);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02132945);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01853561);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01373951);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.008797578);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.006144495);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.003072247);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.001373951);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28929);

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
