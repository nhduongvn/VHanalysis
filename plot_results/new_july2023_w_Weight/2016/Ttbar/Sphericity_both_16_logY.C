void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 10:43:26 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-2.014147,1.133333,4.348422);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,2354.666);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,2720.293);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2065.452);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1553.007);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1228.1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,962.8505);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,809.5729);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,670.6701);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,563.3503);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,481.9119);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,412.0556);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,353.4596);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,301.0722);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,253.1858);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,206.1036);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,166.2811);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,130.1941);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,95.39843);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,56.98903);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,29.2165);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,9.404229);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.642357);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.280913);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(25,0.08377996);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,12.77482);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,13.75022);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,12.00146);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,10.41693);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,9.263202);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,8.190556);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,7.523341);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,6.83629);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,6.280934);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,5.810711);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,5.385309);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,4.967284);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,4.573417);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,4.217574);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,3.799196);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.427524);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.021245);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.600336);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,1.995562);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.42817);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.8016676);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5759286);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.306803);
   VbbHcc_both_Sphericity_stack_3->SetBinError(25,0.08377996);
   VbbHcc_both_Sphericity_stack_3->SetEntries(238439);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
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
