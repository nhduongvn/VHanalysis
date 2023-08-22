void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:23:13 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-3.870423,1.133333,34.8338);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,29.48893);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,24.04732);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,22.75756);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,12.5541);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,12.86674);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,10.01791);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,7.56827);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,13.17743);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,4.824647);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,10.80961);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,3.071304);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,2.587688);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,2.136672);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.556027);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,2.768562);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,1.660666);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.118948);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.2391611);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.3571849);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,1.832965e-05);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.0007523573);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,2.741437);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,2.542859);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,2.535424);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,1.276801);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,2.099867);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,1.786314);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.33419);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,5.838051);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,1.014296);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,5.326452);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,0.5247743);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.4911299);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.410067);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.5583646);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,0.8815933);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.4335968);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3112796);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.1216554);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.1767924);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,1.832965e-05);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.0004343913);
   VbbHcc_both_Sphericity_stack_5->SetEntries(3486);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->Draw("HIST");
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
