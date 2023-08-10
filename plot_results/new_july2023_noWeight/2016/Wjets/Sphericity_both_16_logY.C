void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:33:04 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-4.697514,1.133333,2.564435);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,36.36565);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,30.1135);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,28.13031);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,15.17157);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,15.1518);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,12.45615);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,9.430079);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,15.43056);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,6.979783);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,12.96241);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,3.505102);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.346513);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,2.606563);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.977874);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,3.406609);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.044671);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.200731);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.2457302);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4131073);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.0002136538);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.0006409613);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,3.530094);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.300154);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.163218);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,1.635305);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,2.529716);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.246223);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.733863);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,6.381075);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,1.673164);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,6.213928);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,0.6185418);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6567382);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.4657392);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.6476085);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,1.164707);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.5261371);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3396378);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.1239065);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.19677);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.0002136538);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.0003700592);
   VbbHcc_both_Sphericity_stack_5->SetEntries(3789);

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
