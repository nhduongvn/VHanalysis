void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-89.87709,1.133333,808.8938);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,674.2682);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,684.7778);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,514.9231);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,382.3376);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,323.1988);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,226.6596);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,202.3174);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,165.1235);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,133.5365);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,117.0611);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,101.8382);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,65.96226);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,67.81272);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,58.17413);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,48.1785);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,42.3667);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,31.52333);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,18.50074);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,9.059155);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,6.988043);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,2.522754);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,19.67964);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,21.49624);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,22.07469);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,16.53479);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,17.28744);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,9.695833);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,11.13002);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,9.080566);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,10.05675);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,9.409561);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,7.789794);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,4.24921);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,6.269912);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.824619);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,6.866209);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.638543);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.637713);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.688433);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.725427);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.688054);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,1.083226);
   VbbHcc_both_Sphericity_stack_4->SetEntries(19219);

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
