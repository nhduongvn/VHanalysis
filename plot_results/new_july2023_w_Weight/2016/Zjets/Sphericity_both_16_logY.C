void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 10:43:26 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.7014568,1.133333,3.246095);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,344.4031);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,374.7927);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,277.8019);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,235.071);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,174.6222);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,149.3678);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,94.6511);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,85.00388);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,81.67722);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,67.29733);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,66.33692);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,54.51615);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,43.01778);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,41.57858);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,25.07722);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,18.80615);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,17.10748);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,13.21318);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,9.393215);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,5.720627);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.577944);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.9870255);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,13.96828);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,15.66088);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,14.43029);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,13.92687);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,10.5719);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,10.13128);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,4.773448);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,5.763953);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,7.068929);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,5.5635);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,6.537758);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,5.881324);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,4.683119);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.168588);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,3.109371);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.01166);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,2.950103);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,3.18836);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,2.861194);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,2.950608);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.6334535);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.4465512);
   VbbHcc_both_Sphericity_stack_4->SetEntries(15488);

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
