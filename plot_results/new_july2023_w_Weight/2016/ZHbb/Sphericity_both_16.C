void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:25:06 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.891544,1.133333,8.023895);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,5.992436);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,6.792716);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,4.901033);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.067211);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.417916);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,2.77986);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.353262);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,1.856606);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.797522);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.439349);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.180987);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.058259);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.8052836);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.7137503);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.6059316);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4504681);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.352756);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2522261);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1342247);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06131612);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02893691);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.007780517);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.00166245);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.09635809);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1027265);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.08718993);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.07924198);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.0726835);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.06617884);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.06049235);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.05358696);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.05258513);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.04748645);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.04288309);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.04018551);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.035373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03345625);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03086393);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02649507);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02334335);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01994364);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01480035);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.009711903);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.006546433);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.003484295);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.00166245);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28649);

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
